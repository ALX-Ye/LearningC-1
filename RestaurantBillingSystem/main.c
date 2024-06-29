#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printMENU();

int main()
{

int Food, sum=0;
bool falg = true;
char YN;

while(falg){
printMENU();

printf("Choose your food item:");
scanf("%d", &Food);

switch(Food){

case 1:
    printf("Assburger added to your tray\n");
    sum = 7+sum;
    break;
case 2:
    printf("Cocaine added to your tray\n");
    sum = 263+sum;
    break;
case 3:
    printf("Cheesecake added to your tray\n");
    sum = 5+sum;
    break;
default: printf("That's not an option\n");
 continue;
}

printf("Do you want to add more items to your tray Y/N\n");
scanf(" %c", &YN);

if (YN=='Y'){
    falg = true;
}else if (YN=='N'){
    falg = false;
}else{
printf("Please pick a valid option, returning to Menu\n");
}
}
printf("Your total comes out to %d$", sum);
    return 0;
}

void printMENU(){
printf("Welcome to Hooters\n");

printf("--MENU--\n");
printf("(1)Assburger-7$\n");
printf("(2)Coke-263$\n");
printf("(3)Cheesecake-5$\n");
}
