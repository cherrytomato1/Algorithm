/*

	�κ� û�ұ�

	1.���� ��ġ�� û���Ѵ�.
	2.���� ��ġ���� ���� ������ �������� ���ʹ������ ���ʴ�� Ž���� �����Ѵ�.
		2-1. ���� ���⿡ ���� û������ ���� ������ �����Ѵٸ�, �� �������� ȸ���� ���� �� ĭ�� �����ϰ� 1������ �����Ѵ�.
		2-2. ���� ���⿡ û���� ������ ���ٸ�, �� �������� ȸ���ϰ� 2������ ���ư���.
		2-3. �� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���� ��쿡��, �ٶ󺸴� ������ ������ ä�� �� ĭ ������ �ϰ� 2������ ���ư���.
		2-4. �� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���̸鼭, ���� ������ ���̶� ������ �� �� ���� ��쿡�� �۵��� �����.
*/
#include<iostream>
#include<vector>

#define MAX 50

#define Nth 0
#define Est 1
#define Sth 2
#define Wst 3

using namespace std;

typedef struct _pixel{
	int type;
	int clean;
}pixel;

class robot {
	private :
		int map[MAX][MAX] = { 0, };
		int n, m, count, x, y, d;

	robot(int n, int m, int r, int c, int d)
	{
		this->n = n;
		this->m = m;
		this->count = 0;
		this->x = r;
		this->y = c;
		this->d = d;
	}
	void set_map()
	{
		int temp;
		for(int i = 0; i<n; i++)
			for (int j = 0; j < m; j++)
			{
				cin >> temp;
				this->map[j][i] = temp;
			}
	}
	
	void print_map()
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cout << this->map[j][i];
	}

};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, r, c, d;

	cin >> n;
	cin >> m;

	cin >> r;
	cin >> c;
	cin >> d;

	robot rbt(n, m, r, c, d);

}