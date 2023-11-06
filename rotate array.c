#include<stdio.h>

void print(int x[], int size);
void rotateleft(int x[], int size, int k);
void rotateright(int x[], int size, int k);

int main() {
    int n, m;
    char ch;

    printf("Enter number of elements in an array: \n");
    scanf("%d", &n);
    int arra[n];
    printf("Enter an array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arra[i]);
    }

    printf("The array you have entered is: \n");
    print(arra,n);

    printf("Enter the number of times the array is to be rotated: \n");
    scanf("%d", &m);

    printf("Enter the 'l' or 'r' orientation of array to be rotated: \n");
    scanf(" %c", &ch); // Added space before %c to consume newline

    if (ch == 'l') {
        rotateleft(arra, n, m);
        printf("Left rotated array is equal to : \n");
        print(arra,n);
    } else if (ch == 'r') {
        rotateright(arra, n, m);
        printf("Right rotated array is equal to : \n");
        print(arra,n);
    }

    return 0;
}

void print(int x[],int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", x[i]);
    }
    printf("\n");
}

void rotateleft(int x[], int size, int k) {
    int t;
    for (int j = 1; j <= k; j++) {
        t = x[0];
        for (int i = 0; i < size - 1; i++) {
            x[i] = x[i + 1];
        }
        x[size - 1] = t;
    }
}

void rotateright(int x[], int size, int k) {
    for (int j = 1; j <= k; j++) {
        int t = x[size - 1];
        for (int i = size - 1; i >= 0; i--) {
            x[i + 1] = x[i];
        }
        x[0] = t;
    }
}
