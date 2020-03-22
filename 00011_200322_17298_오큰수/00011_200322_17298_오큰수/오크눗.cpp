/*

ũ�Ⱑ N�� ���� A = A1, A2, ..., AN�� �ִ�. ������ �� ���� Ai�� ���ؼ� ��ū�� NGE(i)�� ���Ϸ��� �Ѵ�. Ai�� ��ū���� �����ʿ� �����鼭 Ai���� ū �� �߿��� ���� ���ʿ� �ִ� ���� �ǹ��Ѵ�. �׷��� ���� ���� ��쿡 ��ū���� -1�̴�.

���� ���, A = [3, 5, 2, 7]�� ��� NGE(1) = 5, NGE(2) = 7, NGE(3) = 7, NGE(4) = -1�̴�. A = [9, 5, 4, 8]�� ��쿡�� NGE(1) = -1, NGE(2) = 8, NGE(3) = 8, NGE(4) = -1�̴�.

�Է�
ù° �ٿ� ���� A�� ũ�� N (1 �� N �� 1,000,000)�� �־�����. ��°�� ���� A�� ���� A1, A2, ..., AN (1 �� Ai �� 1,000,000)�� �־�����.

17298 ��ū�� 1��
*/
/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N=0;
	int *arr;
	int j,num;

	cin >> N;

	arr = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N; i++,num=-1)
	{
		for (j = i+1; j < N; j++)
		{
			if (arr[j] > arr[i])
			{
				num=arr[j];
				break;
			}
		}
		cout << num << " ";
	}
}
*/


#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	stack<int> stk1,stk2,stk3,stk4;
	int j, num,val;

	cin >> N;

	

	for (int i = 0; i < N; i++)
	{
		cin >> val;
		stk1.push(val);
	}


	while (!stk1.empty())
	{
		if (stk2.empty())
			num = -1;
		else 
		{
			num = stk2.top();
			while (stk1.top() > stk2.top())
			{
				stk3.push(stk2.top());
				stk2.pop();
				
				if (stk2.empty())
				{
					num = -1;
					break;
				}

				num = stk2.top();
			}

		}
		while (!stk3.empty())
		{
			stk2.push(stk3.top());
			stk3.pop();
		}

		stk4.push(num);
		stk2.push(stk1.top());
		stk1.pop();
	}
	while (!stk4.empty())
	{
		cout << stk4.top() << " ";
		stk4.pop();
	}
}