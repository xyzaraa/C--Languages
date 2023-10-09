#include <stdio.h>


double hitungLuasPermukaan(double panjang, double lebar, double tinggi) {
    return 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
}


double hitungVolume(double panjang, double lebar, double tinggi) {
    return panjang * lebar * tinggi;
}

int main() {
    double panjang, lebar, tinggi;

    printf("Masukkan panjang balok: ");
    scanf("%lf", &panjang);

    printf("Masukkan lebar balok: ");
    scanf("%lf", &lebar);

    printf("Masukkan tinggi balok: ");
    scanf("%lf", &tinggi);

    double luasPermukaan = hitungLuasPermukaan(panjang, lebar, tinggi);
    double volume = hitungVolume(panjang, lebar, tinggi);

    printf("\nLuas permukaan balok %.2lf cm^2\n", luasPermukaan);
    printf("Volume balok %.2lf cm^3\n", volume);

    return 0;
}
