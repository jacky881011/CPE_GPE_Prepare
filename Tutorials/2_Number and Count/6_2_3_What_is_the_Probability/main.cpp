#include <iostream>
#include <math.h>


using namespace std;

int main(void)
{
	int sets, i, num, n;
	double p, pi;
	
	cin >> sets;
	
	while(sets--)
	{
		cin >> n >> p >> i;
		
		if(p < 0.00001)
		{
			cout << "0.0000" << endl;
		}else{
			pi = (pow(1-p, i-1) * p) / (1- pow(1-p, n));
			printf("%.4f", pi);
			cout << endl;
		}
	}
}

