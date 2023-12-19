#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j=0,r=0,s=100;
    for(i=1; i<=10; i++)
    {
        s=s-j;
        j=(i%2)+4;
        r=r+s;
        printf("%d+",s);
    }
    printf("\nSum = %d",r);

    return 0;
}
