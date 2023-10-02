#include<stdio.h>
void main(){
	int days,d,w,y;
	printf("Enter amount of days to get time in years, weeks, days form : \n");
	scanf("%d",&days);
	y=days/365;
	w=(days%365)/7;
	d=(days%365)%7;
	printf("Time for %d days is: %d year(s), %02d week(s), %02d day(s)",days,y,w,d);
	}