/*

	�̵��� ������ �ֻ����� �� �鿡 ���� �ִ� ���� ����Ѵ�. 

	�ֻ��� ���� ������ �������� �ش��ϴ� �ֻ��� ���� �ٲپ� �ش�.

	x==���� , y == ����

		2
	4	1	3
		5
		6

*/

#include <iostream>
#include <vector>

#define MAX 20
#define kMAX 1000

#define EAST 1
#define WEST 2
#define NORTH 3
#define SOUTH 4

using namespace std;

int map[MAX][MAX];
int dice[7] = {
	0,
};										   // Dice�� Value

int N, M, x, y, K, order;

void rollDice(int ord)						//�ֻ��� ������
{
	int temp = 0;
	switch (ord)
	{
	case WEST:
		if (y == 0)							//�� �ۿ� ���� �Ϳ� ���� ����
			return;
		y--;

		temp = dice[1];
		dice[1] = dice[4];
		dice[4] = dice[6];
		dice[6] = dice[3];
		dice[3] = temp;						//�ֻ��� �� ����
		break;
	case EAST :
		if (y == M-1)
			return ;
		y++;

		temp = dice[1];
		dice[1] = dice[3];
		dice[3] = dice [6];
		dice[6] = dice[4];
		dice[4] = temp;
		break;
	case NORTH :
		if (x == 0)
			return ;
		x--;

		temp = dice[1];
		dice[1] = dice[2];
		dice[2] = dice[6];
		dice[6] = dice[5];
		dice[5] = temp;
		break;
	case SOUTH:
		if (x == N-1)
			return;
		x++;

		temp = dice[1];
		dice[1] = dice[5];
		dice[5] = dice[6];
		dice[6] = dice[2];
		dice[2] = temp;
		break;

	}
	if(map[x][y] == 0)						// 0�̸� �ֻ��� ����, �ƴϸ� �Ѱ��ְ� 0 
		map[x][y] = dice[1];
	else
	{
		dice[1] = map[x][y];
		map[x][y] = 0;
	}
//	cout << K << " ";
	cout << dice[6] << "\n";
	
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
