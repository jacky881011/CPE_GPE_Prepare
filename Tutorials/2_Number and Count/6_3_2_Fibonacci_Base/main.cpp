#include <iostream>
using namespace std;


int fib[100];
int arr[100];
int count=0;


void fibo(int n)
{
	count = 0;
	fib[0] = 1;
	fib[1] = 1;
	
	for(int i = 2; i <= 100; i++)
	{
		fib[i] = fib[i-1]+fib[i-2];
		
		count++;
		if(fib[i] >= n)
		{
			break;
			count = i;
		}
	}
	
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int k, z;
		cin >> k;
		fibo(k);
		int  max = k - fib[count];
		for(int j = 0; j <= count ; j++)
		{
			if(fib[j] == max){
				z = j;
				break;
			}
		}
		for(int i = 0; i <= count; i++)
		{
			if(i == z || i==count)
			{
				arr[i] = 1;
			}
			else{
				arr[i] = 0;
			} 
		 } 
		 
		 for(int j = count; j >= 0 ; j--)
		{
			cout << arr[j] ;
		}
		
		cout << endl;
		
		
	}
}
