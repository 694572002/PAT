#include <iostream>
using namespace std;
int main()
{
	int a,b,d,sum=0,yu[30],i=0;
	cin >> a >> b >> d;
	sum=a+b;
	while(sum >= d) //竖式除法求解 
	{
		
		yu[i++]=sum%d;
		sum = sum /d;
	}
	cout << sum;
	i=i-1;
	while(i>=0)cout << yu[i--];
	return 0;
}