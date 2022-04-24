#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("enter the year:");
scanf("%d",&a);
if(a%4==0 && a%100!=0){
	printf("\n %d is leap",a);
}
else if(a%400!=0){
	printf("\n %d is not leap",a);
}
	return 0;
}
