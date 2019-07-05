//看错题干的后果就是，出现了一个新的题目 
//随机输入一串数字，个数不大于50，然后组成最小的数
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a ,int b)
{
	return a<b;
}
int main()
{
	int num[51],i=0;int k=1;
	while(cin >> num[i++]) //输入若干个（未知个数）int
	{
		if(cin.get()=='\n')break;
	}
	sort(num,(num+i),cmp);
	if(num[0]!=0)//没有零，直接输出 
	{
		for(int j=0;j<i;j++)cout << num[j];	
	}
	if(num[0]==0)//有零 
	{
			while(num[k++]==0);
			cout << num[k-1];//输出一个非零最小数 
			for(int a=0;a<i;a++)
			{
				if(a==(k-1))continue;
				cout << num[a] ;
			}	
	}
	return 0;
} 