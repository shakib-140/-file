#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    int age;
    FILE *file3;
    file3=fopen("name and age.txt","a");
    if(file3==NULL)
    {
        printf("file doesn,t open\n");

    }
    else
    {
        printf("file is open\n");
        printf("enter youe name=");
        gets(name);
        printf("enter youe age=");
        scanf("%d",&age);
        fprintf(file3,"name=%s,age=%d\n",name,age);
        printf("file is written successfully");

    }


    getch();
}
