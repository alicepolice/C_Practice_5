#include <stdio.h>

int main()
{
	bool is;
	int b[6][6],c,i,k,n,sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		is = true;
		for(i=0;i<n;i++)
		{
			for(k=0;k<n;k++)
			scanf("%d",&b[i][k]);
		}
        for(i=0;i<n;i++)
        { 
           for(k=0;k<n;k++)	
           {
           	if(k<i)
           	if(b[i][k]!=0)is = false;
           }
        }
        if(is)printf("YES\n");
        else printf("NO\n");
	}
	return 0;
}