#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;

	cin >> M;

	cin >> N;

	vector<int> s(N+1);

	for (int i = 2; i <= N; i++)
		s[i] = i;

	for (int i = 2; i <= sqrt(N); i++)
	{
		if (s[i] == 0)
			continue;
		for (int j = i * 2; j <= N; j += i)
			s[j] = 0;
	}

	for (int i = M; i<=N; i++)
		if(s[i]!=0)
			cout << s[i] << " ";

}

//�Ҽ� ���ϱ� - �����佺�׳׽��� ü https://hellowoori.tistory.com/36 �ð����⵵ http://doocong.com/algorithm/sieve-of-eratosthenes/
//�Ҽ��� ��ƮN�� ������ ����ϸ� �ȴ� (�Ҽ��� �ƴ� ���� ��ƮN������ ����� ���Եȴ� 3*3 = 9(���� ū ���))