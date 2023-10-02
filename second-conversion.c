#include<stdio.h>
void main(){
	int sec,s,m,h;
	printf("Enter amount of seconds to get time in HH:MM:SS form : \n");
	scanf("%d",&sec);
	h=sec/3600;
	m=(sec%3600)/60;
	s=(sec%3600)%60;
	printf("Time for %d seconds is: %d:%02d:%02d",sec,h,m,s);
	}