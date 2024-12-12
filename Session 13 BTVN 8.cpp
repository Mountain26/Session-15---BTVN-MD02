#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char text[]= "xin chao boss mountain";
	int size = strlen(text);
	for(int i=0; i<size; i++){
		if(i==0 || text [ i-1]==' '){
			if(text[i]>='a' && text[i] <= 'z'){
				text[i]=toupper(text[i]);
			}
		}
	}
	printf("%s", text);
}
