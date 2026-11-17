#include <stdio.h>

// Recursive function to reverse the digits of a number
int reverseNumber(int num, int rev) {
    // Base case: when all digits have been processed
    if (num == 0) {
        return rev;
    }
    
    // Recursive step: extract last digit and append it to rev
    rev = (rev * 10) + (num % 10);
    return reverseNumber(num / 10, rev);
}

int main() {
    int number, reversed;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Negative numbers are generally not considered palindromes
    if (number < 0) {
        printf("%d is not a palindrome.\n", number);
        return 0;
    }

    // Call the recursive function with initial reversed value as 0
    reversed = reverseNumber(number, 0);

    // Compare original number with the reversed number
    if (number == reversed) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
