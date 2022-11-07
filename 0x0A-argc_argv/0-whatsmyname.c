#include<stdlib.h>
#include<stdio.h>
/*
 * main - the main function
 *
 */

int main(int argc, char* argv[])
{
int i;
for(i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}
return 0;
}
