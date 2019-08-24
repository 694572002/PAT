//Ë¼Â·£ºÇî¾Ù
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
	int i=0,j=0,ans=0;
	for(i;i<n;i++)
	{
		for(j=i+ans;j<n;j++)
		{
			if(array[j] > array[i]*p)break;
			if(j-i+1>ans)
			{
				ans=j-i+1;
			}
		}
	}
	cout << ans;
	return 0;
}

