/*


	�κ�û�ұ�

	1. ���� ��ġ�� û���Ѵ�.
	2. ���� ��ġ���� ���� ������ �������� ���ʹ������ ���ʴ�� Ž���� �����Ѵ�.
		2-1. ���� ���⿡ ���� û������ ���� ������ �����Ѵٸ�, �� �������� ȸ���� ���� �� ĭ�� �����ϰ� 1������ �����Ѵ�.
		2-2. ���� ���⿡ û���� ������ ���ٸ�, �� �������� ȸ���ϰ� 2������ ���ư���.
		2-3. �� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���� ��쿡��, �ٶ󺸴� ������ ������ ä�� �� ĭ ������ �ϰ� 2������ ���ư���.
		2-4. �� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���̸鼭, ���� ������ ���̶� ������ �� �� ���� ��쿡�� �۵��� �����.

		ù° �ٿ� ���� ũ�� N�� ���� ũ�� M�� �־�����. (3 �� N, M �� 50)
*/

#include<iostream>
#include<algorithm>

#define MAX 50

#define Nth 0
#define Est 1
#define Sth 2
#define Wst 3

typedef struct _robot {
	int d;
	int x, y;
}robot;

using namespace std;

int map[MAX][MAX];
int cnt = 0;
robot rbt;

void setMap(int n, int m)
{
	int temp;
	for(int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> temp;
			map[j][i]= temp;
		}
}

void move()
{

}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, r, c, d; // n = y, m = x

	cin >> n;
	cin >> m;
	cin >> r;
	cin >> c;
	cin >> d;

	setMap(n, m);
	rbt.x = r;
	rbt.y = c;
	rbt.d = d;

}