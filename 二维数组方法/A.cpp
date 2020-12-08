/*
Problem K: 统计每个字母个数
Time Limit: 1 Sec  Memory Limit: 64 MB
Submit: 14989  Solved: 3887
Description
输入一段英文（字数小于100），以回车结束，统计其中的每个字母出现次数,不区分大小字。
Input
多组测试数据，每组输入一段英文（字数小于100），以回车结束
Output
输出每个字母出现的次数(次数为零的不输出) 每组数据后面输出一个空行
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
    int i,n,count[26];//count数组 保存检索的个数
    char str[101];
    while(gets(str)!=NULL) //是否输入完成 
    {
        n=strlen(str);    //获取长度 
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
        printf("\n"); // 每组数据后面输出一个空行 
    }
    return 0;
}
