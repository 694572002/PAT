#include <iostream>
using namespace std;
int main()
{
	int num[11];
	for(int i=0;i<10;i++)
	cin>>num[i];
	if(num[0]==0)//没有零的情况 
	{
		for(int i=1;i<10;i++)
		{
			if(num[i]!=0)
			{
				while(num[i]--)cout << i ;//有多少个i输出多少个i 
			}
		}
	}
	int j=1;
	if(num[0]!=0)//有零的情况 
	{
		while(!num[j++]);// 找到最小的，个数非零的数 
		cout << j-1;//输出一个非零最小数 
		num[j-1]--;
		for(int i=0;i<10;i++)
		{
			if(num[i]!=0)
			{
				while(num[i]--)cout << i ;
			}
		}
		
	}
	return 0;
}

