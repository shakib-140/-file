#include<stdio.h>
#include<conio.h>
int main()
{
    char name[22];
    int i;
    printf("enter your name =");
    gets(name);
    int length =strlen(name);

    FILE *file;
    file=fopen("amir.txt","a");
    if(file==NULL)
    {
        printf("file is doesn't exist");
    }
    else
    {
        printf("file is open\n");
        for(i=0; i<=length; i++)
        {
            fputc(name[i],file);
        }
        printf("file is written successfully");
        fclose(file);
    }


    getch();
}
