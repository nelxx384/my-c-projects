#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*void tempo (int *a, int *b){

 int temp;

   temp=*a;
   *a=*b;
   *b=temp;

//return;


}
int main()
{
   int x = 10;
   int y=20;
   int *ptrx=&x;
   int *ptry=&y;

   printf("Before x=%d ,y=%d\n",x , y);
   tempo(ptrx,ptry);
   printf("After x=%d ,y=%d",x,y);

}
*/
/*void len (char *p){

int count=0;

int i;
while (*p!='\0'){
        p++;
    count++;
}
printf("The length of the string = %d",count);




}
int main (){

char x[]="nirmin";
char *ptr=x;
len(ptr);
*/

/*
int main (){
char x[]="nemo";
char *ptr=x;
while (*ptr!='\0'){
printf("character %c is in adresss %p\n",*ptr,ptr);
ptr++;

}



}
*/
/*
# define size 5
int main (){

int num [size];
int *ptr=num;
printf("Enter a set of numbers that doesnt exceed the size");
for(int i=0;i<size;i++){
    scanf("%d",ptr+i);
    printf("value=%d  add=%p\n ",*(ptr+i),ptr+i );
}




}
*/
/*
// Online C compiler to run C program online
//Write a C program to read 5 integers into an array and print the largest and smallest number.
#include <stdio.h>

int main()
{
   int num;
   int sum=0;
   printf("Enter  numbers\n");

   while(scanf("%d",&num)!=EOF)
   {
       sum+=num;
   }
     printf("TOTAL= %d\t",sum);
}

*/

/*
int main()
{
    int x=0;
    for(int i=2;i<=100;i+=2)
    {
        x+=i;
    }
    printf("SUM= %d",x);
}

*/
/*
#include <math.h>
int main()
{
    double p=1000.00;
    double r=0.05;
    int n=1;
    double a;


    printf("%s %25s ","year","amount on deposit");

    for(;n<=10;n++)
    {
        a=p*pow((1+r),n);
        printf("\n%d %25.2lf\n",n,a);
    }

}
*/
/*
int main()
{
    for (int row=1;row<=3;row++)
    {
        printf("ROW %d :  ",row);
        for(int colum=1;colum<=5;colum++)
        {
            printf("%4d",colum);

        }
        printf("\n");
    }
}
*/
/*

int main()

{
        int counter=1;
    do{

        printf("%d",counter);
        counter++;

    } while(counter<=5);
}

*/
/*

int main()
{   int n;
    printf("Enter a num bet 1 and 9");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int colum=1;colum<=n;colum++)
        {   if(colum<=row)
            printf(" ");
            else
                printf("*");

        }
        printf("\n");
    }
}*/

/*
int main()
{
    int n;
    printf("Enter a num bet 1 and 9");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int colum=n;colum>=row;colum--)
        {
            printf("*");
        }printf("\n");
    }
}
*/

/*

int main()
{
    int enday=29;
    int count=1;
    printf("%s %s %s %s %s %s %s\n","sun","Mon","Tue","Wed","Thu","Fri","Sat");
    printf("--- --- --- --- --- --- ---\n");
    printf("        ");
    //printf("\n");



    for(int day=1


      ;day<=enday;day++)
    {
     if(count>6)
     {  printf("\n");
       count=1;

     }

     else{
            count++;

        }
       printf("%3d ",day);
    }
    printf("\n--- --- --- --- --- --- ---");
}
*/
/*
int main()
{
    printf("Enter number and i will print it backward");
    scanf("%d
    for(int i=
}
*/
/*
#define n 6
int main()
        {

            int arr [n][n];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j){
                       arr[i][j]= 0;}
                    else if(i>j){
                        arr[i][j]= 1;
                    else (i<j)
                        arr[i][j]= -1;}
                }
            }

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("%3d",arr[i][j]);
                }
                printf("\n");
            }
}



/*
int main()
{  /*int sum=0;
    for(int i=6;i<=66;i++)
    printf("%3d",i);

    for(int i=15;i<=45;i++)
    if(i%2!=0)
    sum+=i;
    printf("TOTAL= %d",sum);
    int sum=0;
    for(int i=1;i<=50;i++)
    {  for(int j=1;j<=50;j+=3)
        sum+=j;
    }
    printf("TOTAL= %d",sum);

}
*/

/*
int main(){
int n;
int num;
int count=0;
int sum=0;
float avg;
printf("Enter a number of entries: ");
scanf("%d",&n);
printf("\n");
for(int i=1;i<=n;i++)
{
    printf("Please enter a number :");
    scanf("%d",&num);
    if(num<0)
    {
        count++;
        sum+=num;
    }

}
if(count!=0)
printf("AVG= %.3f",(float)sum/count);
else
    printf("NO NEGATIVE NUMBERS");

}
*/

/*
int main()
{
    for(int row=9;row>0;row--)
    {
        for(int colum=1;colum<=row;colum++)
            printf("%2d",colum);
            printf("\n");
    }

}

*/
/*
int main()
{
    int bmonth[1];
    int byear[1];
    int bday[1];
    int month[1];
    int year[1];
    int day[1];

    printf("Enter your birthdate m/b/y:\n");
    scanf("%d",&bmonth[1]);
    scanf("%d",&bday[1]);
    scanf("%d",&byear[1]);
    printf("Date of birth  m/b/y :%d %d %d\n",bmonth[1],bday[1],byear[1]);

    printf("Enter current date m/b/y:\n");
    scanf("%d",&month[1]);
    scanf("%d",&day[1]);
    scanf("%d",&year[1]);
    printf("Date of birth  m/b/y :%d %d %d\n",month[1],day[1],year[1]);

    int count[]={0, 31,59,90,120,151,181,212,243,273,303,334,365};
    int mb1=count[bmonth[1]-1]+bday;
    int mb2=count[month[1]-1]+day;

}
*/

/*
int main()
{   const int n=100;
    int arr[n];
    for(int i=0;scanf("%d",&arr[i]);i++)
    {


    }
}
*/
/*
void tri (int h)
{
    for(int row=h;row>=1;row--)
    {
        for(int colum=1;colum<=row;colum++ )
        printf("*");
        printf("\n");
    }

}


int main()
{
    int h;
    int width;
    printf("Enter the hight and width");
    scanf("%d",&h);

tri(h);

*/
/*
int main()
{
    int x;
int num;
scanf("%d",&num);
for(int i=1;i<=12;i++)
{
  printf("%d X %d= %d\n",i,num,i*num);
}
}
*/
/*
important
int main()
{
    int n;
    printf("Enter a digit\n");
    scanf("%d",&n);
    for(int row=n;row>0;row--)
    {
        for(int colum=1;colum<=row;colum++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/
/*

int main()
{
   int n;
    printf("Enter a digit\n");
    scanf("%d",&n);
    for(int row=n;row>0;row--)
    {
        for(int colum=1;colum<=row;colum++)
        printf("%d",colum);
        printf("\n");
    }
}

*/

/*
int main()
{
    char alpha='A';
    int n;
    scanf("%d",&n);
     int c=1;
     for(int i=1;i<=n;i++)
   {
       for(int blk=1;blk<=n-i;blk++)
        printf(" ");
       for(int j=0;j<=(c/2);j++)
        printf("%c",alpha++);
       alpha-=2;
       for(int j=0;j<(c/2);j++)
        printf("%c",alpha--);
       c+=2;
       alpha='A';
       printf("\n");

   }



    }
*/


/*
int main()
{

    //int max =0;
    int arr[3][3];
    printf("Enter a 2D array 3X3\n");
    for(int row=0;row<3;row++)
    {
        for(int colum=0;colum<3;colum++)
        scanf("%d",&arr[row][colum]);

    }

     for(int row=0;row<3;row++)

    {
        int max=arr[row][0];
        int count=0;
        for(int colum=0;colum<3;colum++)
        {
            if(arr[row][colum]>max)
            {
            max=arr[row][colum];
            }

        }
    for(int colum=0;colum<3;colum++)
    {
          if(arr[row][colum]==max)
        count++;
    }

    printf("%d %d\n",max,count);

    }

}

*/
/*

int main()
{   int n;
scanf("%d",&n);


    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];

    }
    int min=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];

    }
    printf("Max=%d\nMIN=%d",max,min);

}

*/
/*
int f (int x)
{
   int fact=1;
    for(int i=x;i>0;i--)
    {
      fact*=i;
    }
    return fact;
}
int main()
{

    int x;
    scanf("%d",&x);


printf("%d",f(x));

}

*/

int main(){
int x = 11;

if (x > 3)
    if (x < 10)
       printf("A");
else
    printf("B");



}





