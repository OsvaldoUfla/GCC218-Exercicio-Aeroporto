#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int m;
	int n;  
	int maior = -1;
	int quantTest=1;
	cin >> m >>n;
	vector<int> vectorx[2];
	while(m > 0)
	{

		int aeroportos[m];
		for(int j=0 ; j<m ; j++)
		 {
			aeroportos[j] = 0;
		 }
		maior=-1;
		for(int j=0 ; j<n ; j++)
		 {
			int u,v;
			cin >> u >>v;
			aeroportos[u-1]++;
			aeroportos[v-1]++;
		 }

		for(int k =0 ; k<m ; k++)
		{
			if(aeroportos[k] > maior)
			{
				maior = aeroportos[k];
			}
		}
		
		
		for(int i=0 ; i<m ; i++)
		{
			if(aeroportos[i] == maior)
			{
				vectorx[quantTest -1].push_back(i);
			}
		}

		
		quantTest++;
		cin >> m >>n;

	}

	for(int i =0; i<quantTest -1 ;i++)
	{
		cout << "Teste " << i +1 <<endl;
		for(vector<int>::iterator it = vectorx[i].begin(); it != vectorx[i].end(); ++it)
		{
			cout << (*it) + 1 << " ";
		}
		cout << endl << endl;
	}
	return 0;
}
