#include <stdio.h>
void ic(void);
void br(void);
//һ������ԭ�ͺ�����butler
int main(void)
{
	printf("Brazil,Russia,India,China.\n");
	ic();
	br();
//��������
	return 0;
}
//�����Ǻ�������
void ic(void)
{
	printf("India,China.\n");
}
void br(void)
{
	printf("Brazil,Russia.\n");
}