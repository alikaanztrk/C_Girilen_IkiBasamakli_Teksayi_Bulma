#include<stdio.h>

int main()
{
	int a,counter;
	do{
	
	printf("sayi girin: \n");
	scanf("%d", &a);
	
	if(a<100 && a>9 && a%2 !=0 )
	{
		counter= counter + 1;
	}
        }
        
	while(a != -1);{
            printf("Iki basamakli ve tek sayilarin toplami %d",counter);
                 return 0;
                }
        
   
	}

	
	
	