#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i,j,temp=0;
    int *freq;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    freq=(int*)malloc(sizeof(int)*11);

    for (i = 0; i < strlen(s); ++i)
    {
    temp=s[i]-'0';

        for (j = 0; j < 10; ++j)
        {
            if (temp==j)
            freq[j]=freq[j]+1;
        }

  
    }

    for ( i = 0; i < 10; ++i)
    {
        printf("%d ",freq[i] );
    }


    return 0;
}
