/*

ũ�Ⱑ N�� ���� A = A1, A2, ..., AN�� �ִ�. ������ �� ���� Ai�� ���ؼ� ��ū�� NGE(i)�� ���Ϸ��� �Ѵ�. Ai�� ��ū���� �����ʿ� �����鼭 Ai���� ū �� �߿��� ���� ���ʿ� �ִ� ���� �ǹ��Ѵ�. �׷��� ���� ���� ��쿡 ��ū���� -1�̴�.

���� ���, A = [3, 5, 2, 7]�� ��� NGE(1) = 5, NGE(2) = 7, NGE(3) = 7, NGE(4) = -1�̴�. A = [9, 5, 4, 8]�� ��쿡�� NGE(1) = -1, NGE(2) = 8, NGE(3) = 8, NGE(4) = -1�̴�.

�Է�
ù° �ٿ� ���� A�� ũ�� N (1 �� N �� 1,000,000)�� �־�����. ��°�� ���� A�� ���� A1, A2, ..., AN (1 �� Ai �� 1,000,000)�� �־�����.

17298 ��ū�� 1��
*/
#include<iostream>
#include<string>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	vector<int> V,resV;
	stack<int> stk;

	cin >> N;
	V.resize(N);

	for (int i=0; i < N; i++)
		cin >> V[i];

	resV.resize(N,-1);

	for (int i = N-1; i >= 0; i--)
	{
		while (!stk.empty() && stk.top() <= V[i])
			stk.pop();

		if (stk.empty())
			resV[i] = -1;
		else
			resV[i] = stk.top();

		stk.push(V[i]);
		
	}

	for (int i = 0; i < N; i++)
		cout << resV[i] << " ";
		
}

/*
2�߹ݺ��� O(N^2)�̹Ƿ� �ʰ�

������ �� ���� �˻��Ѵ� ������ ž���� ���Ͽ� ���� �ε������� ž�� ũ�� ž�� ��ū���� �ȴ�

������ empty�� �Ǹ� �� �ε����� �ڱ� �ڽ��� ��ū���� �ȴ� (-1)

���� �˻簡 ���� ������ ���ÿ� �״´�.

O(N)



*/