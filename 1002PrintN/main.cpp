#include<iostream>
using namespace std; 

void PrintN(int N)
{
	switch (N)
	{
		case 0 :cout <<"ling";
			    break;
		case 1 :cout <<"yi";
				break;
		case 2 :cout <<"er";
				break;
		case 3 :cout <<"san";
				break;
		case 4 :cout <<"si";
				break;
		case 5 :cout <<"wu";
				break;
		case 6 :cout <<"liu";
				break;
		case 7 :cout <<"qi";
				break;
		case 8 :cout <<"ba";
				break;
		case 9 :cout <<"jiu";
				break;
	}
}

int main()
{
	int sum=0;
	int i = 0,j=1,b[11];
	char a[101];
	cin >> a;
		while(a[i]!='\0')
		{
			sum += a[i]-'0';
			i++;
		}
		//cout << sum <<endl;
		if(sum==0)PrintN(0);
		b[0] = sum/1%10;
		//cout << b[0] <<endl;
		while(sum)
	    {
			b[j++] = sum%10;
			sum /= 10;			
		}
		for(i=j-1;i>1;--i)
		{
			PrintN(b[i]);
			printf(" ");
		}
		PrintN(b[0]);
	
	return 0;
}