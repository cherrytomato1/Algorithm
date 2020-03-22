/*������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� �ټ� �����̴�.

push X : ���� X�� ���ÿ� �ִ� �����̴�.
pop : ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
size : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top : ������ ���� ���� �ִ� ������ ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�

*/

#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	int arr[10000];
	int top = -1;
	string req;
	int N;
	int arg;

	for (int i = 0; i < 10000; i++)
		arr[i] = NULL;

	cin >> N;
	while (N--)
	{
		cin >> req;

		if (req == "push")
		{
			cin >> arg;
			arr[++top] = arg;
			
			//cout << "push " << arg << ", top " << top << endl;
		}
		else if (req == "pop")
		{
			if (arr[top] == NULL || top < 0)
				cout << "-1" << endl;
			else
			{
				cout << arr[top] << endl;
				arr[top--] = NULL;

			}
		}

		else if (req == "top")
		{
			if (top >= 0)
				cout << arr[top] << endl;
			else
				cout << -1 << endl;
		}

		else if (req == "empty")
		{
			if (top < 0)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}

		else if (req == "size")
		{
			cout << top + 1 << endl;
		}

		cin.ignore();

	}
	return 0;
}