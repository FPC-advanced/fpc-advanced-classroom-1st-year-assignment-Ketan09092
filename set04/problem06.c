#include  <stdio.h>
#include  <string.h>

void input_string(char *a);
int  count_words(char *string);
void output(char *string, int no_words);

int main()
{
    char a[100];
    input_string(a);
    int no_words=count_words(a);
    output(a,no_words);
    return 0;
}
void input_string(char *a)
{
    printf("Enter the string : \n");
    gets(a);
} 
int count_words(char *string)
{
    int j=0;
    for(j=0;string[j]!='\0';j++);
    int i;
    int a=1;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ' && string[i+1]!=' ')
        {
            a++;
        }
        else
        {
            continue;
        }
    }
    if(string[0]==' ' && string[j-1]==' ')
    {
        a=a-2;
        return a;
    }
    else if(string[0]==' ')
    {
        a--;
        return a;
    }
    else if(string[j-1]==' ')
    {
        a--;
        return a;
    }
    else
    {
        return a;
    }
}
void output(char *string, int no_words)
{
    printf("The number of words in %s is %d",string,no_words);
}