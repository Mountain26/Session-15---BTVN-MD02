#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[] = "Xin chao boss Mountain";
    char deleteChar;
    
    printf("Moi ban nhap ky tu can xoa: ");
    scanf(" %c", &deleteChar);
    
    char result[100];
    int j = 0;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] != deleteChar) {
            result[j++] = text[i];
        }
    }
    result[j] = '\0';
    
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", deleteChar, result);

    return 0;
}

