#include<iostream>
#include<string>
//竖式除法 
using namespace std;
int main()
{
	string s;
	int b,div,mod,len;
	cin >> s >> b;
	len =s.length();
	div = (s[0]-'0')/b;
	mod = (s[0]-'0')%b;
	if(div !=0 || len ==1)
		cout <<div;
	for(int i=1;i<len;i++)
	{
		div = (mod *10 +(s[i]-'0'))/b; //第i位除以b 
		cout <<div;
		mod = (mod *10 +(s[i]-'0'))%b;
	}
	cout << ' ' << mod <<endl;
	return 0;
} 