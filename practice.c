#include <stdio.h>
void ic(void);
void br(void);
//一：设置原型函数，butler
int main(void)
{
	printf("Brazil,Russia,India,China.\n");
	ic();
	br();
//函数调用
	return 0;
}
//下面是函数定义
void ic(void)
{
	printf("India,China.\n");
}
void br(void)
{
	printf("Brazil,Russia.\n");
}