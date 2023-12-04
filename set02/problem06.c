#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char a[100],rev_str[100];
    input_string(a);
    str_reverse(a,rev_str);
    output(a,rev_str);
}
void input_string(char *a)
{
    printf("Enter the string : \n");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int j;
    for(j=0;str[j]!='\0';j++);
    int d=j;
    for(int i=0;str[i]!='\0';i++,j--)
    {
        rev_str[j-1]=str[i];
    }
    // rev_str[d]='\0';
}
void output(char *a, char *reverse_a)
{
    printf("%s \n",reverse_a);
}