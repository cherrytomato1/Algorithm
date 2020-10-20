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
int cnt = 0,turnCnt=0;
robot rbt;
int n, m; // n = y, m = x

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

void turnLeft()
{
	if (rbt.d == 0)
		rbt.d = 4;
	rbt.d--;
	turnCnt++;
}

int chkFwrd(int tempX,int tempY,int dir)
{
	switch (dir)
	{
	case 0:
		tempY--;
		break;
	case 1:
		tempX++;
		break;
	case 2 :
		tempY++;
		break;
	case 3 :
		tempX--;
		break;
	}
	return map[tempX][tempY];
}

void mvFwrd()
{
	switch (rbt.d)
	{
	case 0:
		rbt.y--;
		break;
	case 1:
		rbt.x++;
		break;
	case 2:
		rbt.y++;
		break;
	case 3:
		rbt.x--;
		break;
	}
}

void move()
{
	if (map[rbt.x][rbt.y] == 0)
	{
		map[rbt.x][rbt.y] = 2;
		cnt++;

		return;
	}
	turnLeft();
	while (chkFwrd(rbt.x, rbt.y, rbt.d) != 0)
	{
		if (turnCnt == 4)
		{
			if (chkFwrd(rbt.x, rbt.y, (rbt.d + 2) % 4) == 1)
			{
				cout << cnt;
				exit(0);

			}
			else
			{
				rbt.d = (rbt.d + 2) % 4;
				mvFwrd();
				rbt.d = (rbt.d + 2) % 4;
				turnCnt = 0;
				return;
			}
		}
		turnLeft();
	}
	mvFwrd();
	turnCnt = 0;
	

}


int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	cin >> m;
	cin >> rbt.y;
	cin >> rbt.x;
	cin >> rbt.d;

	setMap(n, m);
	while (1)
		move();
	
	return 0;

}