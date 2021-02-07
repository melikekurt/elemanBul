//Melike Kurt Bu program girilen karakterin dizide bulur ve pozisyonunu verir
#include<stdio.h>
int main(){
	char msg[3]={'a','l','i'};
	char x;
	printf("lutfen bir char giriniz \n");
	scanf("%c",&x);
	int i;
	for(i=0;i<3;i++){
		if(x==msg[i]){
			printf("Bulundu!\n");
			printf("pozisyonu: %d",i);
			return 0;
		}
	}
	
	
	printf("Bulunamadi!");
	
	
	return 0;
}
