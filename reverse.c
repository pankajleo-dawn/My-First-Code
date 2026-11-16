#include <stdio.h>

int main() {
    char str[100], temp;
    int len = 0, left = 0, right;

    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Reads input with spaces safely

    // Calculate length manually
    while (str[len] != '\0') {
        len++;
    }

    right = len - 1;

    // Reverse in place
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left ++;
        right --;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}