#include <stdio.h>

int main() {
    FILE *file = fopen("data_mahasiswa.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    fprintf(file, "Data Mahasiswa:\n");

    fprintf(file, "Nama: Annisa Artanti Widyadhana\n");
    fprintf(file, "NIM: 202110370311004\n");
    fprintf(file, "Program Studi: Teknik Informatika\n\n");

    fprintf(file, "Nama: John Smith\n");
    fprintf(file, "NIM: 202110370311004\n");
    fprintf(file, "Program Studi: Manajemen\n\n");

    fprintf(file, "Nama: Alice Johnson\n");
    fprintf(file, "NIM: 567890123\n");
    fprintf(file, "Program Studi: Psikologi\n\n");

    fclose(file);

    printf("Data mahasiswa telah ditulis ke dalam file data_mahasiswa.txt.\n");

    return 0;
}

