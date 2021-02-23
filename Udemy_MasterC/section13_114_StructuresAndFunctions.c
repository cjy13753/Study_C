#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Family
{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

struct funds
{
    char bank[50];
    double bankfund;
    char save[50];
    double savefund;
};

bool siblings(struct Family member1, struct Family member2);
double sum(struct funds moolah);

int main()
{
    /* First example */    
    struct Family member1 = {.mother = "Eemy"};
    struct Family member2 = {.mother = "Emmy"};
    
    printf("%i\n", siblings(member1, member2));    


    /* Second example */
    struct funds stan = {"Garlic-Melon Bank", 4032.27, "Lucky's Savings and Load", 8543.94};

    printf("Stan has a total of $%.2f.\n", sum(stan));
    
    
    return 0;
}

bool siblings(struct Family member1, struct Family member2)
{
    if(strcmp(member1.mother, member2.mother) == 0)
        return true;
    else
        return false;
}

double sum(struct funds moolah)
{
    return(moolah.bankfund + moolah.savefund);
}