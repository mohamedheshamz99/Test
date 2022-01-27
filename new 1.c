#include <stdio.h>
	struct flags{
		unsigned int set1: 9;
		unsigned int set2: 20;
		unsigned int set3: 3;
		
		
	}aflag;
int main()
{
	printf("%d",sizeof(aflag));


}