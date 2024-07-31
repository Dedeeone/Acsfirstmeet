#include <stdio.h>
int main()
{
int x,y;
scanf("%d",&x);
scanf("%d",&y);
int num = x / y;
int dd = x % y;
printf("%d",num);
printf(",%d",dd);
return 0;
}