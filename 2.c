#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter any string: ");
    scanf("%s", str);

    printf("Frequency of each letter:\n");

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

      
        if (str[i] == '0')
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0'; 
            }
        }

        printf("%c => %d\n", str[i], count);
    }

    return 0;
}
