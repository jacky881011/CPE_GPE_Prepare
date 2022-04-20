#include <iostream>
#include <cctype>
using namespace std;

// Enter the n line of the phase, count each of the english times,
// base on times and sort the char also if two char appears times is equal then sort appear first before the next 

int count[256], len;

int main()
{
	char c;
	while(cin >> c) len++, count[toupper(c)]++;
	
	while(--len)
	{
		for(c= 'A';  c <= 'Z'; c++)
		{
			if(count[c] == len)
			{
				cout << c << count[c] << endl;
			}
		}
	}
}
