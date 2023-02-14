#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int *temp,n;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    temp = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
        *(temp + i)  = *(arr + i);
    }
    n=num-1;

    for ( i = 0; i < num; ++i)
    {
         *(arr + i) = *(temp + n);  
        n--;
    
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}