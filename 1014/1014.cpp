#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char D[61],H[61],M1[61],M2[61],day,hour;
	cin >> D ;
	cin >> H ;
	cin >> M1 ;
	cin >> M2 ;
	int mina = strlen(D)< strlen(H)? strlen(D): strlen(H);
	int minb = strlen(M1)< strlen(M2)? strlen(M1): strlen(M2);
	int flag1=0,flag2=0,minute;int j=0;
	//cout <<mina;
	for(int i=0;i < mina;i++)
	{
		if(D[i] == H[i] && flag1 ==0 && D[i]>='A' && D[i]<='G')
		{  
			day=D[i];
			flag1=1;
			continue;
		}
		if(D[i] == H[i] && flag1 ==1 && D[i]>='0' && D[i]<='9')
		{  
			hour=D[i];
			break;
		}
		if(D[i] == H[i] && flag1 ==1 && D[i]>='A' && D[i]<='N')
		{  
			hour=D[i];
			break;
		}
	}
	for(;j<minb;j++)
	{
		if(M1[j]==M2[j] && M1[j]>='a' && M1[j] <='z' && flag2==0)
		{
			minute=j;
			flag2=1;
		}
		if(M1[j]==M2[j] && M1[j]>='A' && M1[j] <='Z' && flag2==0)
		{
			minute=j;
			flag2=1;
		}
	}
	switch (day)
	{
		case 'A':cout << "MON" <<" ";break;
		case 'B':cout << "TUE" <<" ";break;
		case 'C':cout << "WED" <<" ";break;
		case 'D':cout << "THU" <<" ";break;
		case 'E':cout << "FRI" <<" ";break;
		case 'F':cout << "SAT" <<" ";break;
		case 'G':cout << "SUN" <<" ";break;
		default :break;
	}
	switch (hour)
	{
		case '0':cout << "00" <<":";break;
		case '1':cout << "01" <<":";break;
		case '2':cout << "02" <<":";break;
		case '3':cout << "03" <<":";break;
		case '4':cout << "04" <<":";break;
		case '5':cout << "05" <<":";break;
		case '6':cout << "06" <<":";break;
		case '7':cout << "07" <<":";break;
		case '8':cout << "08" <<":";break;
		case '9':cout << "09" <<":";break;
		case 'A':cout << "10" <<":";break;
		case 'B':cout << "11" <<":";break;
		case 'C':cout << "12" <<":";break;
		case 'D':cout << "13" <<":";break;
		case 'E':cout << "14" <<":";break;
		case 'F':cout << "15" <<":";break;
		case 'G':cout << "16" <<":";break;
		case 'H':cout << "17" <<":";break;
		case 'I':cout << "18" <<":";break;
		case 'J':cout << "19" <<":";break;
		case 'K':cout << "20" <<":";break;
		case 'L':cout << "21" <<":";break;
		case 'M':cout << "22" <<":";break;
		case 'N':cout << "23" <<":";break;	
		default :break;
	}
	if(minute <10)cout << "0" << minute;
	else cout << minute;
	return 0;
} 