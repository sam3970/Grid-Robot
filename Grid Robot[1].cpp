#include<iostream>



using namespace std;



int route[15][15];
int x = 0;
int y = 0;

int calc(int n, int m)
{
	if (n == 1) { return 1; }
	if (m == 1) { return 1; }
	
	route[n][m] = calc(n - 1, m) + calc(n, m - 1);
	
	return route[n][m];
}

int main()
{
	int n,m,k;
	
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
		cout << calc(n, m) << endl;
	}

	else 
	{
		cout << calc(x, y)*calc(n - x + 1, m - y + 1) << endl;
	}

	system("pause");

}