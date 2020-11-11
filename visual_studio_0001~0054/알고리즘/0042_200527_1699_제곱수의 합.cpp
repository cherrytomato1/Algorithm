/*
	�������� �ϤӤ�
	1. �������� ������ ��Ÿ������ �� ���� ū �������� �������ٰ� ���� ���� Ƚ����ŭ ���ϴ°� �ƴ� �� �ִ�
	 ex) 12 = 3^2 +1^2+1^2+^2 = 4^2 + 4^2 + 4^2
	2. ���� �ش� ���� �̷� �� �ִ� ���������� ���ϰ� �� �������� �����ϰԵ� �� ���� ���� ��� ���� ���� ���� ã�´�
	 2.1 d[n] = min( d[n-1^2], d[n-2^2] ,d[n-3^2] .... d[n-i^2](�� n>= i^2))
	 2.2 ex) 12 = min(12-1, 12-4, 12-9) +1
	3. �ش� ������ ���� ���������� 1���� �ݺ��Ͽ� ���� ���� �������� ���� �������� ã�� �����Ѵ�.�̹� ����Ǿ� ������ �� ���� �ҷ�����
	4. �߰����� d[12] = 3 = d[12-4]+1 = d[8]+1
				d[8] = 2 = d[8-4] +1 = d[4] +1
				d[4] = 1 = d[4-4] +1 =d[0] +1
				d[0] = 0
*/


#include<iostream>
#include<algorithm>
#include<cmath>

#define MAX 1000000

using namespace std;


int d[100000] ;

int f(int n)
{
	int temp=1234123;

	if (n <= 3)
		return n;
	if (d[n] != 0)
		return d[n];

	for (int i = 1; i <= sqrt(n); i++)
		temp = min(temp, f(n-(i*i)));
	
	return d[n]=temp+1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, i,cnt=0;

	cin >> N;

	cout << f(N);
}