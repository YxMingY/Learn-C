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
	   printf("小明现在在慕课网上学习IT技术\n"); 
	   printf("小铭的一个月是零花钱只有%d元\n",MONEY);
    char c = 'a';
    int n = c;    //将c赋值给n
    float f = c;     //将c赋值给f
    double d = c;   //将c赋值给d
    printf("%d\n",n);
    printf("%f\n",f);
    printf("%lf\n",d);
    double num = 2.5;      //定义浮点型变量num并赋值为2.5
    printf("num的整数部分是%d\n", (int)num);
    int x,y;
    x = 10;
    y = -3;
    printf("x+y=%d\n",x+y);  
    printf("x-y=%d\n",x-y);
    printf("x*y=%d\n",x*y);
    printf("x/y=%d\n",x/y);
    printf("x%y=%d\n",x%y);
    int i=0;
    while(i<5){
    	printf("吃第%d碗面\n",++i);
    }
    printf("吃饱了，隔\n");
        int num, sd, td, hd;
    //循环所有三位数
    for(num=100;num<1000;num++)
    {
        //获取三位数字num百位上的数字
        hd =num/100;
        //获取三位数字num十位上的数字
        td =(num-(num/100)*100)/10;
        //获取三位数字num个位上的数字
        sd =(num-(num/100)*100)-td*10;
        //水仙花数的条件是什么？
        if(hd*hd*hd+td*td*td+sd*sd*sd == num)
        {
            printf("水仙花数字：%d\n", num);    
        }/*else{
        	printf("%d\n%d\n%d\n",hd,td,sd);
        }*/
    }
    return 0;    
}