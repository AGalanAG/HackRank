#include <stdio.h>


int main(int argc, char const *argv[])
{
	int var;

	int aux=0,aux2,aux3=0,aux4;

	int num[1000];
	int i,j,k;
	scanf("%d",&var);


	aux2=var;


	while(aux<(var+var)-1){

			if (aux2>0 && aux<var)
			{
				for ( i = aux; i < var; i++)
			{
				num[i]=aux2;
			}
			aux2--;
			aux3=aux-1;

				}else{
					if (aux2==0)
					{
						aux2=aux2+2;

					}
					
					for ( i = aux3; i < var; i++)
					{
						num[i]=aux2;
					}
					aux3--;

					aux2++;

			}
		
			
			for (j = 0; j < var; j++)
			{
				printf("%d ",num[j] );
			}

			for ( k = var-2; k >= 0; k--)
			{
				printf("%d ",num[k] );
			}

			printf("\n");

			



		aux++;
		//aux2--;
	}
	return 0;
}
