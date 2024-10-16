#include<iostream>
#include<string>

using namespace std;
int main()
{
	int n;
	string nn;
	int az[26] = { 0 };
	cin >> n;
	getline(cin, nn);
	while (n)
	{
		string str;
		getline(cin, str);
		for (int i = 0; i < str.size(); i++)
		{
			char c = str[i];
			if (c >= 'a' && c <= 'z')
			{
				az[c - 'a']++;
			}
			else if (c >= 'A' && c <= 'Z')
			{
				az[c - 'A']++;
			}
		}
		n--;
	}
	int max = 0;
	for (int i = 0; i < 26; i++)
	{
		if (az[i] > max)
		{
			max = az[i];
		}
	}
	for (int i = max; i > 0; i--)
	{
		for (int j = 0; j < 26; j++)
		{
			if (az[j] == i)
			{
				cout << (char)(j + 'A') << " " << az[j] << endl;
			}
		}
	}
	return 0;
}