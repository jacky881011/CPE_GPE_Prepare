#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		// use the set to get the element, not the array
		set<int> tank;				// set is the collection.
		
		int a; 
		cin >> a;
		
		for(int i = 1; i < n; i++)
		{
			int b;
			cin >> b;
			int dn = (b-a < 0) ? (a-b) : (b-a);			// like abs function 
			
			if(dn && dn < n)							// if dn is less than the length and dn is lager than zero
			{
				tank.insert(dn);
			}
			a = b;			// swap the number  
			
			
		}
		
		if(tank.size() == n - 1)
		{
			cout << "Jolly" ;
		}else{
			cout << "Not jolly";
		}
		
		cout << endl;
		
	}
	
}
