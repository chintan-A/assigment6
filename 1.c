#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    for (j = 0; str[j] != '\0'; j++);

    
    for (i = 0; i < j/2; i++) {
        if (str[i] != str[j-i-1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is NOT a Palindrome.\n");

    return 0;
}
