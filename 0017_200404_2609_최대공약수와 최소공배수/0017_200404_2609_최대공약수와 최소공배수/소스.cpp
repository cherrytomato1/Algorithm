/*
����
�� ���� �ڿ����� �Է¹޾� �ִ� ������� �ּ� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ��� �� ���� �ڿ����� �־�����. �� ���� 10,000������ �ڿ����̸� ���̿� �� ĭ�� ������ �־�����.

���
ù° �ٿ��� �Է����� �־��� �� ���� �ִ�������, ��° �ٿ��� �Է����� �־��� �� ���� �ּ� ������� ����Ѵ�.


��Ŭ���� ȣ����


*/

#include<iostream>
#include<algorithm>

using namespace std;

int f(int a, int b)
{
	if (b == 0)
		return a;

	else 
		return f(b, a % b);
		
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	int a, b;

	cin >> a;
	cin >> b;
	cin.ignore();
	if (b > a)
		swap(a, b);

	cout << f(a, b)<< "\n";
	cout << (a * b) / f(a, b);

}