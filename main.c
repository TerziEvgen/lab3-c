
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void task83(void) {
    printf("\nTask 83\n");

    double a, b, c;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("There are equal numbers\n");
    }
    else {
        printf("There are no equal numbers\n");
    }
}

void task90(void) {
    printf("\nTask 90\n");

    double a, b, c, x, y;
    printf("Enter brick dimensions a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Enter hole dimensions x, y: ");
    scanf("%lf %lf", &x, &y);

    if ((a <= x && b <= y) || (a <= y && b <= x) ||
        (a <= x && c <= y) || (a <= y && c <= x) ||
        (b <= x && c <= y) || (b <= y && c <= x)) {
        printf("The brick will pass through the hole\n");
    }
    else {
        printf("The brick will not pass through the hole\n");
    }
}

void task109(void) {
    printf("\nTask 109\n");

    int a, b, c;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("Maximum: first number\n");
    }
    else if (b > a && b > c) {
        printf("Maximum: second number\n");
    }
    else {
        printf("Maximum: third number\n");
    }

    if (a < b && a < c) {
        printf("Minimum: first number\n");
    }
    else if (b < a && b < c) {
        printf("Minimum: second number\n");
    }
    else {
        printf("Minimum: third number\n");
    }

    if ((a > b && a < c) || (a < b && a > c)) {
        printf("Middle: first number\n");
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        printf("Middle: second number\n");
    }
    else {
        printf("Middle: third number\n");
    }
}

void task33(void) {
    printf("\nTask 33\n");

    int a, b, c, k;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k == 0) {
        printf("k must not be zero\n");
        return;
    }

    if (a % k == 0) {
        printf("k is a divisor of a\n");
    }

    if (b % k == 0) {
        printf("k is a divisor of b\n");
    }

    if (c % k == 0) {
        printf("k is a divisor of c\n");
    }

    if (a % k != 0 && b % k != 0 && c % k != 0) {
        printf("k is not a divisor of any number\n");
    }
}

void task94(void) {
    printf("\nTask 94\n");

    int n;
    printf("Enter a six-digit number: ");
    scanf("%d", &n);

    if (n < 100000 || n > 999999) {
        printf("The number must have six digits\n");
        return;
    }

    int d1 = n / 100000;
    int d2 = n / 10000 % 10;
    int d3 = n / 1000 % 10;
    int d4 = n / 100 % 10;
    int d5 = n / 10 % 10;
    int d6 = n % 10;

    if (d1 + d2 + d3 == d4 + d5 + d6) {
        printf("Lucky number\n");
    }
    else {
        printf("Not a lucky number\n");
    }
}

void task72(void) {
    printf("\nTask 72\n");

    long long a, b, sum;
    printf("Enter two integers: ");
    scanf("%lld %lld", &a, &b);

    sum = a + b;

    if (sum > 32767 || sum < -32768) {
        printf("Overflow\n");
    }
    else {
        printf("Sum = %lld\n", sum);
    }
}

void task86(void) {
    printf("\nTask 86\n");

    double a, b, c;
    printf("Enter the heights of three people: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == b && b == c) {
        printf("All three heights are equal\n");
    }
    else {
        printf("The heights are not all equal\n");
    }
}

void task29(void) {
    printf("\nTask 29\n");

    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    if (m == n) {
        m = 0;
        n = 0;
    }
    else if (m > n) {
        n = m;
    }
    else {
        m = n;
    }

    printf("m = %d, n = %d\n", m, n);
}

void task20(void) {
    printf("\nTask 20\n");

    int n;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("The number must have three digits\n");
        return;
    }

    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;

    if (a == b && b == c) {
        printf("All digits are equal\n");
    }
    else {
        printf("Not all digits are equal\n");
    }

    if (a == b || a == c || b == c) {
        printf("There are equal digits\n");
    }
    else {
        printf("All digits are different\n");
    }
}

void task65(void) {
    printf("\nTask 65\n");

    double x;
    printf("Enter x in radians: ");
    scanf("%lf", &x);

    double values[3];
    char *names[3];
    int count = 0;

    values[count] = sin(x);
    names[count] = "sin(x)";
    count++;

    values[count] = cos(x);
    names[count] = "cos(x)";
    count++;

    if (fabs(cos(x)) < 1e-7) {
        printf("tan(x) is undefined\n");
    }
    else {
        values[count] = tan(x);
        names[count] = "tan(x)";
        count++;
    }

    int i, j;
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - 1 - i; j++) {
            if (values[j] > values[j + 1]) {
                double temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;

                char *tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }

    printf("Values in ascending order:\n");
    for (i = 0; i < count; i++) {
        printf("%s = %.6f\n", names[i], values[i]);
    }
}

int main(void) {
    task83();
    task90();
    task109();
    task33();
    task94();
    task72();
    task86();
    task29();
    task20();
    task65();

    return 0;
}
