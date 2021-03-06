#include<stdio.h>

int main() {
	
int uzunluk, alan, cevre;

printf("karenin uzunluk degerini girin:");
scanf("%d",&uzunluk);

alan=uzunluk*uzunluk;
cevre=4*uzunluk;



printf("karenin cevresi:%d\n,karenin alani:%d",cevre, alan);

	return 0;
}
