#include <iostream>
using namespace std;
int main()
{
	int num,b=0,s=0,g=0;
	cin >> num;
	b = num /100 %10;
	s = num / 10 %10;
	g = num  %10;
	//cout << "b:"<< b << endl;
	//cout << "s:"<< s << endl;
	//cout << "g:"<< g << endl;
	for(int i=0; i < b; i++)
	{
	  cout << "B" ;
	}
	for(int j=0; j < s; j++)cout << "S";
	for(int k=1; k < g+1; k++)cout << k;
	return 0;
}
