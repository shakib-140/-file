#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char name[30]="shakib khan";
    int length=strlen(name);
    FILE *file;
    file=fopen("text.txt","w");
    if(file==NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("file is opened\n");
        for(i=0; i<=length; i++)
        {
            fputc(name[i],file);
        }
        printf("file is written successfully\n");
        fclose(file);
    }



    getch();
}
