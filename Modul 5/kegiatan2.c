#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];
    int choice,i,j,k;

    printf("=== Operasi Matriks ===\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("Pilih Salah Satu (1/2/3): ");
    scanf("%d", &choice);

    printf("Masukkan elemen pada matriks pertama(3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Masukkan elemen pada matriks kedua (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Matriks Pertama:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matriks Kedua:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    switch (choice) {
        case 1:
            printf("Hasil Penjumlahan:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Hasil Pengurangan:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("Hasil Perkalian:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = 0;
                    for (k = 0; k < 3; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("INPUTAN TIDAK VALID\n");
    }

    return 0;
}
