#include <stdio.h>

int sign(int n); 
int main()
{
      int x, y;
     while (scanf("%d", &x) != EOF)//ÊäÈëxÖµ
    {
          y = sign(x);
          printf("%d\n",y); 
    }

   return 0;
}

int sign(int n)
{
	if (n>0) return 1;
	else if (n==0) return 0; //==
	else return -1;
}