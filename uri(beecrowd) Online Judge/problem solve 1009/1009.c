#include<stdio.h>
int main(){

    char name[50];
    double salary, sold, bonus, TOTAL;

    scanf("%s" ,  name);   //seller's name
    scanf("%lf", &salary);   //seller's salary
    scanf("%lf", &sold);   //total sell's made by seller

    bonus=sold*15/100;   //15% of all products which will taken by seller //what a amazing thing--wow!!!

    TOTAL=(salary+bonus);   //TOTAL SALARY OF THE SELLER,INCLUDING 15% BONUS WITH MAIN SALARY

    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}
