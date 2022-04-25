#include <iostream>
using namespace std;


int main()
{
	int arr[1005] = {0};
	int n, t = 0;
	while(cin >> n)
	{
		int f = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			if(arr[i-1] >= arr[i])
				f = 1;
		}
		
		// function here
		int note[20005] = {};
		if(f == 0)
			for(int i = 1; i<n ; i++)
			{
				for(int j = i; j<=n;  j++)
				{
					if(note[arr[i] + arr[j]] != 0)
					{
						f = 1;
					}
					note[arr[i] + arr[j]] = 1;
				}
			}
		
		t++;
		if(f==0)
		{
			cout << "Case #" << t << ": It is a B2-Sequence."<< endl; 
		}else{
			cout << "Case #" << t << ": It is not a B2-Sequnce." << endl;
		}
		
		cout << endl;
		
		
		
	}
}









