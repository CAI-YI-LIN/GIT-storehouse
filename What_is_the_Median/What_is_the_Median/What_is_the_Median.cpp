#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

	int save[10001];
	int s = 0;
	while (cin >> save[s++])
	{
		sort(save, save+s);
		if (s % 2 != 0)
		{
			cout << save[s/2] << endl;
		}
		else
		{
			int sum = (save[s/2]+save[s/2-1])/2;
			cout << sum<< endl;
		}
	}
	return 0;
}