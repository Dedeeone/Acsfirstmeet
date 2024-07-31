#include <stdio.h>
int main()
{
    int x,y, z=0;
    for(y=1;y<=10;y++)
    {
        scanf("%d",&x);
        z = x+z;
        if (x<=0)
        {
            break;
        }
    }
    printf("%d",z);
}