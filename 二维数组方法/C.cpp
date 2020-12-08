#include <stdio.h>

int main()
{
	int b[10][10],c,i,m,n,sum,t;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
      for(int i=0;i<m;i++)
      for(int k=0;k<n;k++)
      	scanf("%d",&b[i][k]);
      	
      for(int k=0;k<n;k++)
   	 	{
	 	   	t = b[0][k];
	 	   	b[0][k] = b[m-1][k];
	 	   	b[m-1][k] = t;
 		}
 		
      for(int i=0;i<m;i++)
      {
  	  sum = 0;
      for(int k=0;k<n;k++)
      {
      printf("%d ",b[i][k]);	
      sum += b[i][k];
      }
      printf("%d\n",sum);
      }
     	
    }
	return 0;
}