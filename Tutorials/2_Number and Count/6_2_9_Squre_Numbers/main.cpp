#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int k;
	int count = 0;
	
	while(cin >> a >> b)
	{
		if((a==0 && b == 0) )
		{
			break;
		}
		
		for(int i = a ; i <= b ; i++)
		{
			k = i*i;
			if(k <= b)
			{
				count = count + 1;
			}
		}
		cout << count << endl;
		
		count = 0;
	
	}
	
}
