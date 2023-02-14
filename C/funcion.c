#include "stdio.h"

int max(int num1,int num2){
	int res;
	if (num1>num2)
	{
		res = num1;
	}else{
		res = num2;
	}

	return res;
}


int max_of_four(int a, int b, int c, int d){
    int maxi,temp1,temp2;
  	temp1 = max(a,b);
  	temp2 = max(c,d);
    maxi = max(temp1,temp2);

    return maxi;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

  
    
    return 0;
}