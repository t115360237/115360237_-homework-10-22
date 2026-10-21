#include <stdio.h>

int main(void) {
    int payCode;
    double managerSalary;
    double hourlyRate, hoursWorked, hourlySalary;
    double grossSales, commissionSalary;
    double pieceRate, piecesProduced, pieceSalary;

    printf("Enter paycode (-1 to end): ");
    scanf("%d", &payCode);

    while (payCode != -1) {
        switch (payCode) {
            case 1:
                printf("Enter weekly salary for manager: ");
                scanf("%lf", &managerSalary);
                printf("Manager's pay is $%.2f\n\n", managerSalary);
                break;

            case 2:
                printf("Enter hourly rate: ");
                scanf("%lf", &hourlyRate);
                printf("Enter hours worked: ");
                scanf("%lf", &hoursWorked);

                if (hoursWorked <= 40) {
                    hourlySalary = hoursWorked * hourlyRate;
                } else {
                    hourlySalary = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
                }
                printf("Hourly worker's pay is $%.2f\n\n", hourlySalary);
                break;

            case 3:
                printf("Enter gross weekly sales: ");
                scanf("%lf", &grossSales);
                commissionSalary = 250.0 + grossSales * 0.057;
                printf("Commission worker's pay is $%.2f\n\n", commissionSalary);
                break;

            case 4:
                printf("Enter number of items produced: ");
                scanf("%lf", &piecesProduced);
                printf("Enter rate per item: ");
                scanf("%lf", &pieceRate);
                pieceSalary = piecesProduced * pieceRate;
                printf("Pieceworker's pay is $%.2f\n\n", pieceSalary);
                break;

            default:
                printf("Invalid paycode.\n\n");
                break;
        }

        printf("Enter paycode (-1 to end): ");
        scanf("%d", &payCode);
    }

    return 0;
}
