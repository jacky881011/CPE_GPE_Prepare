#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char week[7][10] = {"Sunday", "Monday", "Thuesday", "Wednesday", "Thursday", "Friday", "Saturday"}; // [10] means each of the char has the ten length  of the string
	
	
	
	int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int n;
	
	cin >> n;		// enter the number of testing number
	
	while(n--)		// minus until the n to become 0
	{
		int month, day;
		cin >> month >> day;
		
		int w = 5; 		// 2010 / 12 /31 is Friday, index on the week is 5
		for(int i = 1; i < month; i++)
		{
			w += month_days[i-1];
		}
		
		w = (w+day) % 7;		// add the day because of month + days from the month
		
		
		cout << week[w] << endl;
		
	}
}
