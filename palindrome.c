// palindrome
#include <stdio.h>

int reverse(int num, int temp) {

    if (num == 0)
        return temp;

    temp = temp * 10 + (num % 10);
    return reverse(num / 10, temp);
}

int isPalindrome(int num) {

    return num == reverse(num, 0);
}

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);


    if (isPalindrome(num)) {
        printf("The number %d is a palindrome.\n", num);
    } else {
        printf("The number %d is not a palindrome.\n", num);
    }

    return 0;
}
