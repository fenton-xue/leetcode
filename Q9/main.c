/*
 * 9. 回文数
 * 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
 * 回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
 * 例如，121 是回文，而 123 不是。
 */
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x);

int main() {
    // 测试回文数
    int palindrome = 12321;
    printf("%d is palindrome: %s\n", palindrome, isPalindrome(palindrome) ? "true" : "false");

    // 测试非回文数
    int nonPalindrome = 12345;
    printf("%d is palindrome: %s\n", nonPalindrome, isPalindrome(nonPalindrome) ? "true" : "false");

    // 测试负数
    int negativeNumber = -12321;
    printf("%d is palindrome: %s\n", negativeNumber, isPalindrome(negativeNumber) ? "true" : "false");

    // 测试以0结尾的数
    int zeroEnding = 123220;
    printf("%d is palindrome: %s\n", zeroEnding, isPalindrome(zeroEnding) ? "true" : "false");

    return 0;
}

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int y = 0;
    while (x > y) {
        y = y * 10 + x % 10;
        x = x / 10;
    }
    return x == y || x == y / 10;
}
