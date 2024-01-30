// Accept one character from user and convert case of that character

#include<stdio.h>
void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("%c",cValue);

    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("%c",cValue);
    }


}

int main()
{
    char cValue = 0;
    printf("Eter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}