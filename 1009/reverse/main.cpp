#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i=0,j=0,t=0,flag[90]={0};
	string str;
	getline(cin,str);
	while(str[i++] ==' '); //删除字符串前面的空格 
	for(;i< str.length();i++) //记录空格的下标 	
	{
		if(str[i] == '\n')break;
		if(str[i] == ' ' && str[i+1]!=' ')
		{
			flag[j++]=i;
		}
	}	
	for(int x =flag[j-1]+1;x<i;x++)//打印最后一个字符串 
	{
		if(str[x] != ' ')cout << str[x];
		if(x == i-1)cout << ' ';		
	}
	
	while(j)
	{
		for(int z =flag[j-2]+1;z<flag[j-1];z++)
		{
			if(str[z] != ' ')cout << str[z];
		}
		j--;
		if(j>0)cout << ' ';
		
	}
	for(int q =0;q<flag[0];q++)//打印第一个字符串 
	{
		if(str[q] != ' ')cout << str[q];
	}
	return 0;
}
