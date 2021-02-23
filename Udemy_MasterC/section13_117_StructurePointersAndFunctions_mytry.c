#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item{
    char * itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item * ptrItemInfo);
void printItem(struct item * ptrItemInfo);


int main()
{
    struct item itemInfo;
    struct item * ptrItemInfo = &itemInfo;

    readItem(ptrItemInfo);

    printItem(ptrItemInfo);

    // Didn't free ptrItemInfo->itemName

    return 0;
}

void readItem(struct item * ptrItemInfo)
{
    char temp[30];
    
    printf("Enter product name: ");
    gets(temp, 30);
    ptrItemInfo->itemName = (char *)malloc(strlen(temp) + 1); // Didn't check if the malloc failed or not
    strcpy(ptrItemInfo->itemName, temp);
    
    printf("Enter its price: ");
    scanf("%f", &(ptrItemInfo->price));
    
    printf("Enter its quantity: ");
    scanf("%d", &(ptrItemInfo->quantity));

    ptrItemInfo->amount = ptrItemInfo->quantity * ptrItemInfo->price;
}

void printItem(struct item * ptrItemInfo)
{
    system("clear");
    printf("Product name: %s\n", ptrItemInfo->itemName);
    printf("Product price: $%.1f\n", ptrItemInfo->price);
    printf("Product quantity: %i\n", ptrItemInfo->quantity);
    printf("Product amount: $%.1f\n", ptrItemInfo->amount);
}