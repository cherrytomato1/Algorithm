/*

	�̵��� ������ �ֻ����� �� �鿡 ���� �ִ� ���� ����Ѵ�. 

	�ֻ����� ���� ���� �ֻ������� �� ������ ����Ű�� ���� �������� ��ġ

	x==���� , y == ����


*/

#include<iostream>
#include<vector>

#define MAX 20
#define kMAX 1000
#define CRNT 1
#define UP 2
#define RIGHT 3
#define LEFT 4
#define DOWN 5
#define BACK 6

#define EAST 1
#define WEST 2
#define NORTH 3
#define SOUTH 4

using namespace std;


int map[MAX][MAX];
int dice[6]= {0,};								// Dice�� Value
int direction[7]= {-1, 0, 1, 2, 3, 4, 5};		// �� ������ ���� �ִ� �ε����� ����Ŵ 
int N, M, x, y, K, order;						

void rollDice(int ord)
{
	switch(ord)
	{
		case EAST :
			if(y==0) 
				return ;
			y--;
			
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	cin >> N;
	cin >> M;
	cin >> x;
	cin >> y;
	cin >> K;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> map[i][j];

	

	while (K--)
	{
		cin >> order;
		rollDice(order);
	}

}


