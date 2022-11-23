/*
  Program : Menghitung nilai akhir matakuliah DDP dan predikatnya
  Author : 221524019 Muhammad Fikri Nur Sya'bani
  Tanggal : 11 November 2022
  I.S. : Belum diketahui nilai akhir dan predikat
  F.S. : menghitung nilai total akhir mata kuliah DDP dari komponen penilaian (ets, eas dan quiz).
         Setiap komponen penilaian memiliki bobot:
         - bobot ets : 35%
         - bobot eas : 40%
         - bobot quiz : 25%
         Nilai total akhir adalah jumlah bobot dikali tiap komponen nilai
         Nilai total akhir akan dikonversikan kedalam sebuah huruf mutu atau disebut predikat.
         Aturan konversi nilai ke predikat adalah
           A  (80 - 100), AB (75 - 79,9), B  (70 - 74,9), BC (65 - 69,9), C (60 - 64,9),
	 	   CD (55 - 59,9), D  (40 - 54,9), E (< 40)
	 	   
  Goal Praktikum :
	1. Bisa mendeklarasikan variabel struct
	2. Bisa memberi nilai pada variabel struct
	3. Bisa mendefinisikan konstanta variabel global (bobot)
	4. Bisa membuat fungsi dgn paramater struct
	5. Bisa memanggil fungsi dgn passing paramater bertipe struct.
	6. Paham menggunakan struct
*/

#include <stdio.h>


//Deklarasi tipe data bentukan bernama Mahasiswa
typedef struct {
    char *nama;
    char *nim;
    float ets;
	float eas;
	float kuis;
	float total;
    char predikat;
    //Tambahkan deklarasi variabel baru: eas, kuis, total, dan predikat
} Mahasiswa;

void displayDataMhs(Mahasiswa mhs){
	printf("Data Mahasiswa \t:\n");
    printf("Nama \t\t: %s\n", mhs.nama);
    printf("Nim \t\t: %s\n", mhs.nim);
    printf("ETS \t\t: %2.f\n", mhs.ets);
    printf("EAS \t\t: %2.f\n", mhs.eas);
    printf("Kuis \t\t: %2.f\n", mhs.kuis);
    printf("Predikat \t: %c\n", mhs.predikat);
	printf("==============================\n");
    //Tampilkan nilai eas, kuis, total, dan predikat
}
//lengkapi fungsi berikut dengan mengganti keterangan diantara tanda /* dan */
// dan lengkapi body fungsi ini untuk mendapatkan nilai akhir matakuliah berdasarkan aturan pada F.S.
float get_total(float uts, float uas, float kuiz){
	float hasil;
	hasil= ((35*uts)/100) + ((40*uas)/100) + ((25*kuiz)/100);
	// isi algoritma
	
	return hasil;
}
//lengkapi fungsi berikut dengan mengganti keterangan diantara tanda /* dan */ pada parameter
// dan lengkapi body fungsi ini untuk mendapatkan nilai predikat dari nilai akhir berdasarkan aturan pada F.S.
float get_predicate(float Jumlah){
	char predikat;
	if((Jumlah>=80) && (Jumlah<=100)){
		predikat= 'A';
	}else if((Jumlah>=75) && (Jumlah<=79.9)){
		predikat= 'AB';
	}else if((Jumlah>=70) && (Jumlah<=74.9)){
		predikat= 'B';
	}else if((Jumlah>=65) && (Jumlah<=69.9)){
		predikat= 'BC';
	}else if((Jumlah>=60) && (Jumlah<=64.9)){
		predikat= 'C';
	}else if((Jumlah>=55) && (Jumlah<=59.5)){
		predikat= 'CD';
	}else if((Jumlah>=40) && (Jumlah<=54.9)){
		predikat= 'D';
	}else if(Jumlah<40){
		predikat= 'E';
	}
    // isi Algoritma
    
	return predikat;
}


int main(){
	//Deklarasi variabel mhs1 dan mhs2 bertipe Mahasiswa
    Mahasiswa mhs1, mhs2;
    float Total1, Total2;
	char Predikat;

    //Mengisi data mahasiswa 1
    mhs1.nama = "Akhmad";
    mhs1.nim = "101010";
    mhs1.ets = 80;
    mhs1.eas = 90;
    mhs1.kuis = 85;
    mhs1.predikat;
    mhs1.total;
	//Tambahkan nilai eas=90 dan kuis=85
	
	//Tambahkan data mahasiswa 2: nama dan nim diisi oleh data sendiri dan temannya, 
	mhs2.nama ="Fikri";
	mhs2.nim = "221524019";
	mhs2.ets = 70;
	mhs2.eas = 80;
	mhs2.kuis = 65;
	mhs2.predikat;
	mhs2.total;
	//                            silahkan isi sembarang nilai untuk ets, eas, dan kuis=65
	
	//Panggil fungsi get_total kemudian simpan nilainya ke variabel total
	Total1= get_total(mhs1.ets,mhs1.eas,mhs1.kuis);
	Total2= get_total(mhs2.ets,mhs2.eas,mhs2.kuis);
	//Panggil fungsi get_predikat kemudian simpan nilainya ke variabel predikat
	mhs1.predikat= get_predicate(Total1);
	mhs2.predikat= get_predicate(Total2);
	//Memanggil prosedur display
    displayDataMhs(mhs1);
    displayDataMhs(mhs2);
    return 0;
}