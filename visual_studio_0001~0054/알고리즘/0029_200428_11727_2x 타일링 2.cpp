/*

1. 2xn Ÿ�ϸ��� ��ȭ�Ŀ��� �Ѱ��� ����� ���� �߰���
 1-1. �Ӱ� �߰��� ��� - > a[n] = a[n-1]
 1-2   =�� �߰��� ��� - > a[n] = a[n-2]
 1-3  ���� �߰��� ��� - > a[n] = a[n-2]		:: ���� �߰��� ��ȭ��

2. 2x2 Ÿ�Ͽ����� ����� ���� 1���� �߰��� a[2] = 3


*/


#include<iostream>

using namespace std;

int a[1001];

int makeBox2(int N)
{
	if (N == 1)		return 1;					//1 �� 2�� ����� ���� �ٷ� ����
	if (N == 2)		return 3;					
	
	if (a[N] != 0)	return a[N];				//�̹� �� �� ���ߴ� ���� ��� �� ���� ����

	return a[N] = (makeBox2(N - 1) + makeBox2(N - 2) * 2)%10007;		//��ȭ�Ŀ� ���� �� ����Լ� ��� 
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	cout << makeBox2(N);
}