/*
	0. ���� �� �����ϴ� �κм����� ���� �� �����ϴ� �κм����� ����
	0-1. �˻� ������ �� ���� ���� ������ ���� ����
*/

#include<iostream>
#include<algorithm>

#define NUM 0
#define CNT 1

using namespace std;

int d[1000][2];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, res = 0;


	cin >> N;


	for (int i = 0; i < N; i++)
		cin >> d[i][NUM];

	for (int i = N - 1; i >= 0; i--)
	{
		if (i == N - 1)
			d[i][CNT] ++;
		else
		{
			for (int j = i; j < N; j++)
				if (d[j][NUM] < d[i][NUM])				// �� ���� ���� ������ ��
					d[i][CNT] = max(d[j][CNT],d[i][CNT]);
			d[i][CNT]++;
		}
		res = max(res, d[i][CNT]);
	}

	cout << res;
}

