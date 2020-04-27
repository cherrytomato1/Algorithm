/*

2xn ũ���� ���簢���� 1x2, 2x1 Ÿ�Ϸ� ä��� ���

n�� ũ�Ⱑ �ϳ��� ������ ������ �þ�� ä��� ����� ����

�������� ��� ����� ������ �� Ÿ���� �߰���Ű�ų� = Ÿ���� �߰���Ű�� ���

�ΰ��� Ÿ���� ���� ���ؼ� ���� n-1 , n-2 �� ���簢���� �ʿ��ϸ� n-1, n-2�� �̷�µ� �ʿ��� ����� ���� �����ָ� ���� �� �ִ�.

*/



#include<iostream>
#include<vector>

using namespace std;

int box[1000 + 1] = { 0 };

int makeBox(int num)
{
	if (num == 1)	return 1;										// ���� ���̰� 1�� ��� 1����
	if (num == 2)	return 2;										// ���� ���̰� 2�� ��� 2����
	if (box[num] != 0) return box[num];								// �̹� �ش���ڱ��̿� �ش��ϴ� ����� ���� ������ ��� �ٷ� ������!!!!!

	return box[num]=(makeBox(num-1)+makeBox(num-2))%10007;			// ���� ���̰� �������� ���� ��� n-1 �� n-2�� ����� ���� ���ؼ� �迭�� �ְ� ���Ͻ�Ŵ
}

int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	cout << makeBox(N);
}