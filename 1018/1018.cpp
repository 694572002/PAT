#include <iostream>
using namespace std;
int main()
{
	int n,w1=0,w2=0,tie=0,c1=0,b1=0,j1=0,c2=0,b2=0,j2=0;
	cin >> n;
	char s[n][2];
	for(int i=0;i<n;i++)
	{
		cin >> s[i][0] >> s[i][1];
		if(s[i][0] == 'C' && s[i][1] == 'J'){w1++;c1++;}
		if(s[i][0] == 'C' && s[i][1] == 'B'){w2++;b2++;}
		if(s[i][0] == 'C' && s[i][1] == 'C'){tie++;}
		if(s[i][0] == 'J' && s[i][1] == 'C'){w2++;c2++;}
		if(s[i][0] == 'J' && s[i][1] == 'B'){w1++;j1++;}
		if(s[i][0] == 'J' && s[i][1] == 'J'){tie++;}
		if(s[i][0] == 'B' && s[i][1] == 'C'){w1++;b1++;}
		if(s[i][0] == 'B' && s[i][1] == 'J'){w2++;j2++;}
		if(s[i][0] == 'B' && s[i][1] == 'B'){tie++;}
	}
	
	cout << w1 << " " << tie << " " << w2 <<endl;
	cout << w2 << " " << tie << " " << w1 <<endl;
	if(c1>b1 && c1>=j1)cout <<  'C' << " ";  //"="就是如果解不唯一，则输出按字母序最小的解。
	if(b1>=c1 && b1>=j1)cout <<  'B' << " ";
	if(j1>c1 && j1>b1)cout <<  'J' << " ";
	if(c2>b2 && c2>=j2)cout <<  'C' ;
	if(b2>=c2 && b2>=j2)cout <<  'B' ;
	if(j2>c2 && j2>b2)cout <<  'J' ;
	return 0;
}