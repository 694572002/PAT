//思路：输入的数进行排序
//然后对比 , M <=minp 是否成立
//不成立，min往后移一位，直到成立为止。
//但是这样第4个点不能通过
//因为这样的思路有缺陷，不能满足
//”从中选择尽可能多的数构成一个完美数列”这个条件 

#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(long int a , long int b)
{
	return a < b;
}
int main()
{
	int flag=0;
	long int n,p,max,min,minp;
	cin >> n >> p;
	long int array[n];
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	sort(array,array+n,cmp);
	max=array[n-1];
	//min=array[0];
	int j=0;
	for(int i=0;i<n;i++)
	{
		minp=array[i]*p;
		if(minp>=max)
		{
			j=i;
			flag=1;
			break;
		}
	}
	
	if(flag)cout << (n-j);
	else cout << 0;
	return 0;
}

