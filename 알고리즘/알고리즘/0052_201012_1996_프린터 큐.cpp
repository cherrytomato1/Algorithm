/*

	1996	프린터 큐

	선입선출하는 프린터가 있음

	출력시 중요도를 확인하여 큐에 있는 다른 값 중에 중요도가 더 높은 값이 있다면 맨 뒤로 보냄

	입력

	T 테스트 케이스
	M 문서 개수 N 출력 순서를 알고 싶은 문서의 현재 인덱스(0~)
	~			각각의 문서들의 중요도


	1. 각각의 문서의 현재 위치와 중요도를 배열에 저장한다
	2. 매 반복마다 모든 문서의 현재위치를 -1 하고 0이된(출력할 순서가 된) 문서에 한해 다른 문서와 중요도를 비교한다
	3. 중요도가 모든 다른 문서보다 낮지 않다면 출력하고 출력한 횟수를 ++한다
	4. 문서 M이 출력될때까지 위 과정을 반복하고 출력된 횟수를 출력한다.

*/
#include<iostream>
#include<algorithm>

#define Nmax 100
#define IPTCmax 9

using namespace std;

int arr[Nmax][2] = { 0, };				//[0]== 현재 자료의 위치, [1] 각각 자료의 중요도
int T, N, M = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int temp,size,cnt;
	int arrT, arrT2, arrT3;

	cin >> T;
	
	while (T--)
	{
		fill(&arr[0][0], &arr[Nmax-1][1], 0);
		cin >> N;
		cin >> M;
		size = N;
		cnt = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			arr[i][0] = i;
			arr[i][1] = temp;
		}

		while (arr[M][0] != -1)
		{
			for (int i = 0; i < N; i++)
			{
				if (arr[i][0] == 0)
				{
					for (int j = 0; j < N; j++)
					{
						arrT = arr[j][1];
						arrT2 = arr[i][1];
						arrT3 = arr[j][0];

						if ((arr[j][1] > arr[i][1]) && (arr[j][0]!=-1))
						{
							arr[i][0] += size;
							break;
						}
						if (j == N-1)
						{
							size--;
							cnt++;
						}
					}
				}
				if (arr[i][0] != -1)
					arr[i][0]--;
			}
			//cout << arr[M][0] << " ";
			
		}
		cout << cnt << "\n";
	}

}