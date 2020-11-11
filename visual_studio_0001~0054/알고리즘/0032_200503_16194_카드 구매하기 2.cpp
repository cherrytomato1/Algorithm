/*
	1.ī�带 ���� ���� �������� �����ؾ��� �� ī�带 ������ ����� ���� ���ؾ���
	2. ī�� ���� ����� �� = d(N) = d(N), d(N-1)+d(1), d(N-2) +d(2) ... d(N-i)+d(i)
	3. ���� ��� ����� �� �� ���� ���� ���� d(N)���� ������ �� �ִ� ���� ����


*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int cost[1001];
int minCost[1001];

int pay(int N)					//����Լ�
{
	if (N == 0) return 0;					//pay(N)�� ��� 0 ��ȯ
	if (N == 1)	return cost[1];				//pay(1)�� ��� 1���� �����ϴ� �� ��ȯ

	if (minCost[N] == 0)					//�ش� ī�带 ������ �� �ִ� ���� ������ å���� �ȵȰ��
		minCost[N] = cost[N];				//�񱳸� �����ϱ� ���� �ش� ī�带 �׳� ������ ����� �� �Է�
	else									//�̹� å���� ��� �߰����� ������ ����
		return minCost[N];


	for (int i = 1; i < N; i++)				//d(N)=min(d(N),d(N-1)+d(1),d(N-2)+d(2) ..... d(N-i), d(i))
		minCost[N] = min(minCost[N], pay(N - i) + pay(i));
	return minCost[N];						//�ش� ī�带 �����ϴµ� �ʿ��� ���� ���� �� ����
}

int main()
{
	/*ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	*/
	//�Ʒ� �������� getc(C�� �Է��Լ�)�� ��� �߱� ������ sync_with_stdio ���Ұ���

	int N, T = 1;

	cin >> N;

	do {

		cin >> cost[T++];
	} while (getc(stdin) == ' ');

	cout << pay(N);
}