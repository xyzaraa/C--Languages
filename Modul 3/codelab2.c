#include <stdio.h>

enum FILM
{
    Unstoppable = 1,
    Insidious,
    Us
};

int main()
{
    int pilihan;
    printf("Masukkan Nama Film: \n1. Unstoppable\n2. Insidious\n3. Us\n");
    printf("Pilihan anda: ");
    scanf("%d", &pilihan);
    
    switch (pilihan)
    {
    case Unstoppable:
        printf("\nFilm Action");
        break;
    case Insidious:
        printf("\nFilm Horror");
        break;
    case Us:
        printf("\nFilm Thriller");
        break;
    default:
        printf("Input tidak valid\n");
        break;
    }

    return 0;
}
