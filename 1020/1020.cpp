//此题思路来源于以下博客，求单价来解决问题，单价最高，数量最大，收益最大 
//https://blog.csdn.net/qq_37729102/article/details/81702827
#include <iostream>
#include <algorithm>
using namespace std;
struct mooncake
{
	double invent;
	double total;
	double per;
};
bool cmp(mooncake a,mooncake b)
{
	return  a.per >  b.per; 
}
int main()
{
	int n;
	double d;
	double sum=0;
	cin >> n >> d;
	mooncake cake[n];
	for(int i=0;i<n;i++)
	{
		cin >> cake[i].invent;
	}
	for(int i=0;i<n;i++)
	{
		cin >> cake[i].total;
		cake[i].per=cake[i].total/cake[i].invent;
	}
	sort(cake,cake+n,cmp);
//	for(int i=0;i<n;i++)
//	{
//		
//		cout << cake[i].per << " ";
//		//cout << cake[i].invent << " ";
//	}
	int j=0;
	while(d>0)
	{
		if((d-cake[j].invent) <= 0 )
		{
			sum = sum+cake[j].per * d;
			printf("%.2f",sum); 
			d=0;
		}
		else if(d-cake[j].invent >=0)
		{
			
			sum = sum + cake[j].per * cake[j].invent;
			d = d - cake[j].invent;
			j++;
		}
		
	}
	return 0;
}

