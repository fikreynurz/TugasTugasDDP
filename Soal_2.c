#include <stdio.h>
//Buat tipe data bentukan untuk persoalan bangun ruang tabung
//Final state dari program luas permuakaan dan volume tabung
//Referensi : https://www.advernesia.com/blog/matematika/rumus-bangun-ruang/

//Deklarasi tipe bentukan
void InputJariJari(float *jari);
void InputTinggi(float *t);
float HitungLuas(float r, float t);
float HitungLuasAlas(float r);
float HitungLuasSelimut(float r, float t);
float HitungVolume(float r, float t);
void CetakLuas(float *l);
void CetakLuasAlas(float *la);
void CetakLuasSelimut(float *ls);
void CetakVolume(float *v);

//Deklarasi operasi
typedef struct
{
	float r;
	float tinggi;
}Tabung;

float phi = 3.14;

int main(){
	//Kamus data
	Tabung t1;
	float luas, luasAlas, luasSelimut, volume;
	
	//Algoritma
	InputJariJari(&t1.r);
	InputTinggi(&t1.tinggi);
	luas = HitungLuas(t1);
	luasAlas = HitungLuasAlas(t1.r);
	luasSelimut = HitungLuasSelimut(t1);
	volume = HitungVolume(t1);
	CetakLuas(&luas);
	CetakLuasAlas(&luasAlas);
	CetakLuasSelimut(&luasSelimut);
	CetakVolume(&volume);

	return 0;
}

void InputJariJari(float *jari){
	printf("Input Jari Jari : ");
	scanf("%f", &*jari);
}


void InputTinggi(float *t){
	printf("Input Tinggi \t: ");
	scanf("%f", &*t);
}

float HitungLuas(Tabung t1){
	float Luas;

	Luas = 2 * phi * r * (r + t);

	return Luas;
}

float HitungLuasAlas(float r){
	float LA;

	LA = phi * r * r;

	return LA;
}

float HitungLuasSelimut(float r, float t){
	float LS;

	LS = 2 * phi * r * t;

	return LS;
}

float HitungVolume(float r, float t){
	float Volume;

	Volume = phi * r * r * t;

	return Volume;
}

void CetakLuas(float *l){
	printf("Luas Permukaan \t: %.2f\n", *l);
}

void CetakLuasAlas(float *l){
	printf("Luas Alas \t: %.2f\n", *l);
}

void CetakLuasSelimut(float *l){
	printf("Luas Selimut \t: %.2f\n", *l);
}

void CetakVolume(float *v){
	printf("Volume \t\t: %.2f\n", *v);
}