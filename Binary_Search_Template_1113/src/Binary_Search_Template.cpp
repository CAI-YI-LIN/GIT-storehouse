/*
Input:
i 10 3
0 10 20 30 40 50 60 70 80 90
40
100
60
s 3 3
kirito starburst stream
kirito
starburst
C8763

Output:
4
-1
6
0
1
-1

*/


#include<iostream>
#include<string>
using namespace std;

template <class T>
int BinarySearch(T arr[], T target,int n);

int main()
{
	char t;
	int n, q;
	while (cin>>t>>n>>q)
	{
		
		if (t == 'i')
		{
			int* arr = new int[n];
			for (int i = 0; i < n; i++)
				cin >> arr[i];

			int target;
			for (int i = 1; i <= q; i++)
			{
				cin >> target;
				cout<<BinarySearch<int>(arr, target,n)<<endl;

			}
		}
		else if (t == 's')
		{
			string* arr = new string[n];
			for (int i = 0; i < n; i++)
				cin>>arr[i];

			string target;
			for (int i = 1; i <= q; i++)
			{
				cin>>target;
				cout<<BinarySearch<string>(arr, target,n)<<endl;
			}
		}
	}
	return 0;
}
template <class T>
int BinarySearch(T arr[], T target,int n)
{
	int L = 0, R = n, M ;
	while (L <= R)
	{
		M = (L + R) / 2;
		if (arr[M] == target)
			return M;
		else if (arr[M] < target)
			L = M + 1;
		else if (arr[M] > target)
			R = M - 1;
			
	}
	return -1;
}