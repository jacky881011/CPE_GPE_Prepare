#include <iostream>
using namespace std;

int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		if((n<2) || (m <2))
			cout << "Boring!" << endl;
		
		int temp = n;
		while((n%m)==0 && n >= 1)
		{
			n = n/m;
		}
		
		// check if n == 1 or not 
		if(n==1)
		{
			while((temp%m) == 0 && temp >= 1){
				cout << temp << " ";
				temp /= m;
			}
			cout << 1 << endl;
		}else{
			cout << "Boring!" << endl;
		}
		
		
	}
}
