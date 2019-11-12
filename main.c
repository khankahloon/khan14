#include <stdio.h>
#include <stdlib.h>
int main(int arg, char **argv)
{
    int i, n;
    n=100;
    printf("print all digit 0 to 1000, ending with 7\n");
    for(i=0; i<=n; i++)
        {

        if(i%10==7)
{


      printf("%d\n", i);

      }
    }

    return 0;
}
