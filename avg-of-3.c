#include<stdio.h>
void main(){
	int a=5,b=10,c=20;
	float d;
	d=(float)(a+b+c)/3;
	printf("let's say a=5, b=10 and c=20 then,\n");
	printf("average of them will be : %.2f\n",d);
	printf("Now, try it yourself. Enter value of a, b and c : \n");
	scanf("%d %d %d",&a,&b,&c);
	d=(float)(a+b+c)/3;
	printf("average of %d, %d and %d will be : %.2f",a,b,c,d);
	}