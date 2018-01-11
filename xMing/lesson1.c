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
        }
    }
    int num = 0;  //定义计算结果变量sum
    int ii = 1;    //定义循环数字变量i
    int flag = 0; //定义符号状态变量flag
 
    //使用while循环
    while(ii<=100)
    {
    	if(flag==0){
    		num = ii + num;
    		flag = 1;    		
    	}else{
        	num = num - ii;
        	flag = 0;
        }
        ii++;
	}
	printf("%d\n",num);
	
	    // 定义相乘数字i,j以及结果result
    int j1, j2, result;
    /*
     * 使用for循环解决本题相对简单哦~
    */
    for(j1=9;j1>0;j1--){
    	j2=1;
    	while(j2<=j1){
    		result=j1*j2;
    		if(j2<j1){
    			printf("%d*%d=%d ",j1,j2,result);
    			j2++;
    		}else{
    			printf("%d*%d=%d\n",j1,j2,result);
    			j2++;
    		}
    	}
    }
    int go=0;
    HERE:
    if(go<5){
    	printf("gogogo");
    	go++;
    	goto HERE;
    }
    return 0;    
}