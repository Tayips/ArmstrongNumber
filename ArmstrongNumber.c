#include <stdio.h>
#include <time.h>
#include <math.h>

int armstrong(int val1, int ndigit) {
    int gesamt = 0;
    int x =ndigit;
    while (ndigit--) {
        int digit = val1 % 10;
        gesamt += pow(digit, x);
        printf("%d\n",gesamt);
        val1 /= 10;
    }
    return gesamt;
}

int isArmstrong(int number) {
    int original = number;
    int ndigit = 0;

    int temp = number;
    while (temp != 0) {
        temp /= 10;
        ndigit++;
    }

    int result = armstrong(number, ndigit);

    return (result == original);
}

int main(int argc, const char * argv[]) {
    clock_t start = clock();
    int val;
    printf("Sorgulanacak sayiyi giriniz:\n");
    scanf("%d", &val);

    if (isArmstrong(val)) {
        printf("%d sayisi Armstrong sayisidir\n", val);
    } else {
        printf("%d sayisi Armstrong sayisi degildir\n", val);
    }

    clock_t end = clock();
    printf("Program için harcanan süre: %f saniye\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}

