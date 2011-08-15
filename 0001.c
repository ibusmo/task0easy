//0001 : Grading
#include"stdio.h"

main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=a+b+c;

	if(d>79) printf("A");
	else if(d>74) printf("B+");
	else if(d>69) printf("B");
	else if(d>64) printf("C+");
	else if(d>59) printf("C");
	else if(d>54) printf("D+");
	else if(d>49) printf("D");
	else printf("F");
	printf("\n");
	
}
