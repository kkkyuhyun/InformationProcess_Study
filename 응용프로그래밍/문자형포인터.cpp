#include <stdio.h>
void f(char *name[])
{
	for(int i=0;i<3;i++)
	printf("%s\n",name[i]);
}
int main()
{
	char *name[]   ={"hongkildong","kimculsu","jason"};
	f(name);
}
/*
name 
10����    -> hongkildong
100����   -> kimculsu
1000����  -> jason*/
