#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<string> v;
	string s;
	while(cin >> s)v.push(s); //��ջ
	cout << v.top();
	v.pop();
	while(!v.empty())
	{
		cout << " " << v.top();
		v.pop();
	} 
	
	return 0;
}
