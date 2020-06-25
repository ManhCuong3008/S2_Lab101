#include <stdio.h>
#include<stdlib.h>

void mulTable(int n) {
    int i = n;
    for (int j = 0; j < 10; j++) {
        printf("\t%d x %d = %d\n", i, j, i * j);
    }
}

void input() {
    int i, check, number;
    char key;
    do {
        printf("Please enter a number (1 - 9): ");
        fpurge(stdin);
        check = scanf("%d%c", &number, &key);
    } while (number > 9 || number <= 0);

    if (check == 2 && key == '\n') {
        mulTable(number);
    } else {
        input();
    }
}

int main() {
    char c;
    while (1) {
        input();
        printf("Do you want to continue (Y/N): ");
        fpurge(stdin);
        c = getchar();
        //scanf("%s",&c);
        if (c == 'N' || c == 'n') {
            break;
        }
    }
    return 0;
}
