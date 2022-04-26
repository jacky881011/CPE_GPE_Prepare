#include<iostream>
using namespace std;

int main() 
{
	int f[40] = {0, 1};
	
	// set the fibonacci
	for(int i = 2; i <40; i++)
	{
		f[i] = f[i-2] + f[i-1];
	}
	// cout << f[39] << endl;
	
	int n;
	cin >> n;
	while(n--)
	{
		int m;
		cin >> m;
		cout << m << " = ";
		
		bool preone = false;
		
		for(int k = 39; k>=2; k--)
		{
			if(m >= f[k])
			{
				cout << "1";
				m -= f[k];
				preone = true;
			}else if(preone){
				cout <<"0";
			}
		}
		
		cout << " (fib)" << endl;
		 
	}
}
