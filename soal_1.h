
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

//Deklarasi prosedur display
void displayDataMhs(Mahasiswa mhs);
//Tambahkan deklarasi fungsi get_total;
float get_total(float uts, float uas, float kuiz);
//Lengkapi paramater diantara tanda /* */
float get_predicate(float Jumlah);
//Tambahkan deklarasikan konstanta global: bobot ets, eas, dan kuis


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
