
/*������ �־����� ��, �ܾ ��� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.��, �ܾ��� ������ �ٲ� �� ����.�ܾ�� ���� ���ĺ����θ� �̷���� �ִ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, ������ �ϳ� �־�����.�ܾ��� ���̴� �ִ� 20, ������ ���̴� �ִ� 1000�̴�.�ܾ�� �ܾ� ���̿��� ������ �ϳ� �ִ�.

���
�� �׽�Ʈ ���̽��� ���ؼ�, �Է����� �־��� ������ �ܾ ��� ������ ����Ѵ�.

���� �Է� 1
2
I am happy today
We want to win the first prize
���� ��� 1
I ma yppah yadot
eW tnaw ot niw eht tsrif ezirp

*/


#include <iostream>
#include <string>
#include <stack>


using namespace std;

int main()
{
	int T;
	stack<char> stk;		//char�� ���ü���
	string str;				//�Է� ���ڿ�
	int c;					//ĳ���� �ڸ� 1
	int npos;				//ĳ���� �ε���

	cin >> T;				//�׽�Ʈ ���̽� ��

	cin.ignore();

	while (T--)
	{
		getline(cin, str);

		for (npos = 0; npos<str.length(); npos++)
		{
			c = str.at(npos);

			if (c == ' ')
			{
				for (;!stk.empty(); stk.pop())
					cout << stk.top();	
				cout << ' ';
			}
			else
				stk.push(c);
			if (npos + 1 == str.length())
			{
				for (; !stk.empty(); stk.pop())
					cout << stk.top();
				cout << endl;
			}
		}
		
	}
}

