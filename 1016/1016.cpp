#include <iostream>
#include <math.h>
#include <string>
#include<sstream>
using namespace std;
int main()
{
	int a,da,b,db,cnt1=0,cnt2=0;
	cin >> a >> da >> b >> db;
	double suma=0,sumb=0;//要用double，不然结果有偏差 
	int s;//最后结果要改回Int，不然第三个点会出错 
	while(a)
	{
		if(a%10==da)
		{
 			suma =suma+ da*pow(10,cnt1);
			cnt1++;	
		}
		a=a/10;
	}
	while(b)
	{
		if(b%10==db)
		{
 			sumb =sumb+ db*pow(10,cnt2);
			cnt2++;	
		}
		b=b/10;
	}
	s = suma+sumb;
	cout << s << endl;
	return 0;
}