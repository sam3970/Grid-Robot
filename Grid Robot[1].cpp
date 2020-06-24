#include<iostream>

using namespace std;

/* 전역 변수 선언 */
int route[15][15];
int x = 0;
int y = 0;

/* 피보나치 수열 구현부 */
int fib(int n, int m)
{
	if (n == 1) { return 1; }
	if (m == 1) { return 1; }
	
	route[n][m] = fib(n - 1, m) + fib(n, m - 1);
	
	return route[n][m];
}

int main()
{
	int n, m, k;
	
	cin >> n; cin >> m; cin >> k;
	
	int num = 1;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (k == num)
			{
				x = i;
				y = j;
			}

			route[i][j] = num;
			num++;
		}
	}

	if (k == 0)
	{
		cout << fib(n, m) << endl; //0일 때는 해당 부분만 넘겨 계산
	}

	else 
	{
		cout << fib(x, y)*fib(n - x + 1, m - y + 1) << endl;
	}

	system("pause");

}
