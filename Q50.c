//C program to copy an array to another array AND reverse an array using pointer
//C program to copy an array to another array AND reverse an array using pointer

#include <stdio.h>
int main() {
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int data[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < n; ++i)
        printf("%d\n", *(data + i));

        printf("Reverse of array \n");
    for (int i=n-1; i>=0; --i)
        printf("%d\n", *(data + i));




    return 0;
}