#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int j=2,aux=n,i=1,aux2=1;
  int rs1=0,rs2=0,rs3=0;
  int and=0,or=0,xor=0;
  while(aux>=1){

      while(aux2<aux){
        rs1=i&j;
        //printf("a:%d & b:%d = %d \n",i,j,rs1);
        rs2=i|j;
        rs3=i^j;

        if(and<rs1 && rs1<k){
          and=rs1;
        }
        

        if(or<rs2 && rs2<k){
          or=rs2;
        }
        

        if(xor<rs3 && rs3<k){
          xor=rs3;
        }
        


        aux2++;
        j++;
      }
      j=2+i;
      i++;
      aux2=1;
      aux--;  
  }

  printf("%d\n%d\n%d\n", and,or,xor);
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);


 
    return 0;
}
