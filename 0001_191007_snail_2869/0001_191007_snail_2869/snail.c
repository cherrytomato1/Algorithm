/*
���� 2869 . �����̴� �ö󰡰� �ʹ�

�� ���� �����̰� �ִ�. �� �����̴� ���̰� V������ ���� ���븦 �ö� ���̴�.

�����̴� ���� A���� �ö� �� �ִ�. ������, �㿡 ���� �ڴ� ���� B���� �̲�������. ��, ���� �ö� �Ŀ��� �̲������� �ʴ´�.

�����̰� ���� ���븦 ��� �ö󰡷���, ��ĥ�� �ɸ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include<stdio.h>


/* ���� 1 . for ���� ���� ū �Է� �� ��� ���� �ð� �Y��
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
	unsigned int a, b, v, pv = 0, day = 1;
	float tmp_day = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &v);
	
	tmp_day = (float)(v-b) / (a - b);
	
		
	
	//day = (v / a) - (v / b + 1);

	printf("%f",tmp_day);
	return 0;
}