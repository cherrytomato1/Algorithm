/*
	0. ���� �� �����ϴ� �κм������� ������ ���̸� ������ ������ �ٲٸ� �ȴ�


	1.���� ū �����ϴ� �κм����� �����ϴ� �κм����� ���տ��� ���� ���� ū �κм����� ���� ����Ѵ�
	2.������ �ε������� �����ϴ� �κм������� �˻��Ͽ� �����ϴ� �κм����� ��� �����ϴ� ���� �� ���� ���� ū ���� ���� �˻��ϴ� ���� �����Ѵ�.
*/



#include<iostream>
#include<algorithm>
#include<vector>


#define NUM 0
#define SUM 1

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
			d[i][SUM] = d[i][NUM];
		else
		{
			for (int j = i; j < N; j++)
				if (d[j][NUM] > d[i][NUM])
					d[i][SUM] = max(d[j][SUM], d[i][SUM]);

			d[i][SUM] += d[i][NUM];
		}
		res = max(res, d[i][SUM]);
	}

	cout << res;
}