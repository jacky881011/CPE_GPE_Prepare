#include <iostream>
using namespace std;

int main()
{
	int i, sum = 0;
	int n, day_count = 1;
	int day;
	while(cin >> n >> day)
	{
		sum = n;
		while(1)
		{
			n++;
			sum = sum + n;
			
			if(sum >= day)
			{
				break;
			}	
		}
		cout << n << endl;
		
	}
}
