/*���丮�� 0�� ������ ���ڸ��� 10�� �����ŭ �������ִ��� ���ϴ� ��
  10�� 5*2�̹Ƿ� ���丮�� �������� 5�� 2�� ���� ������ ���ϸ� �ȴ�.
  ���丮���� ���μ��� ���� �� �׻� 2�� 5�� �������� �����Ƿ� 
  5�� ��� ���������� ���ϸ�ȴ�.*/


#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, five=0, j;			
	//N, 5�� ����

	cin >> N; 

	for (int i = 2; i <= N; i++)		//i�� 2~N �ݺ�
	{
		j = i;
		while (j % 5 == 0)				//i�� �μ� 5�� ������ ��� �����ϴ� ���� ����
		{
			j /= 5;
			five++;
		}
	}

	cout << five;
}

