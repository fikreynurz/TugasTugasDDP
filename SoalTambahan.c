#include<stdio.h>
#include"SoalTambahan.h"

int main(){
    Pecahan pchn1, pchn2, penjumlahan, pengurangan, perkalian, pembagian;
    int opsi;

    CetakMenu();
    printf("Pilih Opsi \t\t: ");
    scanf("%d", &opsi);

    printf("Input Pecahan 1");
    InputPecahan(&pchn1);
    printf("Input Pecahan 2");
    InputPecahan(&pchn2);





    return 0;
}

