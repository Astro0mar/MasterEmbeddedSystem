#include <stdio.h>

int main ()
{

int x;
int y;

printf("Enter X\n");
scanf("%d",&x);
printf("Enter Y\n");
scanf("%d",&y);

x=x+y;
y=x-y;
x=x-y;

printf("the x is = %d\n",x);
printf("the y is = %d\n",y);

  return 0;
}
