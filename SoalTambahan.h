typedef struct
{
    int pembilang;
    int penyebut;
} Pecahan;

void CetakMenu()
{
    printf("+--------------------------------------+\n");
    printf("| 1. Penjumlahan                       |\n");
    printf("| 2. Pengurangan                       |\n");
    printf("| 3. Perkalian                         |\n");
    printf("| 4. Pembagian                         |\n");
    printf("+--------------------------------------+\n");
}

void InputPecahan(Pecahan *pchn)
{
    printf("\nInput Pembilang \t: ");
    scanf("%d", &pchn->pembilang);
    printf("Input Penyebut \t\t: ");
    scanf("%d", &pchn->penyebut);
}

Pecahan resPenjumlahan(Pecahan pchn1, Pecahan pchn2)
{
    Pecahan hasil;
    hasil.pembilang = (pchn1.pembilang * pchn2.penyebut) + (pchn2.pembilang * pchn1.penyebut);
    hasil.penyebut = pchn1.penyebut * pchn2.penyebut;

    return hasil;
}

Pecahan resPengurangan(Pecahan pchn1, Pecahan pchn2)
{
    Pecahan hasil;
    hasil.pembilang = (pchn1.pembilang * pchn2.penyebut) - (pchn2.pembilang * pchn1.penyebut);
    hasil.penyebut = pchn1.penyebut * pchn2.penyebut;

    return hasil;
}

Pecahan resPerkalian(Pecahan pchn1, Pecahan pchn2)
{
    Pecahan hasil;
    hasil.pembilang = pchn1.pembilang * pchn2.pembilang;
    hasil.penyebut = pchn1.penyebut * pchn2.penyebut;

    return hasil;
}

Pecahan resPembagian(Pecahan pchn1, Pecahan pchn2)
{
    Pecahan hasil;
    hasil.pembilang = pchn1.pembilang * pchn2.penyebut;
    hasil.penyebut = pchn1.penyebut * pchn2.pembilang;

    return hasil;
}

void CetakHasil(Pecahan hasil)
{
    printf("Hasil \t\t\t: %d/%d", hasil.pembilang, hasil.penyebut);
}