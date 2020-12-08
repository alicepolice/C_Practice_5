#include <stdio.h>
#include <string.h>

int main()
{
	int b[101],c,i,m,n,sum;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		for(i=0;i<m*n;i++)scanf("%d",&b[i]);
		sum = 0;
		for(i=(m-1)*n;i<m*n;i++)
		{
			printf("%d ",b[i]);
			sum += b[i];
		}
		printf("%d\n",sum);
		
		
		for(c=1;c<m-1;c++)
		{
			sum = 0;
        for(i=c*n;i<c*n+n;i++)
        {
			printf("%d ",b[i]);
        	sum += b[i];
        }
      		printf("%d\n",sum);
	    }


		sum = 0;
		for(i=0;i<n;i++)
		{
			printf("%d ",b[i]);
			sum += b[i];
		}
		printf("%d\n",sum);
}
	return 0;
}