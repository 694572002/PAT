#include <iostream>
#include <math.h>
using namespace std;

int IsPrimeNum(long int Pnum)
{
	for(int i=2;i<=(int)sqrt(Pnum);i++)
	{
		if(Pnum%i==0)return 0;
	}
	return 1;
}

int main()
{
	long int num;
	int i,a=2,cnt=0;
	cin >> num;
	//a=IsPrimeNum(num);
	//cout << a <<endl;
	for(i=3; i<num;i++) //¿É¸ÄÎªi=5 
	{					//if(IsPrimeNum(i) && IsPrimeNum(i-2))cnt++; 
		if(IsPrimeNum(i) && IsPrimeNum(i+2) && i+2<=num)cnt++; 
	}
	cout << cnt << endl;
	
	return 0;
}


