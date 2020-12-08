#include <stdio.h>

int sign(int a,int b); 
int main()
{
      int a,b,i,sum;
      while(scanf("%d %d",&a,&b)!=EOF)
	{
		sum = 0;
	for(i=1;i<=b;i++)
	{
		sum+= sign(a,i);
	}
	printf("%d\n",sum);
	}
   return 0;
}

int sign(int a,int b)
{
int i,sum=a;
for(i=1;i<b;i++)
sum = sum*10 +a;
return sum;
}