#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int n = 10;
	int arr[100];
	int j = 0;
	while(cin >> n && n != 0)
	{
		while(1)
		{
			count = count +1;
			if(n%2 == 1)
			{
				n = n*3 +1;
			}else{
				
				n /=2;
			}
			
			if(n==1)
			{
				break;
			}
			cout << n << endl;
		
		}
		count += 1;
		arr[j] = count;
		cout << "N = 1: Count is: " << count << endl;
		count = 0;
		j++;
		
	}
	
	cout << "j:" << j << endl;
	cout << "j[0]" << arr[j-1] << endl;
	
}
