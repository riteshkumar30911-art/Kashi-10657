#include <stdio.h>

int main() {
    int num, temp, reverse = 0, digit;

    printf("Enter an Number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (reverse == num) {
        printf("Palindrome Number");
    } else {
        printf("Not a Palindrome Number");
    }

    return 0;
}
