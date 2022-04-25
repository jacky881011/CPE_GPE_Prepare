#include <iostream>
using namespace std;



int main()
{
	int n;
	int a, b;
	
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		if((a <b) || (a<0) || (b<0) || ((a+b)%2 != 0) )
		{
				cout << "impossible" << endl;
		}else{
			int l =(a+b)/2;
			int s = (a-b)/2;
			
			cout << l << " " << s << endl;		
		}
	}
}
