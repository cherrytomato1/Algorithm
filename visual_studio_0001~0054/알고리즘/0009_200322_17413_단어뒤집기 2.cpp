/*
���ڿ� S�� �־����� ��, �� ���ڿ����� �ܾ ���������� �Ѵ�.

����, ���ڿ� S�� �Ʒ��Ͱ� ���� ��Ģ�� ��Ų��.

���ĺ� �ҹ���('a' - 'z'), ����('0' - '9'), ����(' '), Ư�� ����('<', '>')�θ� �̷���� �ִ�.
���ڿ��� ���۰� ���� ������ �ƴϴ�.
'<'�� '>'�� ���ڿ��� �ִ� ��� �����ư��鼭 �����ϸ�, '<'�� ���� �����Ѵ�.��, �� ������ ������ ����.
�±״� '<'�� �����ؼ� '>'�� ������ ���̰� 3 �̻��� �κ� ���ڿ��̰�, '<'�� '>' ���̿��� ���ĺ� �ҹ��ڿ� ���鸸 �ִ�.�ܾ�� ���ĺ� �ҹ��ڿ� ���ڷ� �̷���� �κ� ���ڿ��̰�, �����ϴ� �� �ܾ�� ���� �ϳ��� �����Ѵ�.�±״� �ܾ �ƴϸ�, �±׿� �ܾ� ���̿��� ������ ����.

�Է�
ù° �ٿ� ���ڿ� S�� �־�����.S�� ���̴� 100, 000 �����̴�.

���
ù° �ٿ� ���ڿ� S�� �ܾ ����� ����Ѵ�.

17413 �ܾ� ������
*/

#include<iostream>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;
	queue<char> tagQ;
	stack<char> charStk;
	int tag = 0;

	getline(cin, S);

	for (int i = 0; i < S.length(); i++)
	{
		switch (S[i]) {
		case ' ':
			if (tag == 0)
			{
				for (; !charStk.empty(); charStk.pop())
					cout << charStk.top();
				cout << S[i];
			}
			else
				tagQ.push(' ');
			break;

		case '<' :
			for (; !charStk.empty(); charStk.pop())
				cout << charStk.top();
			tagQ.push(S[i]);
			tag = !tag;
			break;

		case '>' :
			tagQ.push(S[i]);
			for (; !tagQ.empty(); tagQ.pop())
				cout << tagQ.front();
			tag = !tag;
			break;

		default :
			if (tag)
				tagQ.push(S[i]);
			else
				charStk.push(S[i]);

		}
	}
	for (; !charStk.empty(); charStk.pop())
		cout << charStk.top();

}