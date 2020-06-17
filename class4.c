#include<stdio.h>
#include<stdlib.h>	//标准库
#include<time.h>	//time( )
#include<Windows.h>	//Sleep

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
	return 0;	*/





	//最终的结论：
	//我们学会了累加
	//1、需要一个变量保存累加和
	//2、循环累加	*/
	//使用循环实现三次密码输入错误退出系统


	/*
	int i = 1;
	int password;
	while (i <= 3)
	{
		printf("请输入密码：");
		scanf_s("%d", &password);
		if (password == 123456)
		{
			printf("密码输入正确！");
			exit(0);
		}
		printf("密码输入错误，当前输入第%d次密码。\n", i);
		i++;
		if (i == 4)
		{
			printf("密码输错三次，系统强制退出！");
			exit(0);	//告诉操作系统，程序正常退出
		}
	}
	return 0;	*/





	//淘宝双十一2015念的交易额哇800亿，每年递增25%
	//问：按此速读哪年交易额达到2000亿？
	//先声明变量
	/*
	int year = 2015;	//年份
	double money = 800;	//交易额
	//要使用循环解决
	//循环三要素：
	while (money <= 2000)
	{
		money = money * 1.25;	//money*=1.25;循环变量的更新
		year++;	//循环变量的更新
	}
	printf("按此增速，%d年交易额可以达到2000亿。\n",year);
	return 0;	
	*/

	/*
	//随机函数
	srand(time(NULL));	//使用时间做为种子，产生不一样的随机数字
	printf("随机数字：%d\n",rand());


	//使用循环模拟实现玩家对战
	//双方初始hp均为100
	//每次攻击5-15
	//hp最先到零或以下的被ko
	
	int hp1 = 100, hp2 = 100;	//1p和2p的血量
	int att1, att2;				//1p和2p的攻击力
	int i = 1;
	while (hp1 >= 0 && hp2 >= 0)//当两个玩家都活着的时候，继续进行对战过程
	{
		//默认1p首先攻击
		att1 = rand() % 11 + 5;
		att2 = rand() % 11 + 5;
		hp1 -= att2;
		hp2 -= att1;
		if (hp1 < 0 )
		{
			printf("玩家2胜利！");
			break;
		}
		if (hp2 < 0)
		{
			printf("玩家1胜利！" );
			break;
		}
		printf("********************************************\n");
		printf("第%d轮：", i);
		printf("玩家1攻击力%d，玩家2血量为%d。\n", att1, hp2);
		printf("玩家2攻击力%d，玩家1血量为%d。\n", att2, hp1);
		printf("********************************************\n");
		i++;
		Sleep(50);
	}
	return 0;
	*/


	/*
	int a = 1, b = 10;
	do {
		b -= a;
		a++;
	} while (b-- < 0);
	printf("%d", b);
	*/


	int num = 1234;
	while (num > 0)
	{
		printf("%d\n", num % 10);
		num /= 10;
	}
	
}