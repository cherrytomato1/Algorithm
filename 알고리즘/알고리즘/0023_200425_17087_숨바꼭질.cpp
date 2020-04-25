/*

1. �����̿� ������ ������ �Ÿ����� �ִ� ������� ���ϴ� ����
2. �������� ��ǥ�� ���� ��ǥ�� �����̿� �������� �ڿ��� �Ÿ��� ����
3. ��� �������� �Ÿ��� �ִ������� ���� ( ��Ŭ���� ȣ����)




*/








#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>

using namespace std;

int getGCD(int a, int b)			//��Ŭ���� ȣ���� �������
{
	if (b == 0)						//�ִ� ����� (������ ������)�� ���ϸ� ����
		return a;
	else							//�� ���� ����� �ƴ� ��� ������(������ ���� ������ ��)�� �ݺ��Ͽ� ����
		return getGCD(b, a % b);
}

int arrGCD(vector <int>V)			//���Ϳ����� �ִ����� ���ϱ�
{
	int GCD;

	if (V.size() == 1)				//1���� ��� �ڱ� �ڽ�
		return V[0];

	GCD= getGCD(V[1], V[0]);		//ù ��°�� �� ��° ������ �ִ������� ����

	for (int i = 2; i < V.size(); i++)
	{
		if (GCD < V[i])
			swap(GCD, V[i]);
		GCD = getGCD(GCD, V[i]);
	}
	return GCD;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> br;

	int N, S;

	cin >> N;
	cin >> S;

	while (N--)
	{
		int i;
		cin >> i;
		br.push_back(i);
	}
	

	for (int i = 0; i < br.size(); i++)
		br[i] = abs(br[i] - S);				//�Ÿ��� ���밪���� ����

	sort(br.begin(), br.end());				//����
	cout << arrGCD(br);
}
