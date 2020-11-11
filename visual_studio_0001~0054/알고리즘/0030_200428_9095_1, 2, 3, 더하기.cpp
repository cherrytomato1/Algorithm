/*

1. N�� 1, 2, 3 ���ϱ�� ǥ���ϴ� ����� ���� N-1 +1 , N-2 +2 , N-3 +3 �� ����� ���� �ִ�
2. 1,2,3 �� ���� �ڱ� �ڽŸ����� ���� �ϼ��� �� �����Ƿ� +1�Ѵ�
3. ��ȭ�� A[N] = A[N-1] +A[N-2] A+[N-3]


*/


#include<iostream>

using namespace std;

int a[12];
int sum;


int makeSum(int N)
{
	if (N == 0)		return 0;				//Ư���� ��� �� ����
	if (N == 1)		return 1;
	if (N == 2)		return 2;
	if (N == 3)		return 4;

	if (a[N] != 0)							//����� ���̸� �迭�� ���
		return a[N];

	return a[N] = makeSum(N - 3) + makeSum(N - 2) + makeSum(N - 1);			//��ȭ���� �̿��� ����Լ� ���
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N;

	cin >> T;

	while (T--)
	{
		cin >> N;
		cout << makeSum(N)<<"\n";
	}
}/*

1. N�� 1, 2, 3 ���ϱ�� ǥ���ϴ� ����� ���� N-1 +1 , N-2 +2 , N-3 +3 �� ����� ���� �ִ�
2. 1,2,3 �� ���� �ڱ� �ڽŸ����� ���� �ϼ��� �� �����Ƿ� +1�Ѵ�
3. ��ȭ�� A[N] = A[N-1] +A[N-2] A+[N-3]


*/


#include<iostream>

using namespace std;

int a[12];
int sum;


int makeSum(int N)
{
	if (N == 0)		return 0;				//Ư���� ��� �� ����
	if (N == 1)		return 1;
	if (N == 2)		return 2;
	if (N == 3)		return 4;

	if (a[N] != 0)							//����� ���̸� �迭�� ���
		return a[N];

	return a[N] = makeSum(N - 3) + makeSum(N - 2) + makeSum(N - 1);			//��ȭ���� �̿��� ����Լ� ���
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N;

	cin >> T;

	while (T--)
	{
		cin >> N;
		cout << makeSum(N)<<"\n";
	}
}