#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    for (int y =1; y<=12;y++)
    {
        printf("%d * %d = %d",x,y,x*y);
    }
}