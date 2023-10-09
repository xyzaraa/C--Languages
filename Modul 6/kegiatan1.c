#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char id[20];
    char judul[100];
    char author[100];
    int jumlah_halaman;
    char genre[100];
};

void displayListOfBooks(FILE *file) {
    struct Book book;
    fseek(file, 0, SEEK_SET);

    printf("\nList Buku:\n");

    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%[^\n]\n", book.id, book.judul, book.author, &book.jumlah_halaman, book.genre) != EOF) {
        printf("ID: %s\n", book.id);
        printf("Judul Buku: %s\n", book.judul);
        printf("Author: %s\n", book.author);
        printf("Jumlah Halaman: %d\n", book.jumlah_halaman);
        printf("Genre Buku: %s\n", book.genre);
        printf("------------------------------\n");
    }
}

int isIdExists(FILE *file, const char *id) {
    struct Book book;
    fseek(file, 0, SEEK_SET);

    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%[^\n]\n", book.id, book.judul, book.author, &book.jumlah_halaman, book.genre) != EOF) {
        if (strcmp(book.id, id) == 0) {
            return 1;
        }
    }

    return 0;
}

void createNewBook(FILE *file) {
    struct Book book;
    printf("Masukkan ID buku: ");
    scanf("%s", book.id);

    if (isIdExists(file, book.id)) {
        printf("ID sudah terdaftar.\n");
        return;
    }

    printf("Masukkan judul buku: ");
    scanf(" %[^\n]s", book.judul);

    printf("Masukkan nama author: ");
    scanf(" %[^\n]s", book.author);

    printf("Masukkan jumlah halaman: ");
    scanf("%d", &book.jumlah_halaman);

    printf("Masukkan genre buku: ");
    scanf(" %[^\n]s", book.genre);

    fprintf(file, "%s|%s|%s|%d|%s\n", book.id, book.judul, book.author, book.jumlah_halaman, book.genre);
    printf("Buku berhasil ditambahkan.\n");
}

void updateBookInformation(FILE *file) {
    char idToUpdate[20];
    printf("Masukkan ID buku yang ingin diupdate: ");
    scanf("%s", idToUpdate);

    if (!isIdExists(file, idToUpdate)) {
        printf("Buku dengan ID %s tidak ditemukan.\n", idToUpdate);
        return;
    }

    struct Book book;
    FILE *tempFile = fopen("temp.txt", "w");

    fseek(file, 0, SEEK_SET);

    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%[^\n]\n", book.id, book.judul, book.author, &book.jumlah_halaman, book.genre) != EOF) {
        if (strcmp(book.id, idToUpdate) == 0) {
            printf("Masukkan judul buku yang baru: ");
            scanf(" %[^\n]s", book.judul);

            printf("Masukkan nama author yang baru: ");
            scanf(" %[^\n]s", book.author);

            printf("Masukkan jumlah halaman yang baru: ");
            scanf("%d", &book.jumlah_halaman);

            printf("Masukkan genre buku yang baru: ");
            scanf(" %[^\n]s", book.genre);
        }

        fprintf(tempFile, "%s|%s|%s|%d|%s\n", book.id, book.judul, book.author, book.jumlah_halaman, book.genre);
    }

    fclose(file);
    fclose(tempFile);

    remove("library_books.txt");
    rename("temp.txt", "library_books.txt");
    printf("Informasi buku berhasil diupdate.\n");

    file = fopen("library_books.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file library_books.txt.\n");
        return;
    }


    displayListOfBooks(file);
}

void deleteBook(FILE *file) {
    char idToDelete[20];
    printf("Masukkan ID buku yang ingin dihapus: ");
    scanf("%s", idToDelete);

    if (!isIdExists(file, idToDelete)) {
        printf("Buku dengan ID %s tidak ditemukan.\n", idToDelete);
        return;
    }

    struct Book book;
    FILE *tempFile = fopen("temp.txt", "w");

    fseek(file, 0, SEEK_SET);

    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%d|%[^\n]\n", book.id, book.judul, book.author, &book.jumlah_halaman, book.genre) != EOF) {
        if (strcmp(book.id, idToDelete) != 0) {
            fprintf(tempFile, "%s|%s|%s|%d|%s\n", book.id, book.judul, book.author, book.jumlah_halaman, book.genre);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("library_books.txt");
    rename("temp.txt", "library_books.txt");
    printf("Buku dengan ID %s telah dihapus.\n", idToDelete);
}

int main() {
    FILE *file = fopen("library_books.txt", "a+");

    if (file == NULL) {
        printf("Gagal membuka file library_books.txt.\n");
        return 1;
    }

    printf("Selamat datang di Program Library!\n");

    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Create New Book\n");
        printf("2. Display List of Books\n");
        printf("3. Update Book Information\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Pilih menu: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createNewBook(file);
                break;
            case 2:
                displayListOfBooks(file);
                break;
            case 3:
                updateBookInformation(file);
                break;
            case 4:
                deleteBook(file);
                break;
            case 5:
                printf("Terima kasih telah menggunakan Program Library!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan pilih menu yang sesuai.\n");
        }
    } while (choice != 5);

    fclose(file);

    return 0;
}
