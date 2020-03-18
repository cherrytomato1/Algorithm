/*
�� �ٷ� �� ������ �����͸� �����Ϸ��� �Ѵ�. �� ������� ���� �ҹ��ڸ��� ����� �� �ִ� �������, �ִ� 600,000���ڱ��� �Է��� �� �ִ�.

�� �����⿡�� 'Ŀ��'��� ���� �ִµ�, Ŀ���� ������ �� ��(ù ��° ������ ����), ������ �� ��(������ ������ ������), �Ǵ� ���� �߰� ������ ��(��� ���ӵ� �� ���� ����)�� ��ġ�� �� �ִ�. �� ���̰� L�� ���ڿ��� ���� �����⿡ �ԷµǾ� ������, Ŀ���� ��ġ�� �� �ִ� ���� L+1���� ��찡 �ִ�.

�� �����Ⱑ �����ϴ� ��ɾ�� ������ ����.

L	Ŀ���� �������� �� ĭ �ű� (Ŀ���� ������ �� ���̸� ���õ�)
D	Ŀ���� ���������� �� ĭ �ű� (Ŀ���� ������ �� ���̸� ���õ�)
B	Ŀ�� ���ʿ� �ִ� ���ڸ� ������ (Ŀ���� ������ �� ���̸� ���õ�)
������ ���� Ŀ���� �� ĭ �������� �̵��� ��ó�� ��Ÿ������, ������ Ŀ���� �����ʿ� �ִ� ���ڴ� �״����
P $	$��� ���ڸ� Ŀ�� ���ʿ� �߰���
�ʱ⿡ �����⿡ �ԷµǾ� �ִ� ���ڿ��� �־�����, �� ���� �Է��� ��ɾ ���ʷ� �־����� ��, ��� ��ɾ �����ϰ� �� �� �����⿡ �ԷµǾ� �ִ� ���ڿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, ��ɾ ����Ǳ� ���� Ŀ���� ������ �� �ڿ� ��ġ�ϰ� �ִٰ� �Ѵ�.

�Է�
ù° �ٿ��� �ʱ⿡ �����⿡ �ԷµǾ� �ִ� ���ڿ��� �־�����. �� ���ڿ��� ���̰� N�̰�, ���� �ҹ��ڷθ� �̷���� ������, ���̴� 100,000�� ���� �ʴ´�. ��° �ٿ��� �Է��� ��ɾ��� ������ ��Ÿ���� ���� M(1 �� M �� 500,000)�� �־�����. ��° �ٺ��� M���� �ٿ� ���� �Է��� ��ɾ ������� �־�����. ��ɾ�� ���� �� ���� �� �ϳ��� ���·θ� �־�����.

���
ù° �ٿ� ��� ��ɾ �����ϰ� �� �� �����⿡ �ԷµǾ� �ִ� ���ڿ��� ����Ѵ�.

1406*/

/*
#include <iostream>
#include <string>
#include <stack>


using namespace std;

string str,fstr,bstr;

void P( int pos,char param)
{
	fstr= str.substr(0,pos);
	bstr = str.substr(pos, str.length() - pos);

	fstr.push_back(param);
	str = fstr + bstr;
}
void B(int pos)
{
	fstr = str.substr(0, pos);
	bstr = str.substr(pos, str.length() - pos);

	fstr.pop_back();
	str = fstr + bstr;

}



int main()
{

	int pos;
	char cmd, param;
	stack<char> pstk,bstk;
	int T;

	getline(cin, str);
	cin >> T;
	cin.ignore();

	pos = str.length();
	while (T--)
	{
		cin >> cmd;

		switch (cmd)
		{
			case 'P' :
				cin >> param;
				//P(pos++, param);
				
				break;
			case 'L' :
				if(pos)
					pos--;
				break;
			case 'D' :
				if (pos < str.length())
					pos++;
				break;
			case 'B' :
				if (pos)
					B(pos--);
				break;

		}
		cin.ignore();

	}
	cout << str << "\n";
	
}
*/

#include <iostream>
#include <string>
#include <stack>


using namespace std;

int main() {
	stack<char> fstk, bstk;
	int pos,T;
	string str,res,temp;
	char cmd,param;
	
	getline(cin, str);
	pos = str.length();

	for (int i = 0; i < pos; i++)
		fstk.push(str[i]);

	cin >> T;
	cin.ignore();
	

	while (T--)
	{
		cin >> cmd;
		switch (cmd) {
			case 'L' :
				if (!fstk.empty())
				{
					bstk.push(fstk.top());
					fstk.pop();
				}
				break;
			case 'R' :
				if (!bstk.empty())
				{
					fstk.push(fstk.top());
					bstk.pop();
				}
				break;
			case 'P' : 
				cin >> param;
				fstk.push(param);
				break;
			case 'B' :
				fstk.pop();
				break;
		}
		cin.ignore();
	}

	while (!fstk.empty())
	{
		temp = fstk.top();
		res = temp + res;
		fstk.pop();
	}
	while (!bstk.empty())
	{
		temp = bstk.top();
		res = res + temp;
		bstk.pop();
	}
	cout << res << "\n";
}