/*

	1. �־��� ���μ��� �ִ밪 max 500
	2. �� ����� ������ ��� ��Ʈ�ι̳�� 4�������� ��ĭ �� ������ �� ����� �ϼ��� �� ����
	 2-1. ���� �� ������ �� ��ǥ�� �ִ� ���� ����
	  2-1-1. ������ �����ߴ� ��Ͽ� �ٽ� �������� �ʰ� ����ó��
	  2-1-2. ��ǥ�� 0�� N,M�� �ʰ����� �ʵ��� ����ó��
	  2-1-3. ����� ����� ���� 4���� �� ������ �ݺ�(��Ϳ���)
	 2-2. �� ����� ����ó���Ͽ� ���
	  2-2-1. ����ϴ� ����� ��ǥ�� ���� �� �Ʒ� �� ���� ���� ��� ���� ( + ������� ����)
	  2-2-2. + ����� ������ �� �Ʒ� �� �� �� ���� �� �� ���� �� �����Ͽ� ���� ū ���� ���� ������� ���
	  2-2-3. �����ڸ��� �پ� �ִ� ��ǥ�� �� ���� �� �ʿ� �����Ƿ� �״�� ���

*/




#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>

#define MAX 500


using namespace std;

int map[MAX][MAX];
int N,M,ans=0;						//n,m ����� �ʱ�ȭ


void f2(int col, int row)				// �� �� �� �� ��� ����ó���� �Լ�
{
	int val=0,f2ans=0;
	val += map[col][row];				//���� ��� ��ǥ�� ���� ����
	if (col != 0)						// �ִ밪 �� �ּҰ��� �ʰ����� �ʴ� ������ +������� ����
		val += map[col - 1][row];
	if (col < N-1)
		val += map[col + 1][row];
	if (row != 0)
		val += map[col][row - 1];
	if (row < M - 1)
		val += map[col][row + 1];


	if (col != 0)						//���� �ϳ��� ��ǥ�� �� ��, �����ڸ��� �ɷ��־� ������ �Ұ����� ���� ���� ��ǥ�� ��� ���� ����
		f2ans = max(val - map[col - 1][row], f2ans);
	else
		f2ans = val;

	if (col <N-1)
		f2ans = max(val - map[col + 1][row], f2ans);
	else
		f2ans = val;

	if (row != 0)
		f2ans = max(val - map[col][row - 1], f2ans);
	else
		f2ans = val;

	if (row < M - 1)
		f2ans = max(val - map[col][row + 1], f2ans);
	else
		f2ans = val;
	
	ans = max(f2ans, ans);				//�ִ밪 ��

}
void f(int col, int row, int pcol, int prow, int cnt,int val)	//���� �˻� ��ǥ, ��� ���� �˻��ߴ� ��ǥ, �ݺ��� ȸ��, ������ ��
{
	val += map[col][row];

	if (cnt == 3)												//4���� ��� ������ ��� ������ ���
	{
		ans = max(val, ans);
		return ;
	}
	if (cnt == 0)												//�� ���� ������ ������ ��� �� �� �� �� ����ó�� ���� ������
		f2(col, row);
	if (col != 0)												//�ִ� ��ǥ�� ����� �ʴ� ��, ������ ��ȴ� ��ǥ�� �ƴ� ��쿡 ���Ͽ� �����¿� ��� ����
		if (col - 1 != pcol)
			f(col-1, row, col, row, cnt + 1, val);
	if (col < N - 1)
		if (col + 1 != pcol)
			f(col+1, row, col, row, cnt + 1, val);
	if (row != 0)
		if (row - 1 != prow)
			f(col, row-1, col, row, cnt + 1, val);
	if (row < M - 1)
		if (row + 1 != prow)
			f(col, row+1, col, row, cnt + 1, val);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	srand(time(NULL));

	
	cin >> N;				//col
	cin >> M;				//row

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> map[i][j];
			//map[i][j] = rand() % 2;

	/*
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << map[i][j]<< " ";
		cout << "\n";
	}
	*/

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			f(i, j, -1, -1, 0, 0);					//��� ��ǥ�� ���� ����

	cout << ans;
}