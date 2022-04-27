#include <iostream>
using namespace std;

int main()
{
	int arr[32];
	long long n;
	
	while(cin >> n)
	{
		if(n<=0)
			break;
			
		int m = n;
		int i = 0, length = 0, count = 0;
		
		while(1)
		{
			arr[i] = m % 2;
			m = m / 2;
			count += arr[i];
			
			if(m == 0)
			{
				break;
			}
			i++;
		}
		length = i;
		
		// print the final
		
		cout << "The parity of " ;
		for(int k = length ; k >= 0; k--)
			cout << arr[k] ; 
			
		cout << " is " << count << " (mod 2)." << endl; 
			
	}
}
