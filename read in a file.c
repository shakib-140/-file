#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file4;
    char ch;
    file4=fopen("name and age.txt","r");
    if(file4==NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("file is open\n");
        while(!feof(file4))
        {
            ch=fgetc(file4);
            printf("%c",ch);
        }
        printf("file is opened successfully");
    }

    getch();
}
