#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    int result;
    char string1[100],string2[100];
    input_two_strings(string1,string2);
    result=stringcompare(string1,string2);
    output(string1,string2,result);
}

void input_two_strings(char *string1, char *string2 )
{
    printf("Enter the first string : \n");
    scanf("%s",string1);
    printf("Enter the second string : \n");
    scanf("%s",string2);
}

// int stringcompare(char *string1, char *string2)
// {
//     // int i=0;
//     // while (string1[i] != '\0' && string2[i] != '\0' && string1[i] == string2[i])
//     // {
//     //     i++;
//     // }
//     // return string1[i] - string2[i];

// }
int stringcompare(char *string1, char *string2)
{
    int i;
    for (i = 0; string1[i] != '\0' && string2[i] != '\0' && string1[i] == string2[i]; i++)
    {
        continue;
    }
    return string1[i] - string2[i];
}



void output(char *string1, char *string2, int result)
{
    if(result>0)
    {
        printf("%s is greater",string1);
    }
    else if(result<0)
    {
        printf("%s is greater",string2);
    }
    else
    {
        printf("Both string are same");
    }
}