/*

	1996	������ ť

	���Լ����ϴ� �����Ͱ� ����

	��½� �߿䵵�� Ȯ���Ͽ� ť�� �ִ� �ٸ� �� �߿� �߿䵵�� �� ���� ���� �ִٸ� �� �ڷ� ����

	�Է�

	T �׽�Ʈ ���̽�
	M ���� ���� N ��� ������ �˰� ���� ������ ���� �ε���(0~)
	~			������ �������� �߿䵵


*/
#include<iostream>
#include<algorithm>

#define Nmax 100
#define IPTCmax 9

using namespace std;

int arr[Nmax][2] = { 0, };				//[0]== ���� �ڷ��� ��ġ, [1] ���� �ڷ��� �߿䵵
int T, N, M = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int temp,size,cnt;
	int arrT, arrT2, arrT3;

	cin >> T;
	
	while (T--)
	{
		fill(&arr[0][0], &arr[Nmax-1][1], 0);
		cin >> N;
		cin >> M;
		size = N;
		cnt = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			arr[i][0] = i;
			arr[i][1] = temp;
		}

		while (arr[M][0] != -1)
		{
			for (int i = 0; i < N; i++)
			{
				if (arr[i][0] == 0)
				{
					for (int j = 0; j < N; j++)
					{
						arrT = arr[j][1];
						arrT2 = arr[i][1];
						arrT3 = arr[j][0];

						if ((arr[j][1] > arr[i][1]) && (arr[j][0]!=-1))
						{
							arr[i][0] += size;
							break;
						}
						if (j == N-1)
						{
							size--;
							cnt++;
						}
					}
				}
				if (arr[i][0] != -1)
					arr[i][0]--;
			}
			//cout << arr[M][0] << " ";
			
		}
		cout << cnt << "\n";
	}

}