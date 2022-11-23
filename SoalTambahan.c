#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SoalTambahan.h"

int main()
{
    Pecahan pchn1, pchn2, penjumlahan, pengurangan, perkalian, pembagian, result;
    int opsi;
    bool loop = false;

    while (!loop)
    {
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
            penjumlahan = resPenjumlahan(pchn1, pchn2);
            CetakHasil(penjumlahan);
            break;
        case 2:
            pengurangan = resPengurangan(pchn1, pchn2);
            CetakHasil(penjumlahan);
            break;
        case 3:
            perkalian = resPerkalian(pchn1, pchn2);
            CetakHasil(perkalian);
            break;
        case 4:
            pembagian = resPerkalian(pchn1, pchn2);
            CetakHasil(pembagian);
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
