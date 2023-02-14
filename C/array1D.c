#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int *array;
int n=0,i,R=0;
scanf("%d",&n);

    array=(int*)malloc(sizeof(int)*n); 
    for(i=0; i<n; i++){
     scanf("%d",&array[i]);
     R+=array[i];
    }

    printf(" %d \n", R);
        
    return 0;
}
