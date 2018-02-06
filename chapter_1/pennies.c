#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{

int days;
int pennies;

do
{
    days = get_int("d: ");
}
while (days > 31 || days < 28);

do
{
    pennies = get_int("p: ");
}
while (pennies <= 0);

double sum = ((pennies * (pow(2,days))) - pennies) / 100;
printf("$%.2f\n", sum);


return 0;

}