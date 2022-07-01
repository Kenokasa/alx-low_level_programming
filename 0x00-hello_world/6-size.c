#include <stdio.h>
/**
 * main - "print size"
 * return: always (0)
 */
int mani(void)
{
	int chara=sizeof(char);
	int inti=sizeof(int);
	int long_int=sizeof(long int);
	int long_long=sizeof(long long int);
	int float_s=sizeof(float);
	printf("Size of a char: ",chara," byte(s)\n");
	printf("Size of a int: ",inti," byte(s)\n");
	printf("Size of a long int: ",Long_int," byte(s)\n");
	printf("Size of a long long int: ",long_long," byte(s)\n");
	printf("Size of a float: ",float_s," byte(s)\n");
