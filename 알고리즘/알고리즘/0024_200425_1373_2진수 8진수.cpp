/*

�Է��� 100�� �ڸ����� �����ϹǷ�

��� ����̳� �ӽ����� temp���� overflow�� �߻��Ͽ� ������� Ʋ���� ����

unsigned long long���� ���� ��쵵 ��������

������� ���ڸ��� ���� �����Ͽ� �ذ�


*/






#include<iostream>
#include<string>
#include<stack>
#include<cmath>


using namespace std;

int main()
{

	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt=0, temp = 0;
	string input;
	stack<int> N,oStk;

	cin >> input;

	for (int i = 0; i < input.size(); i++)
		N.push((int)input[i]-'0');

	for (;; N.pop(),cnt++)				//012 �ݺ� cnt
	{
		if (N.empty())									//��� ���� �� Ȯ��������
		{
			if (temp != 0)
				oStk.push(temp);						//���� ���� �����ֱ�
			break;
		}
		temp += N.top() * pow(2, cnt);					//���� ���� *2^cnt 

		if (cnt == 2)									//3�ڸ��� ��� �˻��ϱ�
		{
			oStk.push(temp);							//���ÿ� Ǫ��
			temp = 0;
			cnt = -1;
		}
	}

	if (oStk.empty())
		cout << "0";
	else
		while (!oStk.empty())
		{
			cout << oStk.top();
			oStk.pop();
		}
}