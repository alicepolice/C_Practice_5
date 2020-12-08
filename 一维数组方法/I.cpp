#include <stdio.h>

int sign(int a); 
int main()
{
      int i,sum=0;
      for(i=1;i<=10;i++) sum+=sign(i);
      printf("%f\n",(float)sum);
   return 0;
}

int sign(int a)
{
int i,sum=1;
for(i=1;i<=a;i++)
sum = sum*i;
return sum;
}