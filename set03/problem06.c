#include <stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
    char a[100],b[100];
    int index;
    input_string(a,b);
    index=sub_str_index(a,b);
    output(a,b,index);
}
void input_string(char* a, char* b)
{
    printf("Enter the string : \n");
    scanf("%s",a);
    printf("Enter the substring : \n");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{
    int m;
    for(m=0;substring[m]!='\0';m++);
    int i,j,l,k;
    for(int i=0,k=0;string[i]!='\0';i++)
    {
        int a=0;
        if(substring[k]==string[i])
        {
            l=i;
            for(j=0;substring[j]!='\0';j++)
            {
                if(substring[j]==string[l])
                {
                    l++;
                    a++;
                }
            }
        }
        if(m==a)
        {
            return i;
            break;
        }
    }
}
void output(char *string, char *substring, int index)
{
    printf("The index of %s in %s is %d \n",substring,string,index);
}