#include <stdio.h>
#include<Windows.h>
#include<stdlib.h>
void ucgen() { //ucgen fonksiyonu ekrana ucgen yazdırmak icin kullanılır.
	int yildiz, bosluk;
	yildiz = 1;//yildiz degeri ekrandaki yildiz simgesini temsil eder.
	bosluk = 5;//bosluk degeri ise ekrana ucgen yazdırmak icin basa bosluk atıp piramit cizdirir.
	for (int i = 0; i < 6; i++) {
		for (int s = 0; s < bosluk; s++) {
			printf(" ");
		}
		for (int s = 0; s < yildiz; s++) {
			printf("*");
		}
		printf("\n");
		bosluk--;
		yildiz += 2;
	}
}
//ucgen2 fonksiyonu yana dogru kaydırmak icin olusturulan fonskiyondur
void ucgen2(int x) {//int x kullanıcıdan kaç saniye donmesi için olusturulan bir degerdir
	int yildiz, bosluk;
	yildiz = 1;
	bosluk = 5;
	for (int i = 0; i < 6; i++) {//ekstradan bir for dongusuyle bosluk koyulmustur saga kaymasi icin.
		for (int b = 0; b < x; b++) {
			printf("  ");
		}
		for (int s = 0; s < bosluk; s++) {
			printf(" ");
		}
		for (int s = 0; s < yildiz; s++) {
			printf("*");
		}
		printf("\n");
		bosluk--;
		yildiz += 2;
	}
}
void kutuk_boyutu() {//cam agacinin kutugunu cizdiren fonksiyon
	for (int i = 0; i < 5; i++) {
		printf("   ");
		for (int k = 0; k < 5; k++) {
			printf("*");
		}
		printf("\n");
	}
}
void kutuk_boyutu2(int y) {//2. kutuk fonksiyonu aynı 2. ucgendeki gibi saga kaydırmasi icin bosluk
	for (int i = 0; i < 5; i++) {//bıraktıran ekstra bir for dongusune sahip
		for (int k = 0; k < y; k++) {//int y ise kaç saniye kaydırması için olusturulan degerdir.
			printf("  ");
		}
		printf("   ");
		for (int k = 0; k < 5; k++) {
			printf("*");
		}
		printf("\n");
	}
}
void hareket1(int ab,int ba,int bc) {//hareket1 fonksiyonu agacin asagi kaymasi icin
		for (int i = 0; i < bc+1; i++) {//olusturulan fonksiyondur.
			for (int a = 0; a < i; a++) {// int ab int ba int bc kullanicidan aldigimiz
				printf("\n");//saniye,bogum sayisi ve kutuk boyutunu temsil eder.
			}
			for (int i = 0; i < ab; i++) {
				ucgen();
			}
			for (int i = 0; i < ba; i++) {
				kutuk_boyutu();
			}
			Sleep(1000);//sleep fonksiyonu time.h dan gelen delay yapmamizi saglayan fonksiyondur.
			system("cls");
		}
	
}
void hareket2(int ab,int ba,int bc) {//burda da int ab int ba ve int bc

		for (int i = 0; i < bc+1; i++) {//bogum sayisi,kutuk boyutu ve saniyeyi temsil eder.
			for (int p = 0; p < ab; p++) {
				ucgen2(i);
			}
			for (int p = 0; p < ba; p++) {
				kutuk_boyutu2(i);
			}
			Sleep(1000);
			system("cls");
			
		}
	
}
int main()
{
	int k, l, m, n;//kullacinidan aldigimiz degerleri temsil ederler.
	printf("bogum sayisini giriniz");
	scanf_s("%d", &k);
	printf("kutugun boyunutu giriniz(1 ya da 2 tam sayi ile)");
	scanf_s("%d", &l);
	printf("hareket yonunu belirleyiniz");
	scanf_s("%d", &m);
	printf("hareket saniyesini belirtiniz");
	scanf_s("%d", &n);
	if (m == 1) {//eger ki kullanici 1 i tuslarsa cam agaci asagi hareket eder.
		hareket1(k,l,n);
	}
	else if (m == 2) {//eger ki kullanici 2 yi tuslarda cam agaci saga hareket eder.
		hareket2(k,l,n);
	}
    return 0;
}


