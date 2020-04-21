/*
������ �����ϴ� ť�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� ���� �����̴�.

push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
�Է�
ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.

���
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.


10845 ť 0.5��
*/

#include <iostream>
#include <string>

using namespace std;


struct listNode {
	listNode* nNode;
	int var;
};
struct listHead {
	int index;
	listNode* hNode;
};

listHead* createHead()
{
	listHead * L;
	L = (listHead*)malloc(sizeof(listHead));
	L->hNode = NULL;

	return L;
}

listNode* addNode(listHead* L,listNode* preNode)
{
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));

	if (L->hNode == NULL)
		L->hNode = newNode;
	else
		preNode->nNode = newNode;
	newNode->nNode = NULL;

	return newNode;
}

void delHeadNode(listHead* L, listNode* node)
{
	L->hNode = node->nNode;

	free(node);
}

void push(listHead* L,int param)
{
	listNode* temp;

	if (L->hNode != NULL)
	{
		for (temp = L->hNode; temp->nNode != NULL; temp = temp->nNode);
		temp = addNode(L, temp);
	}
	else
		temp = addNode(L, NULL);

	temp->var = param;
}

void pop(listHead* L)
{
	listNode* temp;

	if (L->hNode == NULL)
	{
		cout << "-1"<<"\n";
		return ;
	}
	temp = L->hNode;
	L->hNode = temp->nNode;
	cout << temp->var << "\n";
	free(temp);
}

void lSize(listHead* L)
{
	listNode* temp;
	int size=1;

	if (L->hNode == NULL)
		cout << "0" << "\n";
	else
	{
		for (temp = L->hNode; temp->nNode != NULL; temp = temp->nNode)
			size++;
		cout << size << "\n";
	}
}

void empty(listHead* L) {
	if (L->hNode == NULL)
		cout << "1" << "\n";
	else
		cout << "0" << "\n";
}

void back(listHead* L)
{
	listNode* temp;

	if (L->hNode == NULL)
		cout << "-1" << "\n";
	else
	{
		for (temp = L->hNode; temp->nNode != NULL; temp = temp->nNode);
		cout << temp->var << "\n";
	}
}

void front(listHead* L)
{
	if (L->hNode == NULL)
		cout << "-1" << "\n";
	else
		cout << L->hNode->var << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	int T,param;
	string cmd;
	listHead* L;

	cin >> T;
	cin.ignore();

	L = createHead();

	while (T--)
	{
		cin >> cmd;
		
		if (cmd == "push")
		{
			cin >> param;
			push(L, param);
		}
		else if (cmd == "pop")
			pop(L);
		else if (cmd == "size")
			lSize(L);
		else if (cmd == "empty")
			empty(L);
		else if (cmd == "front")
			front(L);
		else if (cmd == "back")
			back(L);
		
	}
}