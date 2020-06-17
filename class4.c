#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	循环三要素：
	1、循环变量的初值
	2、循环变量的判断
	3、循环变量的更新	*/

	/*
	int i = 0;
	while (i < 10)	//while：if的加强版
	{
		printf("第%d遍\n",i);
		i++;//i = i + 1;//可以通过控制i的值来控制循环次数
	}
	return 0;	*/



	/*
	//计算1-100的累加和
	//思路：
	//需要一个变量，用来存放每次循环的数字
	int sum = 0;
	//1、循环变量的初值？
	int i = 1;
	//2、循环变量的判断
	while (i <= 100)
	{
		//每次循环累加本次循环的数字
		sum = sum + i;
		//3、循环变量的更新
		i = i + 1;
	}
	printf("sum = %d\n", sum);
	return 0;
	//最终的结论：
	//我们学会了累加
	//1、需要一个变量保存累加和
	//2、循环累加	*/


	//使用循环实现三次密码输入错误退出系统
	int i = 1;
	int password;
	printf("请输入密码：");
	scanf_s("%d", &password);
	while (i <= 3)
	{
		printf("密码输入错误，当前输入第%d次密码。\n", i);
		i++;
	}
	return 0;
}