#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SoalTambahan.h"

int main()
{
    Pecahan pchn1, pchn2, result;
    int opsi;
    bool loop = false;

    while (!loop)
    {
        system("cls");
        printf("Input Pecahan 1");
        InputPecahan(&pchn1);
        printf("Input Pecahan 2");
        InputPecahan(&pchn2);
        system("cls");
        CetakMenu();
        printf("Pilih Opsi \t\t: ");
        scanf("%d", &opsi);
        switch (opsi)
        {
        case 1:
            result = resPenjumlahan(pchn1, pchn2);
            CetakHasil(result);
            break;
        case 2:
            result = resPengurangan(pchn1, pchn2);
            CetakHasil(result);
            break;
        case 3:
            result = resPerkalian(pchn1, pchn2);
            CetakHasil(result);
            break;
        case 4:
            result = resPerkalian(pchn1, pchn2);
            CetakHasil(result);
            break;
        default:
            printf("Invalid Input");
            break;
        }

        char loopie;

        printf("\nUlangi Program? (Y/N) \t: ");
        scanf("%s", &loopie);

        if (loopie == 'N')
        {
            loop = true;
        }
    }

    return 0;
}
