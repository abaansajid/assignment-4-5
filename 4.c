#include <stdio.h>

int strLength(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strLength(str);

    printf("Length of string = %d\n", length);

    return 0;
}
