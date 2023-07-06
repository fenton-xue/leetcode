#include <stdio.h>
#include <string.h>

int romanToInt(char* s);

int main() {
    char romanNum[] = "MCMXCIV";
    int result = romanToInt(romanNum);
    printf("Roman numeral: %s\nInteger value: %d\n", romanNum, result);

    return 0;
}

int romanToInt(char* s) {
    int len = strlen(s);
    char arr[len];
    for (int i = 0; i < len; i++) {
        arr[i] = s[i];
    }
    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == 'M')
            sum = sum + 1000;
        if (arr[i] == 'D')
            sum = sum + 500;
        if (arr[i] == 'C')
            sum = sum + 100;
        if (arr[i] == 'L')
            sum = sum + 50;
        if (arr[i] == 'X')
            sum = sum + 10;
        if (arr[i] == 'V')
            sum = sum + 5;
        if (arr[i] == 'I')
            sum = sum + 1;
    }
    int i = 0;
    int j = 1;
    while (j < len) {
        if (arr[i] == 'C' && arr[j] == 'M') {
            sum = sum - 200;
        }
        if (arr[i] == 'C' && arr[j] == 'D') {
            sum = sum - 200;
        }
        if (arr[i] == 'X' && arr[j] == 'C') {
            sum = sum - 20;
        }
        if (arr[i] == 'X' && arr[j] == 'L') {
            sum = sum - 20;
        }
        if (arr[i] == 'I' && arr[j] == 'X') {
            sum = sum - 2;
        }
        if (arr[i] == 'I' && arr[j] == 'V') {
            sum = sum - 2;
        }
        i++;
        j++;
    }
    return sum;
}