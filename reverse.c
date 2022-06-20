#include<stdio.h>

void revAString(char strg[])
{
    int g, numb;
    int tmpry = 0;

    for(numb=0; strg[numb] != 0; numb++);
    for(g = 0; g <numb/2; g++)
    {
        tmpry = strg[g];
        strg[g]=strg[numb - 1 - g];
        strg[numb - 1 - g] = tmpry;
    }
    for(g = 0; g < numb; g++)
        putchar(strg[g]);
    printf(" \n ");
}



int main(void)
{
    char strg[200]; 
    printf("Please insert the string you wish to get reversed: ");
    scanf("%s", strg); 
    revAString(strg);
    return 0;
}




//ErrorErrorError------>>>>>>