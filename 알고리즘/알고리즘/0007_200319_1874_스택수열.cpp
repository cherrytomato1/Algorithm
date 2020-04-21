/*����(stack)�� �⺻���� �ڷᱸ�� �� �ϳ���, ��ǻ�� ���α׷��� �ۼ��� �� ���� �̿�Ǵ� �����̴�.������ �ڷḦ �ִ�(push) 
�Ա��� �ڷḦ �̴�(pop) �Ա��� ���� ���� ���߿� �� �ڷᰡ ���� ���� ������(LIFO, Last in First out) Ư���� ������ �ִ�.

1���� n������ ���� ���ÿ� �־��ٰ� �̾� �þ�������ν�, �ϳ��� ������ ���� �� �ִ�.�̶�, ���ÿ� push�ϴ� ������ �ݵ�� 
���������� ��Ű���� �Ѵٰ� ����.������ ������ �־����� �� ������ �̿��� �� ������ ���� �� �ִ��� ������, �ִٸ� � ������ 
push�� pop ������ �����ؾ� �ϴ����� �˾Ƴ� �� �ִ�.�̸� ����ϴ� ���α׷��� �ۼ��϶�.

�Է�
ù �ٿ� n(1 �� n �� 100, 000)�� �־�����.��° �ٺ��� n���� �ٿ��� ������ �̷�� 1�̻� n������ ������ �ϳ��� ������� �־�����.���� ���� ������ �� �� ������ ���� ����.

���
�Էµ� ������ ����� ���� �ʿ��� ������ �� �ٿ� �� ���� ����Ѵ�.push������ + ��, pop ������ - �� ǥ���ϵ��� �Ѵ�.�Ұ����� ��� NO�� ����Ѵ�.

2 �� 1874 ���ü���
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	stack<int> stk;
	stack<char> oprt;
	stack<char> res;

	int num[100000];
	int N,pnum=0;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
		cin.ignore();
	}

	for (int i = 0; i < N; i++)			//�����迭�� �� ä�ﶧ ����
	{
		while(stk.empty()||stk.top() < num[i])				//���� �۾����� ������ ����� �� top ȣ���ϸ� ��Ÿ�� ����==>> ���� empty ���� �˻�
		{
			stk.push(++pnum);
			oprt.push('+');
		}
		if (stk.top() == num[i])
		{
			stk.pop();
			oprt.push('-');
		}
		else if (stk.top() > num[i])	
		{
			cout << "NO";
			return 0;									//return -1 ����
		}
	}

	while (!oprt.empty())
	{
		res.push(oprt.top());
		oprt.pop();
	}

	while (!res.empty())
	{
		cout << res. top() << "\n";
		res.pop();
	}
}