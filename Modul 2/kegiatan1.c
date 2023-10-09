#include <stdio.h>

int main() {
    double nilaiMatematika, nilaiFisika, nilaiBiologi;
    const int sksMatematika = 4, sksFisika = 3, sksBiologi = 2;

    printf("Masukkan nilai Matematika: ");
    scanf("%lf", &nilaiMatematika);

    printf("Masukkan nilai Fisika: ");
    scanf("%lf", &nilaiFisika);

    printf("Masukkan nilai Biologi: ");
    scanf("%lf", &nilaiBiologi);

    double totalNilai = (nilaiMatematika * sksMatematika + nilaiFisika * sksFisika + nilaiBiologi * sksBiologi);
    int totalSKS = sksMatematika + sksFisika + sksBiologi;
    double rataRata = totalNilai / totalSKS;

    printf("Nilai rata-rata: %.2lf\n", rataRata);

    return 0;
}
