/*���ڿ� N���� �־�����. �̶�, ���ڿ��� ���ԵǾ� �ִ� �ҹ���, �빮��, ����, ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�� ���ڿ��� ���ĺ� �ҹ���, �빮��, ����, �������θ� �̷���� �ִ�.

�Է�
ù° �ٺ��� N��° �ٱ��� ���ڿ��� �־�����. (1 �� N �� 100) ���ڿ��� ���̴� 100�� ���� �ʴ´�.

���
ù° �ٺ��� N��° �ٱ��� ������ ���ڿ��� ���ؼ� �ҹ���, �빮��, ����, ������ ������ �������� ������ ����Ѵ�.




10820 ���ڿ� �м�*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int N, big, small, blank, num;

	N = 100;

	while (N--)
	{
		big = 0;
		small = 0;
		blank = 0;
		num = 0;
		
		getline(cin, str);
		if (str.length() == 0)
			break;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 32)
				blank++;
			else if (str[i] >= 48 && str[i] <= 57)
				num++;
			else if (str[i] >= 65 && str[i] <= 90)
				big++;
			else if (str[i] >= 97 && str[i] <= 122)
				small++;
		}
		cout << small << " ";
		cout << big << " ";
		cout << num << " ";
		cout << blank << "\n";
	}
}

