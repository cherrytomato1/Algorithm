/*

	16637 ��ȣ �߰��ϱ�

	1<=N<=19 �� ���� �ο� ���� ����

	���Ŀ� ���Ƿ� ��ȣ�� �ο��Ͽ� ���� ū ����� ����ϴ� ���� ��� ����� ����ض�

	��ȣ �ȿ��� �ݵ�� �ϳ��� �����ڸ� ���ԵǸ� �ߺ� ��ȣ�� ����


	1. ���� �����ں��� ����Ѵٰ� ���� �� ����� ���� 
		1-1. ��ȣ�� ���� �ʴ´�, +a
		1-2. ��ȣ�� �ִ´�, +(a+b)
	2. ����� ���� ���� �ε����� �̵��Ѵ�. 1-1�� ��� 1���� ���길 �����Ƿ� index+=2, 1-2�� index+=4
	3. ���� ��ȭ������ ��� ����� ���� ����Լ��� ���� �����ϰ� �ִ��� ���Ѵ�.
	4. �����ڰ� f�� �ε����� �����ϰ� ���������Ƿ� index==0 �϶� �ʱⰪ�� �������ش�(str[0]�� �ǿ�������)
	5. ���� �� ��� �׿� ��ȣ�� ���� �����ϹǷ� +,*�� ���� �켱������ ������� �ʴ´�.

	* �������� ���� �� �����Ƿ� INT_MIN���� ����� �ʱ�ȭ

*/

#include<iostream>
#include<algorithm>
#include<string>
#include<climits>

using namespace std;

int N,ans=INT_MIN;	
string str;

int calc(int a, int b, char op)			//���� �Լ�
{
	switch (op)
	{
	case '+' :
		return a + b;
	case '-' :
		return a - b;
	case '*' :
		return a * b;
	case '/':
		return a / b;
	default :
		return 0;
	}
}

int casting(int index)					//string ����ȯ �Լ�
{
	return str[index] - '0';
}

void f(int val, int index)				//����Լ�
{

	if (index > N - 1)					//��� �ε����� ���� ������ ������ ���
	{
		ans = max(val, ans);
		return;
	}	

	if (index == 0)						//�ʱ� ����, �ǿ����ڰ� ��� ����̹Ƿ� ����ó��
	{
		f(casting(index),index+1);
		f(calc(casting(index), casting(index + 2), str[index + 1]), index + 3);
	}
	
	else
	{
		f(calc(val, casting(index + 1), str[index]), index + 2);				//��ȣ ���� �ٷ� �����װ� ����

		if (index < N - 3)
			f(calc(val, calc(casting(index + 1), casting(index + 3), str[index + 2]), str[index]), index + 4);		
																				//�������� ��ȣ�� �־� �� ������ ���� ������ ����
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin >> str;

	f(0, 0);

	cout << ans;

}