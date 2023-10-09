#include <stdio.h>

int main()
{
    int i;
    char agents[5][10] = {"neon", "gekko", "omen", "sage", "jett"};

    printf("Daftar Agen:\n");
  
    for (i = 0; i < 5; i++) {
        printf("Agent ke-%d: %s\n", i + 1, agents[i]);
    }

    agents[3][0] = 'k';

    printf("\nDaftar Agen setelah perubahan:\n");
    for (i = 0; i < 5; i++) {
        printf("Agent ke-%d: %s\n", i + 1, agents[i]);
    }

    return 0;
}
