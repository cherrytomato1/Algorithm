/*
	������ ���̾Ƹ�� ���·� ��ġ�Ǿ� ���� �� �� �����ٿ��� �� ������ ��Ʈ�� ���� �� ��ĭ���� �� �Ʒ�ĭ���� �������� ��θ� ã�� �ͽ��ϴ�.

	���� ĭ���� �̵��� ���� ������ ����θ� �̵��� �� �ֽ��ϴ�. ���� ��� �Ʒ��� �׸����� 2��° ���� 4�� ���� ���� 7�Ǵ� 9�� �̵��ؾ߸� �մϴ�.

	��ο� ���Ե� ������ ���� ���� ū ����� ���� ����ϴ� ���α׷��� �ۼ��Ͻʽÿ�.

	3
	4 1
	7 9 2
	2 7 9 6
	1 9 5
	7 3
	9

	��� �ٱ��� �������µ��� d[c][a] -> d[c+1][a], d[c+1][a+1]�� �ְ�
	��� �ٺ��ʹ� -1, 0 �� �ִ�. row�� �ε����� 0�̸�, row�� �ִ� ������ �ʰ����� �ʰ� ����ó�����Ѵ�
	������ �ٱ��� �տ����� �� �� ���ݱ��� ���Դ� ���� �ִ밪�� ���Ͽ� ���� ���Ѵ�.


*/


#include<iostream>
#include<vector>
#include<algorithm>

#define rMAX 100
#define cMAX 100*2-1

using namespace std;

int d[cMAX][rMAX];
int N,ans=0;

void f(int col, int row, int val)					//������ ���� ����Լ�, col = ���� ��, row = ������ �ε���, val ������ �����ϸ鼭 �� ��
{
	val += d[col][row];


	if (col < N-1)
	{
		f(col + 1, row, val);
		f(col + 1, row + 1, val);
	}
	else if (col == (N - 1) * 2)
		ans = max(val, ans);

	else if ((row == (N - 1) * 2 - col) && row != 0)
		f(col + 1, row - 1, val);
	else if (row == 0)
		f(col + 1, row, val);
	else
	{
		f(col + 1, row, val);
		f(col + 1, row - 1, val);
	}
	
	return;

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> N;

	for (int i = 0; i < N; i++)					//�ﰢ�� �� �Է�
		for (int j = 0; j <= i; j++)
			cin >> d[i][j];

	for (int i = N; i < N * 2 - 1; i++)			//���ﰢ�� �� �Է�
		for (int j = 0; j < N*2 - 1 -i; j++)
			cin >> d[i][j];

/*
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << d[i][j] << " ";
		cout << "\n";
	}

	for (int i = N; i <N*2 - 1; i++)
	{
		for (int j = 0; j < N*2 -1 - i; j++)
			cout <<  d[i][j] << " ";
		cout << "\n";
	}
*/

	f(0, 0, 0);

	cout << ans;


}