#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int binaryToDec(long long int n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int octToDec(long long int n) {
    int p = 0;
    int decNumber = 0;
    while (n > 0) {
        decNumber += (n % 10) * pow(8, p);
        p++;
        n /= 10;
    }
    return decNumber;
}

int hexaToDec(char hexaValue[]) {
    int leng = strlen(hexaValue);
    // Initializing base value to 1, i.e 16^0 
    int base = 1;
    int decimal_value = 0;
    // Extracting characters as digits from last character 
    for (int i = leng - 1; i >= 0; i--) {
        // if character lies in '0'-'9', converting  
        // it to integral 0-9 by subtracting 48 from 
        // ASCII value. 
        if (hexaValue[i] >= '0' && hexaValue[i] <= '9') {
            decimal_value = decimal_value+ (hexaValue[i] - 48) * base;
            // incrementing base by power 
            base = base * 16;
        }// if character lies in 'A'-'F' , converting  
            // it to integral 10 - 15 by subtracting 55  
            // from ASCII value 
        else if (hexaValue[i] >= 'A' && hexaValue[i] <= 'F') {
            decimal_value =  decimal_value + (hexaValue[i] - 55) * base;
            // incrementing base by power 
            base = base * 16;
        }
    }
    return decimal_value;
}

int main() {

    while (1) {
        int key, n;
        char a[100];
        char c;
        printf("	1.Convert binary number to decimal number\n");
        printf("	2.Convert octal number to decimal number\n");
        printf("	3.Convert hexadecimal number to decimal number\n");
        printf("	4.Exit\n");
        printf("Please choose number (1 to 4):");
        scanf("%d", &key);

        switch (key) {
            case 1:
                printf("Enter binary number:  ");
                scanf("%d", &n);
                printf("Decimal number is: %d", binaryToDec(n));
                break;
            case 2:
                printf("Enter octal number:  ");
                scanf("%d", &n);
                printf("Decimal number is: %d", octToDec(n));
                break;
            case 3:
                printf("Enter hexadecimal  number:  ");
                scanf("%s", &a);
                printf("Decimal number is: %d", hexaToDec(a));
                break;
            default:
                exit(0);
        }
        printf("\nDo you want to return the main menu (Y/N): ");
        //fpurge(stdin);
        fflush(stdin);
		c = getchar();
        if (c == 'N'||c=='n') 
		{
            break;
        }
    }
}

