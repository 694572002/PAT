#include <iostream>
#include <cstring>
using namespace std; 
int main()
{
	int cnt,status=0,P_cnt=0,A_cnt=0,T_cnt=0,L_A=0,M_A=0,R_A=0,flag=0;
	cin >> cnt;
	char str[cnt][100];
	for(int i=0;i<cnt;i++)
	{
		cin >> str[i];
	}
	for(int j=0;j<cnt;j++)
	{
		int k;status=0;
		P_cnt=0;A_cnt=0;T_cnt=0;
		L_A=0;M_A=0;R_A=0;
		int len = strlen(str[j]);
		for(k=0;k<len;k++)//strlen(str[j])
		{

			if(str[j][k] != 'P' && str[j][k] != 'A' && str[j][k] !='T')
			{
				status = 1;
				break;
			}
   			if(str[j][k] == 'P') 
			{
				P_cnt++;
			}
   			if(str[j][k] == 'A') 
			{
				A_cnt++;
				if(P_cnt == 0)L_A++;
				if(P_cnt == 1 && T_cnt == 0)M_A++;
				if(T_cnt == 1)R_A++;
			}
   			if(str[j][k] =='T') 
			{
				T_cnt++;
			}			
		}
		//cout << status << endl;
		if(R_A == (L_A*M_A))flag=1;
		if(status == 1 || P_cnt !=1 || T_cnt != 1 || flag ==0 || M_A==0)
		{
			cout << "NO" << endl;
			flag = 0;
		}
		if(P_cnt ==1 && T_cnt == 1 && M_A>0 && flag)
		{
			cout << "YES" << endl;
			flag = 0;
		}
	
	//	if(status == 2)cout << "YES" << endl;
		
	}
	return 0;
}
