#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "Xin chao boss Mountain";
    int count[256]={0};
    int length = strlen(text);

    for (int i = 0; i < length; i++) {
        count[text[i]]++;
    }

    printf("Cac ky tu va so lan xuat hien:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("'%c': %d\n", i, count[i]);
        }
    }

    return 0;
}

