/*
	1.ī�带 ���� ���� �������� �����ؾ��� �� ī�带 ������ ����� ���� ���ؾ���
	2. ī�� ���� ����� �� = d(N) = d(N), d(N-1)+d(1), d(N-2) +d(2) ... d(N-i)+d(i)
	3. ���� ��� ����� �� �� ���� ū ���� d(N)���� ������ �� �ִ� �ְ� ����


*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int cost[1001];
int maxCost[1001];

int pay(int N)					//����Լ�
{
	if (N == 0) return 0;					//pay(N)�� ��� 0 ��ȯ
	if (N == 1)	return cost[1];				//pay(1)�� ��� 1���� �����ϴ� �� ��ȯ

	if (maxCost[N] == 0)					//�ش� ī�带 ������ �� �ִ� �ְ� ������ å���� �ȵȰ��
		maxCost[N] = cost[N];				//�񱳸� �����ϱ� ���� �ش� ī�带 �׳� ������ ����� �� �Է�
	else									//�̹� å���� ��� �߰����� ������ ����
		return maxCost[N];


	for (int i = 1; i < N; i++)				//d(N)=max(d(N),d(N-1)+d(1),d(N-2)+d(2) ..... d(N-i), d(i))
		maxCost[N] = max(maxCost[N],pay(N - i) + pay(i));	
	return maxCost[N];						//�ش� ī�带 �����ϴµ� �ʿ��� ���� ū �� ����
}

int main()
{
	/*ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	*/
											//�Ʒ� �������� getc(C�� �Է��Լ�)�� ��� �߱� ������ sync_with_stdio ���Ұ���

	int N,T=1;

	cin >> N;

	do {
		
		cin >> cost[T++];
	} while (getc(stdin) == ' ');

	cout << pay(N);
}