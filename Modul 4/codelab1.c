#include <stdio.h>

int main() {
    int N;
    int jumlah = 0;
    
    printf("Masukkan angka N: ");
    scanf("%d", &N);

    int i = 1;
    while (i <= N) {
        jumlah += i;
        i++;
    }

    printf("Jumlah angka dari 1 hingga %d adalah %d\n", N, jumlah);

    return 0;
}
