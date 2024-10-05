#include<iostream>
#include<stack>
using namespace std;

int Recursive(int m, int n)
{
	if (m == 0)return (n + 1);
	else if (n == 0)return Recursive(m - 1, 1);
	else return Recursive(m - 1, Recursive(m, n - 1));
}

int NonRecursive(int m, int n)
{
    stack<int> s;
    s.push(m);

    while (!s.empty()) {
        m = s.top();
        s.pop();

        if (m == 0) {
            n = n + 1;
        }
        else if (n == 0) {
            n = 1;
            s.push(m - 1);  // 相當於呼叫 Ackermann(m - 1, 1)
        }
        else {
            s.push(m - 1);
            s.push(m);      // 相當於呼叫 Ackermann(m, n - 1)
            n = n - 1;
        }
    }
    return n;
}


int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		//int function_result = Recursive(m, n);
		//cout << "Ackermann Recursive:"<<Recursive(m, n) << endl;
        int result = NonRecursive(m, n);
        cout << "Ackermann NonRecursive:"<< result << endl;
	}
	return 0; 
}
