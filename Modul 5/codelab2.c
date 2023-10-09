#include <stdio.h>

int main() {
    int matrix1[2][2] = { {1, 2}, {3, 4} };
    int matrix2[2][2] = { {5, 6}, {7, 8} };
    int resultMatrix[2][2];
    int i,j;
    // Penjumlahan matriks
    for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Tampilkan hasil penjumlahan
    printf("Hasil penjumlahan matriks:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
