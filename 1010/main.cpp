#include <iostream>
using namespace std;
int main()
{

	
	
	int a,b;
	int flag = 0;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			if(flag == 0)cout << a*b << " " << b-1 ;
			else cout << " " << a*b << " " << b-1;	
			flag = 1;	
		}
		if(flag == 0) cout << "0 0";
	}
			
	return 0;
}

