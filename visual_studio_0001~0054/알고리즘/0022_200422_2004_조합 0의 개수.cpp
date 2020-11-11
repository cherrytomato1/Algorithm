/*���� 0�� ���� 

1. ������ nCr  =  n(n-1)(n-2)(n-3).... (n-(r-1) / r(r-1)(r-2).... 3*2*1
1-2 .  nCr = n! / (n-m)!*m!
2. ���ڸ� 0�� ������ ����� 5*2�� ������ Ƚ�� 
3. ���� ��� ���� 2 �� 5�� ���� ���� �� 2�� 5�� �� ���� ������ ���� 0�� ����




*/


#include<iostream>
#include<string>
#include<vector>


using namespace std;

pair<long long, long long> calc(long long n)			//n!�� 2�� ������ 5�� ������ ���ϴ� �Լ�
{
	pair <long long, long long > res;
	long long Five= 0 , Two= 0 ;

	for (long long i = 5; i <= n; i *= 5)				// 5�� ���� 
		Five += n / i;						

	for (long long i = 2; i <=n; i *= 2)		// 2�� ���� 
		Two += n / i;

	res.first = Two;						
	res.second = Five;
	return res;									//2�� ���� �� 5�� ���� ����
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	pair <long long, long long> pair1, pair2, pair3;

	long long  n, m;

	int two, five;
	
	cin >> n; 
	cin >> m;

	pair1 = calc(n);				//n! �� 2 , 5 ����
	pair2 = calc(n - m);			//n!-m!
	pair3 = calc(m);				//m!

	two = pair1.first - pair2.first - pair3.first;						//���� 2�� ���� �� 5�� ���� ��
	five = pair1.second - pair2.second - pair3.second;			

	cout << (two > five ? five : two);						//�� ���� ���� 0�� ����


}