/*
	������
	1. ���� ���� ū ���ӵ� ���ڵ��� ����, �� ���� ���� ���Ͽ���~!!
	2. ���ӵ� ���� ���� ������ �� ���� ����Ͽ� �հ� �� ���� �ε��� ���� ����
	3. ������ �� �ε����� ����� ������ ���� ���� ��� �� ���� ���� ����ϴ� ���� �ε��� ������ ����
	4. �� ���� ���Ҷ����� ũ�⸦ ���Ͽ� ���� ��� �� ���� ū ���� ���
*/




#include<iostream>
#include<algorithm>

#define MAX 100000
#define num 0
#define sum 1

using namespace std;

int d[MAX][2];					//��, ���� �����ϱ� ���� ���߹迭

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, res;

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> d[i][num];




	for (int i = 0; i < N; i++)
	{
		if (!i)				//0��° �ε���, ���� ���� ���� ���
		{
			d[i][sum] = d[i][num];
			res = d[i][num];
		}
		if (d[i][num] > (d[i - 1][sum]+d[i][num]))			//�������� ���� ������� ���Ѱ�+�������� ������ Ŭ ���(ex����)
			d[i][sum] = d[i][num];							//���� �������� ������ ����
		else
			d[i][sum] = d[i - 1][sum] + d[i][num];			//�ƴҰ�� �ջ�
		res = max(res, d[i][sum]);							//����� �Ź� ��
	}

	cout<< res;
}/*
	������
	1. ���� ���� ū ���ӵ� ���ڵ��� ����, �� ���� ���� ���Ͽ���~!!
	2. ���ӵ� ���� ���� ������ �� ���� ����Ͽ� �հ� �� ���� �ε��� ���� ����
	3. ������ �� �ε����� ����� ������ ���� ���� ��� �� ���� ���� ����ϴ� ���� �ε��� ������ ����
	4. �� ���� ���Ҷ����� ũ�⸦ ���Ͽ� ���� ��� �� ���� ū ���� ���
*/




#include<iostream>
#include<algorithm>

#define MAX 100000
#define num 0
#define sum 1

using namespace std;

int d[MAX][2];					//��, ���� �����ϱ� ���� ���߹迭

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, res;

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> d[i][num];




	for (int i = 0; i < N; i++)
	{
		if (!i)				//0��° �ε���, ���� ���� ���� ���
		{
			d[i][sum] = d[i][num];
			res = d[i][num];
		}
		if (d[i][num] > (d[i - 1][sum]+d[i][num]))			//�������� ���� ������� ���Ѱ�+�������� ������ Ŭ ���(ex����)
			d[i][sum] = d[i][num];							//���� �������� ������ ����
		else
			d[i][sum] = d[i - 1][sum] + d[i][num];			//�ƴҰ�� �ջ�
		res = max(res, d[i][sum]);							//����� �Ź� ��
	}

	cout<< res;
}