#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file4;
    char name[20];
    file4=fopen("name and age.txt","r");
    if(file4==NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("file is open\n");
        fscanf(file4,"%s",&name);
        printf("name=%s\n",name);

        printf("file is opened successfully");
    }

    getch();
}
