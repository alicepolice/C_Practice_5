#include <stdio.h>

int sign(int a,int b,int c); 
int main()
{
      int x, y,z;
     while (scanf("%d %d %d", &x,&y,&z) != EOF)//ÊäÈëxÖµ
    {
          int result = sign(x,y,z);
          printf("%d\n",result); 
    }

   return 0;
}

int sign(int a,int b,int c)
{
int max=0;
if(a>b) max = a; 
else max =b;
if(max<c) max =c;
return max;
}