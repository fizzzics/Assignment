#include<stdio.h>
int main()
{
    int i,j,k;

    for ( i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", j+64);
        }
        printf("\n");
    }
    return 0;
}
