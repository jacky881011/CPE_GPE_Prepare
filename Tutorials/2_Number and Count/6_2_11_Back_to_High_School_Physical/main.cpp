#include <iostream>
using namespace std;


int main(void)
{
	int v, t;
	int distance;
	
	while(cin >> v >> t)
	{
		if((0<=t) && (t <= 200) && (-100 <= t) && (t <= 100))
		{
			distance = 2*v*t;
			cout << distance  << endl; 
		 } else{
		 	cout << "Reback to the while loop and check the input again!" << endl;
		 }
		
		
	}
	
}
