//kullan�c�dan al�nan 10 tabanl� say�y� 2 tabanl�ya �eviren program

#include <stdio.h>

int main(){
	
	
	int sayi,i,binary[20];
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	i =0;
	while(sayi>=1){
		
		binary[i]=sayi %2;
		sayi=sayi/2;
		i++;
	}
	
	for (i=i-1; i>=0;i--){
		printf("%d",binary[i]);
	}
	
	return 0;
}
