/*
	1. ��ȭ�� -> d[N][0] = d[n-1][0] + d[n-1][1]
	             d[N][1] = d[n-1][0]

	2. �̸� �����ϸ�		d[N] = d[N][0]+d[N][1] = d[N][1]+ d[N-1][0] + d[N-1][1]
								 = d[N][1]+ d[N-1][1] + d[N-2][1] ....
		�ʱⰪ�� d[1],d[2]�� ���� 1,1 �̹Ƿ� �̴� �Ǻ���ġ �����̴�.
		���� �Ǻ���ġ ���� ������ε� �ذ��� �� �ִ�

*/



#include<iostream>

using namespace std;

unsigned long long d[90 + 1][2];

unsigned long long f(int N, int a)
{
	if (N == 1)
		return 1;

	if (d[N][a])		return d[N][a];

	if (a == 1)
		return d[N][a] = f(N - 1, 0);

	else
		return d[N][a] = f(N - 1, 0) + f(N - 1, 1);
}

int main()
{
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	cout << f(N, 1);
}