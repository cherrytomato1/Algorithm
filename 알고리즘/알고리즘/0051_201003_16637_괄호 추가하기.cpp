/*

	�־��� ���Ŀ� ������ ��ȣ�� �߰��Ͽ� �ִ��� ���Ͽ���

	�����ڴ� +�� *�� ����

	�־����� ���� 0~9

	������ �׻� Ȧ���̸� 1<=N<=19��


	3+3*2

	332+*
	3+3*2
	-> (3+3)*2


*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

void f(stack<char>* stk,vector<char>* vctr, char x)
{
	switch (x)
	{
	case '0' :
	case '1' :
	case '2' :
	case '3' :
	case '4' :
	case '5' :
	case '6' :
	case '7' :
	case '8' :
	case '9' :
		vctr->push_back(x);
		break;

	case '+' :
	case '-' :
		if (!stk->empty())
			switch (stk->top())
			{
			case '+':
			case '-':
			case '*':
			case '/':
				vctr->push_back(stk->top());
				stk->pop();

			case '(':
				stk->push(x);
				break;

			default:
				printf("op push error1");
				return;
			}
		else
			stk->push(x);
		break;
	case '*' :
	case '/' :
		if(!stk->empty())
			switch (stk->top())
			{
			case '*':
			case '/':
				vctr->push_back(stk->top());
				stk->pop();
			case '+':
			case '-':
			case '(':
				stk->push(x);
				break;
			default :
				printf("op push error 2");
				return;
			}
		break;
	case '(' :
		stk->push(x);
		break;
	case ')' :
		while (!stk->empty())
		{
			vctr->push_back(stk->top());
			stk->pop();
		}
		break;


	default :
		printf("input error\n");
		return ;
	}
}

int main()
{
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	stack<char> op_stk;
	int length;
	string str;
	vector<char> postfix;

	cin >> length;

	cin >> str;

	for (int i = 0; i < length; i++)
		f(&op_stk, &postfix, str[i]);

	while (!op_stk.empty())
	{
		postfix.push_back(op_stk.top());
		op_stk.pop();
	}

	for (int i = 0; i < postfix.size(); i++)
		cout << postfix[i];
}