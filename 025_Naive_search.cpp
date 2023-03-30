#include<stdio.h>
#include<string.h>

void NavieSearch(char str[],char sub[]);

int main()
{
    char str[111],sub[111];
    printf("Enter string\n");
    gets(str);
    printf("Enter substring\n");
    gets(sub);
    NavieSearch(str,sub);
}


void NavieSearch(char str[],char sub[])
{
    int i,j,a,b,f=0;
    a=strlen(str);
    b=strlen(sub);
    for(i=0;i<a;)
    {
        for(j=0;j<b;j++)
        {
            if(str[i+j]!=sub[j])
                break;
        }
        if(j==b){
            printf("\nString found at index %d, place %d",i,i+1);
            i=i+b;
            f=1;
        }
        else if(j==0)
            i=i+1;
            else
                i=i+j;//Only change from NavieSearch is here.If a charachter doesnt match will increment i=i+j
    }
    if(f==0)
    {
        printf("\nString not found");
    }
}

