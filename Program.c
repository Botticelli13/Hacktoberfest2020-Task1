#include <stdio.h>

int main()
{
    int name, country, age, skill;
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name :  "); //Get User name
    scanf("%s", &name);
    printf("Enter your Country of Residance : "); //Get user country
    scanf("%s", &country);
    printf("Enter your age: "); //
    scanf("%d", &age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest :"); //Get user skill level
    scanf("%s", &skill);

    printf("Thank you %s Happy Hacking", &name); //Thank the user

    return 0;
}
