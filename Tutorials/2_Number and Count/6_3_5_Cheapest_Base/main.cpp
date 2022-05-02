#include <iostream>
using namespace std;

const int mx_base = 36;

int main()
{
	int m;
	cin >> m;
	
	for(int k = 1; k <= m ; k++)
	{
		if(k > m)
			cout << endl;
			
		cout << " Case " << k << ":" << endl;									// 從第二組開始在每組測試資料中開頭印出一個空白列，達到在各組資料分隔的效果 
		
		// Input the catarige of 36 chart need		
		int  coc[mx_base];
		for(int i = 0 ; i < mx_base ; i++ )										// 輸入墨水量 
			cin >> coc[i] ;
		
		// Input 2	calcuate the need of the catorige
		int n;
		cin >> n;
		while(n--)
		{
			int x;
			cin >> x;
			
			int cob[mx_base + 1];
			
			for(int i = 2; i <= mx_base ; i++)
			{
				int t = x;
				cob[i] = 0;
				do{
					cob[i] += coc[t%i];											// 這邊是重點，必須要了解他將進位橫餘數直接對應到先前墨水量需要的量並合併所有用到的墨水量              
					t /= i;
				}while(t != 0);
			}
			
			// cheeck which is the minist need
			int min = cob[2];				// set the minist 
			for(int i = 3; i <= mx_base; i++)
			{
				if(cob[i] < min)
					min = cob[i];
			 } 
			 
			 // Print the answer 
			 cout << "Cheapest base(s) " << "for number " << x << ":";
		 
			 for(int i = 2; i <= mx_base ; i++)
			 {
			 	if(cob[i] == min)
			 		cout << " " << i;
			 }
			 
			 cout << endl;
		}
		
		
		
		
		
	}
}
