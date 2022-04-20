#include <iostream>
#include <cctype>
#include <string> 

using  namespace std;

int getNumber(int n);
void getThePageNumber();

int main(void)
{
	int i, j;
	int sum = 0;
	for( i = 0;  i < 10 ; i++)
	{
		for(j = 0; j < 10; j++)
		{
			sum++; 
			cout << sum << "\t" ; 
		}
		cout << endl;
		cout << endl; 
	}
	
	getThePageNumber();
	

} 

void getThePageNumber()
{
	int count;
	for(int i = 0; i < 10; i++)
	{
		count = getNumber(i);
		cout << count << " ";
	}
	

 } 
 
 int getNumber(int n)
{
	return n+1;
}

	
 
