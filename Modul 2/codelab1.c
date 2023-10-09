#include <stdio.h>

const double SAPI_JANTAN_I = 550.0;
const double SAPI_JANTAN_II = 535.6;
const double SAPI_BETINA_I = 498.23;
const double SAPI_BETINA_II = 628.0;

const double KAMBING_JANTAN_I = 120.0;
const double KAMBING_JANTAN_II = 85.8;
const double KAMBING_BETINA_I = 23.0;

int main() {
    double beratSapi1, beratSapi2, beratSapi3, beratSapi4;
    double beratKambing1, beratKambing2, beratKambing3;

    printf("Masukkan berat sapi 1: ");
    scanf("%lf", &beratSapi1);
    printf("Masukkan berat sapi 2: ");
    scanf("%lf", &beratSapi2);
    printf("Masukkan berat sapi 3: ");
    scanf("%lf", &beratSapi3);
    printf("Masukkan berat sapi 4: ");
    scanf("%lf", &beratSapi4);

    printf("Masukkan berat kambing 1: ");
    scanf("%lf", &beratKambing1);
    printf("Masukkan berat kambing 2: ");
    scanf("%lf", &beratKambing2);
    printf("Masukkan berat kambing 3: ");
    scanf("%lf", &beratKambing3);

    double totalBeratSapi = beratSapi1 + beratSapi2 + beratSapi3 + beratSapi4;
    double totalBeratKambing = beratKambing1 + beratKambing2 + beratKambing3;

    printf("\nHasil berat sapi: %.2lf\n", totalBeratSapi);
    printf("Hasil berat kambing: %.2lf\n", totalBeratKambing);

    return 0;
}
