#include <iostream>
using namespace std;
int h[100];

int main()
{
	int n;

	int arr[3651];
	cin >> n;
	while(n--)
	{
		int t, k, p;
		cin >> t >> k;
		
		for(int i = 0 ; i < 3651; i++)
			arr[i] = 0;
		
		for(int i =0 ; i < k ; i++)
		{
			cin >> h[i];
			for(int j = h[i] ; j <= t ; j += h[i])
			{
				arr[j] = 1;
			}
		}
		
		int count = 0;
		for(int i = 1; i <= t ; i++)
		{
			if(i%7 == 6 || i%7 == 0)
				continue;
				
			if(arr[i] == 1)
				count++;
		 } 
		 
		 cout << count << endl;
		
	 } 
}
