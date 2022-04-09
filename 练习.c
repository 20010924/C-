#include<stdio.h>
#include<string.h>
char *lhb(char *q,const char *w){

	int i=0;
	int c=0;
	while(*q!='\0'){
		*q++;
	}
	while(*w!='\0'){
		*q++=*w++;
	}
	*q='\0';
}
int main()
{   
    char a[]="123";
    char b[]="789";
    lhb(a,b);
    printf("%s",a);
    
	return 0;
}
	

