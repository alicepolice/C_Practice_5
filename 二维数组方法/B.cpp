#include <stdio.h>

int main()
{
	int i,k,b[10][10],n,sumz,sumy;
	while(scanf("%d",&n)!=EOF)
	{
		sumz=sumy=0;
    for(i=0;i<n;i++)
    for(k=0;k<n;k++)
    {
    scanf("%d",&b[i][k]);
    if(i==k) sumz+= b[i][k];
    if(k==n-i-1) sumy+= b[i][k];
    }
    printf("%d %d\n",sumz,sumy);
	}
	return 0;
}