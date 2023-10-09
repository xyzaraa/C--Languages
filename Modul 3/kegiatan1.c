#include <stdio.h>

enum MenuMakanan {
    NASI_GORENG = 1,
    MIE_GORENG,
    AYAM_GORENG
};

enum MenuMinuman {
    AIR_MINERAL = 1,
    ES_TEH,
    JUS_JERUK
};

int main() {
    float total = 0;
    float uang;
    char member;
    enum MenuMakanan makanan;
    enum MenuMinuman minuman;

    printf("===== Rumah Makan =====\n");

    printf("Menu Makanan:\n");
    printf("1. Nasi Goreng \t Rp. 50000\n");
    printf("2. Mie Goreng \t Rp. 45000\n");
    printf("3. Ayam Goreng \t Rp. 65000\n");

    printf("Pilih menu makanan (1-3): ");
    scanf("%d", &makanan);

    printf("\nMenu Minuman:\n");
    printf("1. Air Mineral \t Rp. 13000\n");
    printf("2. Es Teh \t Rp. 15000\n");
    printf("3. Jus Jeruk \t Rp. 20000\n");

    printf("Pilih menu minuman (1-3): ");
    scanf("%d", &minuman);

    switch (makanan) {
        case NASI_GORENG:
            total += 50000;
            break;
        case MIE_GORENG:
            total += 45000;
            break;
        case AYAM_GORENG:
            total += 65000;
            break;
        default:
            printf("Menu makanan tidak valid.\n");
            return 1;
    }

    switch (minuman) {
        case AIR_MINERAL:
            total += 13000;
            break;
        case ES_TEH:
            total += 15000;
            break;
        case JUS_JERUK:
            total += 20000;
            break;
        default:
            printf("Menu minuman tidak valid.\n");
            return 1;
    }

    printf("Apakah Anda adalah member? (Y/N): ");
    scanf(" %c", &member);

    if (member == 'Y' || member == 'y') {
        total *= 0.9; // Member mendapat potongan 10%
    }

    printf("\nTotal harga: Rp. %.2f\n", total);

    printf("Alamat memori variabel total: %p\n", &total);

    printf("Masukkan uang pembayaran: ");
    scanf("%f", &uang);

    if (uang < total) {
        printf("Uang Anda kurang.\n");
    } else if (uang > total) {
        printf("Kembalian Anda: Rp. %.2f\n", uang - total);
    } else {
        printf("Uang Anda pas. Terima kasih!\n");
    }

    return 0;
}

