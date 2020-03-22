/*
�似Ǫ�� ������ ������ ����.

1������ N������ N���� ����� ���� �̷�鼭 �ɾ��ְ�, ���� ���� K(�� N)�� �־�����. ���� ������� K��° ����� �����Ѵ�. �� ����� ���ŵǸ� ���� ������ �̷���� ���� ���� �� ������ ����� ������. �� ������ N���� ����� ��� ���ŵ� ������ ��ӵȴ�. ������ ������� ���ŵǴ� ������ (N, K)-�似Ǫ�� �����̶�� �Ѵ�. ���� ��� (7, 3)-�似Ǫ�� ������ <3, 6, 2, 7, 5, 1, 4>�̴�.

N�� K�� �־����� (N, K)-�似Ǫ�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� N�� K�� �� ĭ�� ���̿� �ΰ� ������� �־�����. (1 �� K �� N �� 5,000)

1158 2�� �似Ǫ��
*/

#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,K,temp;
	queue<int> Q;

	cin >> N;
	cin >> K;

	for (int i = 1; i <= N; i++)
		Q.push(i);

	cout << "<";
	for (int i = 1; !Q.empty(); i++)
	{
		temp = Q.front();
		Q.pop();
		if (i % K != 0)
			Q.push(temp);
		else if (Q.empty())
			cout << temp;
		else
			cout << temp << ", ";
	}
	cout << ">";
}