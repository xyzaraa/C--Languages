#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char inputString[100];
    bool sudahDicetak[256] = { false };

    printf("Masukkan sebuah string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Karakter unik dalam string adalah: ");

    for (int i = 0; i < strlen(inputString); i++) {
        char karakter = inputString[i];

        if (sudahDicetak[(int)karakter]) {
            continue; 
        }
        printf("%c ", karakter);

        sudahDicetak[(int)karakter] = true;
    }

    printf("\n");

    return 0;
}
