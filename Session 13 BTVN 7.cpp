#include <stdio.h>
#include <string.h> 
#include <ctype.h> 

int main(){
	char text[]="nguyendinhson15_0706";
	int countText=0;
	int countNum=0;
	int countSpecial=0;
	int length = strlen(text);
	
	for (int i = 0; i < length; i++){
		if(isalpha(text[i])){
			countText++; 
		}else if(isdigit(text[i])){
			countNum++; 
		}else{
			countSpecial++; 
		}
	}
	printf("%d ki tu chu cai\n", countText);
	printf("%d ki tu chu so\n", countNum);
	printf("%d ki tu dac biet\n", countSpecial);
 
} 
