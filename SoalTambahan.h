typedef struct 
{
    int pembilang;
    int penyebut;
}Pecahan;

void CetakMenu(){
    printf("+--------------------------------------+\n");
    printf("| 1. Penjumlahan                       |\n");
    printf("| 2. Pengurangan                       |\n");
    printf("| 3. Perkalian                         |\n");
    printf("| 4. Pembagian                         |\n");
    printf("+--------------------------------------+\n");
}

void InputPecahan(Pecahan *pchn){
    printf("\nInput Pembilang \t: ");
    scanf("%d", &pchn->pembilang);
    printf("\nInput Penyebut \t\t: ");
    scanf("%d", &pchn->penyebut);
}

Pecahan resPenjumlahan(Pecahan pchn1, Pecahan pchn2);

Pecahan resPengurangan(Pecahan pchn1, Pecahan pchn2);

Pecahan resPerkalian(Pecahan pchn1, Pecahan pchn2);

Pecahan resPembagian(Pecahan pchn1, Pecahan pchn2);