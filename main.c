#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
void header()
{
    system("cls");
    //70 char
    printf("***********************************************************************\n");
    printf("**###################################################################**\n");
    printf("**############################ Tool Box #############################**\n");
    printf("**###################################################################**\n");
    printf("***********************************************************************\n");
    printf("**                                                                   **\n");
}

void footers()
{
    printf("**                                                                   **\n");
}

void footer()
{
    printf("**###############        0= Main Menu 999= Exit       ###############**\n");
    printf("***********************************************************************\n");
}

void drawrect(int w, int h)
{
    int i, j;
    h/=2;
    putchar('\n');
    for (i = 0; i < w; i++)
    {
        putchar('x');
    }
    putchar('\n');
    for (i = 2; i < h; i++)
    {
        putchar('x');
        for (j = 2; j < w; j++)
        {
            putchar(' ');
        }
        putchar('x');
        putchar('\n');
    }
    for (i = 0; i < w; i++)
    {
        putchar('x');
    }
    putchar('\n');
    putchar('\n');
}

int mod(char c[],int n)
{
    int i,y = 0;
    for(i=0; c[i]!='\0'; i++)
    {
        y = (y * 10 + c[i] - 48) % n;
    }
    return y;
}
void exits()
{
    system("cls");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("********** Exiting ***********\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    sleep(1);
}
void pyramid(int n)
{
    system("cls");
    printf("**                             Pyramid                               **\n");
    footers();
    printf("**                       5= Go back 502= Reload                      **\n");
    footer();
    int i,a,j,k;
    for(j=1; j<=n; j++)
    {
        k=n-j+1;
        if(j<=9&&n>9)
        {
            k+=j;
        }
        else if(j>9){k+=n-j;}
        for(k; k>=1; k--)
        {
            printf(" ");
        }
        for(i=j; i>0; i--)
        {
            printf("%d",i);
        }
        for(a=2; a<=j; a++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
}

void option(int x)
{
    int a,b;
    char c[1000];
    switch(x)
    {
    case 0:
        printf("** 1. Calculator                            2. Tempeture Converstion **\n");
        printf("** 3. Big Modulus                                     4. System Info **\n");
        printf("** 5. Pattern                                            6. Geometry **\n");
        footers();
        footer();
        break;
    case 1:
        printf("** 101. Addition                                      102. Substract **\n");
        footers();
        printf("**                        0= Go back 1= Reload                       **\n");
        footer();
        break;
    case 101:
        printf("**                            Addition                               **\n");
        footers();
        printf("**                       1= Go back 101= Reload                      **\n");
        footer();
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Addition of the Two numbers: %d\n",a+b);
        break;
    case 2:
        printf("** 201. Celsius                                      202. Fahrenheit **\n");
        footers();
        printf("**                      0= Go back 2= Reload                         **\n");
        footer();
        break;
    case 3:
        printf("**                          Big Modulus                              **\n");
        footers();
        printf("**                        0= Go back 3= Reload                       **\n");
        footer();
        printf("Enter  number to modulus: ");
        scanf("%s",c);
        printf("Enter  number to modulus with: ");
        scanf("%d",&a);
        printf("Answer: %d\n",mod(c,a));
        break;
    case 4:
        system("cls");
        system("systeminfo");
        a=1;
        do
        {
            printf("Enter 0 to exit: ");
            scanf("%d",&a);
        }
        while(a!=0);
        header();
        x=0;
        option(x);
        break;
    case 5:
        printf("** 501. Rectangle                                       502. Pyramid **\n");
        footers();
        printf("**                        0= Go back 5= Reload                       **\n");
        footer();
        break;
    case 501:
        printf("**                            Rectangle                              **\n");
        footers();
        printf("**                       5= Go back 501= Reload                      **\n");
        footer();
        printf("Enter Width: ");
        scanf("%d",&a);
        printf("Enter Hight: ");
        scanf("%d",&b);
        drawrect(a,b);
        break;
    case 502:
        printf("**                             Pyramid                               **\n");
        footers();
        printf("**                       5= Go back 502= Reload                      **\n");
        footer();
        printf("Enter Hight: ");
        scanf("%d",&a);
        pyramid(a);
        break;

    }
}

int main()
{
    int x=0;//option  keyword
    system("color 0A");
    system("Title Tool Box");
    while(1)
    {
        header();
        option(x);
        printf("Enter Option No.: ");
        scanf("%d",&x);
        if(x==999)
        {
            break;
        }
    }
    exits();
}
