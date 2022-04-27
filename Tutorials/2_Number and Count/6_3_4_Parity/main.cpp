#include <iostream>
using namespace std;

int main()
{
	cout << "Hello world" << endl;
	long long input;
	long long arr[2147483647];
	
	while(cin >> input)
	{
		
		
		int i = 0, count = 0, length = 0;
		while(1)
		{
			arr[i] = input % 2;
			input  = input / 2;
			count += arr[i];
			
			if(input==0)
			{
				break;
			}
			i++;
		}
		length = i;
		
		cout << "The parity of " ;
		
		for(int i = length ; i>= 0 ; i--)
			cout << arr[i];
		
		cout << "is " << length << "(mod 2)." << endl ;
		
		
		
	}	
	
	
	
}
