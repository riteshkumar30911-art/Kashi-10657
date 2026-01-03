#include <stdio.h>

int main() {
    int num, temp, reverse = 0, digit;

    // Step 1: Read a number from the user
    scanf("%d", &num);

    // Step 2: Copy the number into a temporary variable
    temp = num;

    // Step 3: reverse variable already initialized to 0

    // Step 4–7: Reverse the number using while loop
    while (temp != 0) {

        // Step 4: Extract last digit
        digit = temp % 10;

        // Step 5: Build the reversed number
        reverse = reverse * 10 + digit;

        // Step 6: Remove last digit
        temp = temp / 10;
    }

    // Step 8–10: Compare and print result
    if (reverse == num) {
        printf("Palindrome Number");
    } else {
        printf("Not a Palindrome Number");
    }

    return 0;
}
