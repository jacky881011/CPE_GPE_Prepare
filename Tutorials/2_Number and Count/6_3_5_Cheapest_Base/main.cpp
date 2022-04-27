#include <iostream>
using namespace std;

int main()
{
	int num_Class;
	int cat_volume[4][9];
	
	cin >> num_Class;
	while(num_Class--)
	{
		// set the catorige of volume 
		for(int i = 0 ; i < 4; i++)
		{
			for(int j = 0 ; j < 9; j++)
			{
				cin >> cat_volume[i][j];
			}
		}
		
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 9 ; j++)
			{
				cout << cat_volume[i][j] << " ";
			}
			cout << endl;
		}
		
		
		cout << endl;									// need the column in the line 
	}
}
