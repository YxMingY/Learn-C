#include <stdio.h>
int ymain()
{
    int score[10]={67,98,75,63,82,79,81,91,66,84};
   	printf("总分%d\n",zf(score));
   	printf("平均分: %d\n",pjf(score));
   	px(score);
   	highest(score);
   	lowest(score);
    return 0;
}
int zf(int arr[]){
	int i;
	int sum=0;
	for(i=0;i<10;i++){
		sum = sum+arr[i];
	}
	return sum;
}
int highest(int arr[]){
    int i;
    int j;
	    for(i=0; i<10; i++)
    {
        for(j=0;j<=i;j++)
        {
        if(arr[i]>arr[j]){
        	int temp=arr[i];
        	arr[i]=arr[j];
        	arr[j]=temp;
        }
        }
	}
    printf("最高分: %d\n",arr[0]);
}
int lowest(int arr[]){
	    int i;
    int j;
	    for(i=0; i<10; i++)
    {
        for(j=0;j<=i;j++)
        {
        if(arr[i]<arr[j]){
        	int temp=arr[i];
        	arr[i]=arr[j];
        	arr[j]=temp;
        }
        }
	}
	 printf("最低分: %d\n",arr[0]);
}
int pjf(int arr[]){
   return (float)(zf(arr)/10.0);
}
int px(int arr[]){
    int i;
    int j;
	    for(i=0; i<10; i++)
    {
        for(j=0;j<=i;j++)
        {
        if(arr[i]>arr[j]){
        	int temp=arr[i];
        	arr[i]=arr[j];
        	arr[j]=temp;
        }
        }
	}
	printf("排序: ");
	for(i=0;i<9;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	ymain();
}