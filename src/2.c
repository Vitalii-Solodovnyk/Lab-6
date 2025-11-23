
#include <stdio.h>

#define LICZBA_KONT 100

int main(void) {
    double saldo[LICZBA_KONT] = {0.0};
    int opcja;

    while (1) {
        if (scanf("%d", &opcja) != 1) {
            // EOF or invalid input -> exit
            break;
        }

        if (opcja == 0) {
            printf("Koniec programu.\n");
            break;
        } else if (opcja == 1) { // DEPOSIT
            int konto;
            double kwota;
            if (scanf("%d", &konto) != 1 || scanf("%lf", &kwota) != 1) {
                printf("DEPOSIT ERROR: niepoprawne dane wejściowe.\n");
                continue;
            }
            if (konto < 0 || konto >= LICZBA_KONT) {
                printf("DEPOSIT ERROR: niepoprawny numer konta %d.\n", konto);
                continue;
            }
            if (kwota < 0) {
                printf("DEPOSIT ERROR: kwota < 0.\n");
                continue;
            }
            saldo[konto] += kwota;
            printf("DEPOSIT OK. Konto %d nowe saldo: %.2f\n", konto, saldo[konto]);
        } else if (opcja == 2) { // WITHDRAW
            int konto;
            double kwota;
            if (scanf("%d", &konto) != 1 || scanf("%lf", &kwota) != 1) {
                printf("WITHDRAW ERROR: niepoprawne dane wejściowe.\n");
                continue;
            }
            if (konto < 0 || konto >= LICZBA_KONT) {
                printf("WITHDRAW ERROR: niepoprawny numer konta %d.\n", konto);
                continue;
            }
            if (kwota < 0) {
                printf("WITHDRAW ERROR: kwota < 0.\n");
                continue;
            }
            if (saldo[konto] < kwota) {
                printf("WITHDRAW ERROR: za mało środków na koncie %d.\n", konto);
                continue;
            }
            saldo[konto] -= kwota;
            printf("WITHDRAW OK. Konto %d nowe saldo: %.2f\n", konto, saldo[konto]);
        } else if (opcja == 3) { // SHOW
            int konto;
            if (scanf("%d", &konto) != 1) {
                printf("SHOW ERROR: niepoprawne dane wejściowe.\n");
                continue;
            }
            if (konto < 0 || konto >= LICZBA_KONT) {
                printf("SHOW ERROR: niepoprawny numer konta %d.\n", konto);
                continue;
            }
            printf("SHOW: konto %d saldo = %.2f\n", konto, saldo[konto]);
        } else {
            printf("Nieznana opcja: %d\n", opcja);
        }
    }
    return 0;
}
