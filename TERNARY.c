//  TERNARY OPERATERS
// THIS METHOD RUN WHEN STATEMENTS TRUE OR FALSE ARE ONE
// CONDITION ? EXPRESSION - IF - TRUE TO PRINTF :  EXPRESSION - IF - FALSE TO PRINTF --> THESE ARE FORMAT
// (a < 5) ? printf("a is less than 5") : printf(" a is more than 5"); THIS ARE CONDITION AND PUT IN PROGRAME

#include <stdio.h>

int main()
{
    int a;
    printf(" enter a value \n");
    scanf("%d", &a);
    (a < 5) ? printf("a is less than 5") : printf(" a is more than 5");
    return 0;
}