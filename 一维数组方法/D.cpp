#include <stdio.h>

int main()
{
	bool is;
	int b[101],c,i,n,sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		is = true;
		for(i=0;i<n*n;i++)
		{
			scanf("%d",&b[i]);
		}
        for(c=1;c<n;c++)
        { 
           for(i=c*n;i<c*n+c;i++)	
           {
           	if(b[i]!=0)is = false;
           }
        }
        if(is)printf("YES\n");
        else printf("NO\n");
	}
	return 0;
}