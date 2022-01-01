#include <stdio.h>
#include <string.h>

int main(){
	char sen[]={"idea without execution is worthless"};
	char *p = sen;
	int i,len = strlen(sen);
	for(i=0;i<len;i++){
		if(*(p+i)=='c'){
			printf("The position of c is %d",i);
			break;
		}
		else
		continue;
	}
	return 0;
}
