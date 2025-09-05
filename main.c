#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    // Convert to uppercase
    for (i = 0; i < len; i++) {
        if (str[i] >= "a"[0] && str[i] <= "z"[0]) {
            str[i] = str[i] - "a"[0] + "A"[0];
        }
    }

    printf("The capitalized string is: %s\n", str);

    // Reverse the string
    for (i = 0, len = strlen(str); i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("The reversed string is: %s\n", str);

    return 0;
}
