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
	int j=0,m,n,cnt=0;
	cin >> m >> n;
    int a =n-m +1,pnum[n-m+1];
		for(int i=0;(n-m+1)>0;i++)
		{
			if(IsPrimeNum(i)==1)
			{
				cnt++;
				if(cnt > m+1)
				{
				pnum[j++]=i;
				n--;
				}
				
			}

		}
		for(int k=0;k<a;k++)
		{
			
			if(k%10==0)cout << pnum[k];
			else cout << " " << pnum[k] ;
			if((k+1)%10==0)cout << '\n';
		}
}