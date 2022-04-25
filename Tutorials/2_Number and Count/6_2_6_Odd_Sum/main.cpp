#include <iostream>
using namespace std;


int main()
{
	int a, b;
	int sum = 0;
	int count = 1;
	int n;
	
	cin >> n;
	while(n--)
	{
		cin >> a;
		cin >> b;
		if(a < b)
		{
			if( a%2 == 1)
			{
				for(int i = a; i <= b; i = i+2)
				{
					sum = sum + i;
				}
			}else{
				for(int i = a+1 ; i <= b; i = i+2)
				{
					sum = sum + i;
				}
			}
			
			cout << "Case " << count << ": " << sum << endl;
			count++;
			sum = 0;
		}
		
	}
	
}
