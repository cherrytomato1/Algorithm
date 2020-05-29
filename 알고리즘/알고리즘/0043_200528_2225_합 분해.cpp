
/*
	�պ���
	1. �� N�� ����� ���ؼ� 0~N�� ������ ����ؼ� ����
	2. K���� ���� �̿��ؼ� ������ ����� ���� K-1�� ����� ������ 0~N�� ���� �������� ����� ��
	3. ���� d[n][k] = ��(d[i][k-1) / 0 <=i <=n
*/

#include<iostream>
#include<algorithm>

#define mod 1000000000
#define MAX 200

using namespace std;

unsigned long long d[MAX + 1][MAX + 1];

int f(int n, int k)
{
	int temp = 0;
	if(k == 1)
		return 1;

	if (d[n][k])
		return d[n][k];

	for (int i = n; i >= 0; i--)
	{

		temp += f(i, k - 1);
		temp %= mod;
	}

	return d[n][k] = temp;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	        

	int N, K;

	cin >> N;
	cin >> K;

	cout << f(N, K);

}