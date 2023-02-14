#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void imp(int num){
        for (int i = 1; i < num+num; ++i)
    {
        printf("%d",num );
    }


}

int main() 
{

    int n,aux2;
    int ar[20];
    int i,j,ind=0;
    scanf("%d",&n);

    //ar[0]=var;

    aux2=n;
    //aux2--;
    int aux3=0;
    while(aux2>=1){
        ar[ind]=aux2;
        printf("%d",ar[ind] );
        aux2--;
        ind++;
    }
    int aux=n+n;
   

    while(aux>1){
    
    imp(ar[aux3]);


    printf("\n");
    aux--;
    aux3++;
    }
  	
    return 0;
}