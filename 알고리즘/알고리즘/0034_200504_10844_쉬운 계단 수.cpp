

/*
	1. ��ܼ��� ���ӵ� ���� �̷���� ����
	2. ��ܼ� ���� N, ��ܼ��� ������ a�̶�� ���� �� �� ��ܼ��� ������ ���� ��ȭ���� ���´�
	d[N][a] = d[N-1][a-1] + d[N-1][a+1] (a�� 1~8�϶�)

	d[N][a] = d[N-1][a+1] (a�� 0�϶�)

	d[N][a] = d[N-1][a-1] (a�� 9�϶�)

*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#define mod 1000000000

using namespace std;

unsigned long long dp[100+1][10];

unsigned long long f(int N, int a)
{

	if (dp[N][a])							//�̹� �ѹ� ���� ��ܼ� N,a
		return dp[N][a];

	if (a == 0)								//0 �� 9�� 1 �� 8�θ� ��ܼ��� �̷� �� �ִ�
		return dp[N][a] = f(N - 1,a + 1);
	if (a == 9)
		return dp[N][a] = f(N - 1,a - 1);

	return dp[N][a] = (f(N - 1,a - 1) + f(N - 1,a + 1)) % mod;				//d[N][a] = d[N-1][a-1] + d[N-1][a+1] ����
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 10; i++)				// 0~9�� ��� N==1(1�ڸ�)�� �� ��ܼ��� �� �ϳ��̹Ƿ� �ʱ�ȭ
		dp[1][i] = 1;
	int N,sum=0;

	cin >> N;

	for (int i = 1; i < 10; i++)				//0���� �����ϴ� ���� �����Ƿ� 1���� ����
	{
		sum += f(N, i);
		sum %= mod;
	}

	cout << sum;
}
