#include <iostream>
using namespace std;



int main(void)
{
	int cases, n;
	char temp[100];
	
	long long m[100][100];
	int i, j, f, c = 1;
	cin >> cases;
	
	while(c <= cases)
	{
		cin >> temp >> temp >> n; 
		
		f = 1;							// check the matrix inside element have some negative value
		for(int i=0 ; i < n; i++) 
		{
			for(int j= 0; j < n; j++)
			{
				cin >> m[i][j];
				if(m[i][j] < 0)  		// check the element is large or small than zero
				{
					f = 0;
				}
			}
		}
		
		if(f==1)
		{
			for(int i=0; i < n ; i++)
			{
				for(int j=0; j < n ; j++)
				{
					if(m[i][j] != m[n-1-i][n-1-j])
					{
						f = 0;
						break;
					}
				}
			}
		}
		
		
		if(f==0)
		{
			cout << "Test #" << c << ": Non-symmetric." << endl;
		}else{
			cout <<  "Test #" << c << ": Symmetric." << endl;
		}
		c++;
	}
 } 
