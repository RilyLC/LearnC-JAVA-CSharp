#include<stdio.h>

int main()
{
	printf("请分别输入您身高的英尺和英寸,如输入\"5 7\"表示5英尺7英寸:\n");
	//int foot, inch;
	////两个整数变量的运算结果只能是整数,如果运算过程中出现小数会导致结果错误,因为运算器会自动忽略小数部分
	////在C语言中10是整数而10.0是浮点数,他们是两个完全不同的数
	//scanf_s("%d %d", &foot, &inch);
	//printf("您的身高是%f米",(foot+inch/12.0)*0.3048 );//%f表示输出浮点数
	////当浮点数和整数放在一起运算时,C语言会自动将整数转换为浮点数,然后进行浮点数的运算
	////因此我们的运算结果是浮点数,前面不能用%d必须要用%f
	
	//第二种方式
	double foot, inch;//double是双精度浮点数变量,int是整数变量
	scanf_s("%lf %lf", &foot, &inch);//对于double变量来说,输入时必须使用%lf格式
	printf("您的身高是%f米", ((foot + inch / 12) * 0.3048));
	//由于此处foot和inch都是浮点数了,所以我们就不需要将12也改为浮点数了
	return 0;
}