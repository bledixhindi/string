#include <stdio.h>
#include <string.h>

int main ()
{
	char s1[10];
	char s2[10];
	
	printf("Vendos S1:");
	scanf("%s",&s1);
	
	printf("Vendos S2:");
	scanf("%s",&s2);
	
	if(strcmp(s1,s2)==0)
	{
		printf("Dy stringat %s dhe %s jan te njejta.",s1,s2);
	}
	else  (strcmp(s1,s2)>0);
	{
		printf("Dy stringat %s dhe %s nuk jane te njejta.",s1,s2);
	}
	
	return 0;
}
