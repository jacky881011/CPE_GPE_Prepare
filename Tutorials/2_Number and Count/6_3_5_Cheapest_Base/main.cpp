#include <iostream>
using namespace std;

const int mx_base = 36;

int main()
{
	int m;
	cin >> m;
	
	for(int k = 1; k <= m ; k++)
	{
		if(k > m)
			cout << endl;
			
		cout << " Case " << k << ":" << endl;									// �q�ĤG�ն}�l�b�C�մ��ո�Ƥ��}�Y�L�X�@�ӪťզC�A�F��b�U�ո�Ƥ��j���ĪG 
		
		// Input the catarige of 36 chart need		
		int  coc[mx_base];
		for(int i = 0 ; i < mx_base ; i++ )										// ��J�����q 
			cin >> coc[i] ;
		
		// Input 2	calcuate the need of the catorige
		int n;
		cin >> n;
		while(n--)
		{
			int x;
			cin >> x;
			
			int cob[mx_base + 1];
			
			for(int i = 2; i <= mx_base ; i++)
			{
				int t = x;
				cob[i] = 0;
				do{
					cob[i] += coc[t%i];											// �o��O���I�A�����n�F�ѥL�N�i���l�ƪ�����������e�����q�ݭn���q�æX�֩Ҧ��Ψ쪺�����q              
					t /= i;
				}while(t != 0);
			}
			
			// cheeck which is the minist need
			int min = cob[2];				// set the minist 
			for(int i = 3; i <= mx_base; i++)
			{
				if(cob[i] < min)
					min = cob[i];
			 } 
			 
			 // Print the answer 
			 cout << "Cheapest base(s) " << "for number " << x << ":";
		 
			 for(int i = 2; i <= mx_base ; i++)
			 {
			 	if(cob[i] == min)
			 		cout << " " << i;
			 }
			 
			 cout << endl;
		}
		
		
		
		
		
	}
}
