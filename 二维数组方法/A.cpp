/*
Problem K: ͳ��ÿ����ĸ����
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 14989  Solved: 3887
Description
����һ��Ӣ�ģ�����С��100�����Իس�������ͳ�����е�ÿ����ĸ���ִ���,�����ִ�С�֡�
Input
����������ݣ�ÿ������һ��Ӣ�ģ�����С��100�����Իس�����
Output
���ÿ����ĸ���ֵĴ���(����Ϊ��Ĳ����) ÿ�����ݺ������һ������
Sample Input
Welcome to c world.
Sample Output
c: 2
d: 1
e: 2
l: 2
m: 1
o: 3
r: 1
t: 1
w: 2
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count[26];//count���� ��������ĸ���
    char str[101];
    while(gets(str)!=NULL) //�Ƿ�������� 
    {
        n=strlen(str);    //��ȡ���� 
        for(i=0;i<26;i++) count[i] = 0;
        for(i=0;i<n;i++)
        {
        	char o = str[i];
        	if(o>='A' && o<='Z')
        	{
        		count[o-'A']++;
	        }
	        if( o>='a' && o<='z')
	        {
        		count[o-'a']++;
        	}
        }
        for(i=0;i<26;i++)
        {
        	if(count[i]>0)
        	{
	        	printf("%c: %d\n",i+'a',count[i]);
	        }
        }
        printf("\n"); // ÿ�����ݺ������һ������ 
    }
    return 0;
}
