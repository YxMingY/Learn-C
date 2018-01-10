#include <stdio.h>
//我是注释
/*我和PHP的注释一样哦*/
# define MONEY 10
int main()
{
	printf("第一课");
	int year=2018;
	printf("\n今年是%d年。\n",year);
	int age = 15;
    int height = 162;
    float weight = 82.5;
    char isfat = 'y';
    printf("年龄：%d 岁\n", age);
    printf("身高：%d CM\n", height);
    printf("体重：%f KG\n", weight);
    printf("是否属于肥胖儿童：%c\n", isfat); 
	float height = 1.85;
	char unit = 'm';
	printf("小明今年%d岁\n", age);
	printf("小明身高%f%c\n", height, unit);
	   printf("小明现在在慕课网上学习IT技术"); 
	   printf("小铭的一个月是零花钱只有%d元",MONEY);
	return 0;
}