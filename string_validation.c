#include<string.h>
#include<stdio.h>

int valid(char *name)
{
    int i;
    for (i=0;name[i]!='\0';i++)
    {
        if (!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57))
            return 0;
    }
    return 1;
}

int main()
{

    char name[20];
    printf("Enter a name: ");
    gets(name);

    int out=valid(&name);
    if (out==1)
        printf("The entered name is a valid name.\n");
    else
        printf("It is not a valid name.");



    return 0;
}
