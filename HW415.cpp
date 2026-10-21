#include <stdio.h>

int main(void) {
    double principal = 5000.0;
    int years = 15;

    for (int r = 100; r <= 120; r += 5) {
        double rate = r / 1000.0;
        printf("Interest Rate: %.1f%%\n", rate * 100);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        double amount = principal;
        for (int year = 1; year <= years; year++) {
            amount = amount * (1.0 + rate);
            printf("%4d%21.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}
