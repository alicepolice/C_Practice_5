#include <stdio.h>
#include <string.h>

int main()
{
	int b[101],c,i,m,n,sum;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		for(c=0;c<m;c++)
		{
		for(i=0;i<n;i++) //°²ÅÅ¿Õ¸ñ 
		{
			if(i==n-1)	printf("%d",c*n+i+1);
			else printf("%d ",c*n+i+1);
		}	
		printf("\n");
		}
}
	return 0;
}