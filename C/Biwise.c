#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int and=0;
  int a=1,b=2,aux=0;
  
    for (a = 1; a <= k; ++a)
    {
 

        printf("a:%d y b:%d\n",a,b );
        and=a&b;
        printf("Resultado:%d\n",and );
    
      
      b=
    }
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
