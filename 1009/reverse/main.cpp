#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i=0,j=0,t=0,flag[90]={0};
	string str;
	getline(cin,str);
	while(str[i++] ==' '); //ɾ���ַ���ǰ��Ŀո� 
	for(;i< str.length();i++) //��¼�ո���±� 	
	{
		if(str[i] == '\n')break;
		if(str[i] == ' ' && str[i+1]!=' ')
		{
			flag[j++]=i;
		}
	}	
	for(int x =flag[j-1]+1;x<i;x++)//��ӡ���һ���ַ��� 
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
	for(int q =0;q<flag[0];q++)//��ӡ��һ���ַ��� 
	{
		if(str[q] != ' ')cout << str[q];
	}
	return 0;
}
