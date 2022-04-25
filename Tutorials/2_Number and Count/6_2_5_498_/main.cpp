#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


void SetArray();

int a[1000000];


int derivative(int x, int max)
{
	long long sum = 0, exp = 1;
	int i;
	
	for(i = max-1; i >= 0 ; i--)
	{
		sum += a[i] * exp * (max - i);
		exp *= x;
	}
	return sum;
}

int main()
{

	int x, n;
	while(scanf("%d",&x) != EOF)
	{
		for(n = 0;; n++)					// user input the element value to array to store
		{
			scanf("%d", &a[n]);
			if(getchar() == '\n'){
				break;
			}
		}
		
		printf("%d", derivative(x, n));
		
	}	
}






