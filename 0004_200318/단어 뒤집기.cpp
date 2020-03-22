/*정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 다섯 가지이다.

push X : 정수 X를 스택에 넣는 연산이다.
pop : 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
size : 스택에 들어있는 정수의 개수를 출력한다.
empty : 스택이 비어있으면 1, 아니면 0을 출력한다.
top : 스택의 가장 위에 있는 정수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다

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