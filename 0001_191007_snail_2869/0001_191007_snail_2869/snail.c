/*
���� 2869 . �����̴� �ö󰡰� �ʹ�

�� ���� �����̰� �ִ�. �� �����̴� ���̰� V������ ���� ���븦 �ö� ���̴�.

�����̴� ���� A���� �ö� �� �ִ�. ������, �㿡 ���� �ڴ� ���� B���� �̲�������. ��, ���� �ö� �Ŀ��� �̲������� �ʴ´�.

�����̰� ���� ���븦 ��� �ö󰡷���, ��ĥ�� �ɸ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���ѽð� 0.15��

�Է� ���� 0~10��
*/

#include<stdio.h>

/* ���� 1 . for ���� ���� ū �Է� �� ��� ���� �ð� �ʰ�
int main()
{
	unsigned int a, b, v,pv=0, day=1;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &v);

	for (; pv < v; day++,pv -= b)
		if ((pv+=a) >= v)
			break;

	printf("%d", day);
	return 0;
}*/

			
int main()
{
	int a, b, v, day;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &v);
	
	if (v <= a)
	{
		printf("1");
		return 0;
	}
	day= (v - a - 1) / (a - b) +2;
	

	printf("%d",day);
	return 0;
}

/*
int main()
{
	int a, b, v, day=0;
}
*/