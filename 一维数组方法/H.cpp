#include <stdio.h>

int sign(int a); 
int main()
{
      int a,i,count=0,b[101];
for(i=100;i<=200;i++) 
{
a = sign(i);
if (a!=-1)
{
	b[count] = a;
	count++;
}
}

for(i=0;i<count;i++)
{
	if((i+1)%5==0) printf("%5d\n",b[i]);
	else printf("%5d",b[i]);
}
   return 0;
}

int sign(int a)
{
int t;
bool is = true;
for(t=2;t<a;t++)
{
if(a%t==0)is=false;	 //%
}
if(is)
return a;
else 
return -1;
}