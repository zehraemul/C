
#include<stdio.h>
#define N 200

int main(){
	
	int i,dizi[N],boyut,j;
	int counter=0;
	int flag=0,x;
	
	printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &boyut);

    printf("Dizinin elemanlarini giriniz:");
    for(i=0; i<boyut; i++){
        scanf("%d", &dizi[i]);
    }
	for(i=0;i<boyut;i++){
		
		for(j=0;j<boyut;j++){
			
			if(dizi[i]==dizi[j]){
				counter++;
			}
			

		}
	if(counter==dizi[i]){
				flag=1;
				x=dizi[i];
			}

	counter=0;
			if(flag=1){
		printf("%d ",x);
	}
	
	}
	
	return 0;
	
}

// cevab�mda sihirli sayilari dogru buluyor fakat yazd�rma s�ras�nda fazladan yazd�r�yor.
