#include<stdio.h>
void mainMenu(void)
{
 printf("\n");
 printf("=== Number Analyzer =======\n");
 printf("1. Prime Number\n");
 printf("2. Perfect Number\n");
 printf("3. Strong Number\n");
 printf("4. Armstrong Number\n");
 printf("5. Palindrome Number\n");
 printf("6. Exit\n");
 printf("****************** \n");
}

void subMenu(void)
{
 printf("1. Check Number\n");
 printf("2. Check Range\n");
 printf("3. Count \n");
 printf("4. Back\n");
 printf("-------------------------\n");
}

int Check_Prime(int *);
int Check_Perfect(int *);
int Check_Strong(int *);
int Check_Armstrong(int *);
int Check_Palindrome(int *);
void Prime_Range(int,int);
void Perfect_Range(int,int);
void Strong_Range(int,int);
void Armstrong_Range(int,int);
void Palindrome_Range(int,int);
int Prime_Count(int*, int*);
int Perfect_Count(int*, int*);
int Strong_Count(int*, int*);
int Armstrong_Count(int*, int*);
int Palindrome_Count(int*, int*);


int main(){
int choice,subChoice;
int num,start,end ;
while(1){
        mainMenu();
        printf("Enter Choice : \n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1: // Prime
                        subMenu();
                        scanf("%d",&subChoice);
                        switch(subChoice)
                        {
                                case 1:
                                        printf("Enter Number : ");
                                        scanf("%d",&num);
                                        if(Check_Prime( &num))
                                                printf("Prime Number\n");
                                        else
                                                printf("Not Prime\n");
                                        break;
                                case 2:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        Prime_Range(start,end);
                                        printf("\n");
                                        break;
                                case 3:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        int c=Prime_Count(&start, &end);
                                        printf("prime count=%d\n",c);
                                        break;
                                //case 4:
                                //      break;
                                default:
                                        printf("Invalid \n");
                                        break;
//                          break;
                          }
break;

                case 2: // Perfect
                        subMenu();
                        scanf("%d",&subChoice);
                        switch(subChoice)
                        {
                                case 1:
                                        printf("Enter Number : ");
                                        scanf("%d",&num);
                                        if(Check_Perfect( &num))
                                                printf("Perfect Number\n");
                                        else
                                                printf("Not Perfect\n");
                                        break;
                                case 2:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        Perfect_Range(start,end);
                                        break;
                                case 3:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        int c=Perfect_Count(&start, &end);
                                        printf("Perfect count=%d\n",c);
                                        break;
                                case 4:
                                        break;
                                default:
                                        printf("Invalid \n");
                                        break;
                         }
break;
                case 3: // Strong
                        subMenu();
                        scanf("%d",&subChoice);
                        switch(subChoice)
                        {
                                case 1:
                                        printf("Enter Number : ");
                                        scanf("%d",&num);
                                        if(Check_Strong( &num))
                                                printf("Strong Number\n");
                                        else
                                                printf("Not Strong\n");
                                        break;
                                case 2:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        Strong_Range(start,end);
                                        break;
                                case 3:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        int c=Strong_Count(&start, &end);
                                        printf("Strong count=%d\n",c);
                                        break;
                                case 4:
                                        break;
                                default:
                                        printf("Invalid \n");
                                        break;
                        }
break;

                case 4: // Armstrong
                        subMenu();
                        scanf("%d",&subChoice);
                        switch(subChoice)
                        {
                                case 1:
                                        printf("Enter Number : ");
                                        scanf("%d",&num);
                                        if(Check_Armstrong( &num))
                                                printf("Armstrong Number\n");

                                        else
                                                printf("Not Armstrong\n");
                                        break;
                                case 2:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        Armstrong_Range(start,end);
                                        break;
                                case 3:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        int c=Armstrong_Count(&start, &end);
                                        printf("Armstrong count=%d\n",c);
                                        break;
                                case 4:
                                        break;
                                default:
                                        printf("Invalid \n");
                                        break;
                        }
break;

                case 5: // Palindrome
                        subMenu();
                        scanf("%d",&subChoice);
                        switch(subChoice)
                        {
                                case 1:
                                        printf("Enter Number : ");
                                        scanf("%d",&num);
                                        if(Check_Palindrome( &num))
                                                printf("Palindrome Number\n");
                                        else
                                                printf("Not Palindrome\n");
                                        break;
                                case 2:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        Palindrome_Range(start,end);
                                        break;
                                case 3:
                                        printf("Enter Start End : ");
                                        scanf("%d%d",&start,&end);
                                        int c=Palindrome_Count(&start, &end);
                                        printf("Palindrome count=%d\n",c);
                                        break;
                                case 4:
                                        break;
                                default:
                                        printf("Invalid \n");
                                        break;
                        }
break;
                case 6:printf("Exit\n");
                       break;
                default :printf("Invalid option:\n");
                     break;
}
break;
}
return 0;
}

int Check_Prime(int *n)
{
int i;
for(i=2;i<*n;i++)
if(*n%i==0)
break;
if(*n==i)
return 1;
else
return 0;
}

int Check_Perfect(int *n)
{
int i,sum=0;
for(i=1;i<*n;i++)
if(*n%i==0)
sum=sum+i;
if(*n==sum)
return 1;
else
return 0;
}

int Check_Strong(int *n)
{
        int i,fact=1,sum=0,t;
        t=*n;
        for(;*n>0;*n/=10)
        {
                fact=1;
                i=*n%10;
                for(;i>0;i--)
                        fact=fact*i;
                sum+=fact;
        }
        if(t==sum)
                return 1;
        else
                return 0;
}

int Check_Armstrong(int *n)
{
        int i,c=0,a,t,prod=1,sum=0;
        t=a=*n;
        while(t){
                c++;
                t/=10;
        }
        for(;*n>0;*n/=10)
        {
                prod=1;
                i=*n%10;
                for(int j=c;j>0;j--)
                        prod=prod*i;
                sum+=prod;
        }
        if(sum==a)
                return 1;
        else
                return 0;
}

int Check_Palindrome(int *n)
{
int i,rev=0,a,t=*n;
for(;*n>0;*n/=10)
{
a=*n%10;
rev=rev*10+a;
}
if(t==rev)
return 1;
else
return 0;
}

void Prime_Range(int start,int end)
{
int i=start,j;
for(;i<=end;i++)
{
for(j=2;j<i;j++)
if(i%j==0)
break;
if(j==i)
printf("%d ",i);
}
}

void Perfect_Range(int start,int end)
{
        int i=start,sum=0,j=0;
        for(;i<=end;i++)
        {
                sum=0;
                for(j=1;j<i;j++)
                        if(i%j==0)
                                sum=sum+j;
                if(i==sum)
                        printf("%d ",sum);
        }
}


void Strong_Range(int start,int end)
{
        int i,fact=1,sum=0,t,n;
        t=start;
     for(;t<=end;t++)
{
        sum=0;
        for(n=t;n>0;n/=10)
        {
                fact=1;
                i=n%10;
                for(;i>0;i--)
                        fact=fact*i;
                sum+=fact;
        }
        if(t==sum)
        printf("%d ",t);
}
}


void Armstrong_Range(int start,int end)
{
        int i,c=0,a,t,n,prod=1,sum=0;
        t=start;
        for(;t<=end;t++)
        {
          int t1=t;
        c=0;
        a=t;
                while(t1){
                        c++;
                        t1/=10;
                }
                sum=0;
                for(n=t;n>0;n/=10)
                {
                        prod=1;
                        i=n%10;
                        for(int j=c;j>0;j--)
                                prod=prod*i;
                        sum+=prod;
                }
                if(sum==a)
                        printf("%d ",sum);
        }
}

void Palindrome_Range(int start,int end)
{
        int i=start,rev=0,a,t,n;
        for(;i<=end;i++)
        {
                rev=0;
                t=i;
                for(n=i;n>0;n/=10)
                {
                        a=n%10;
                        rev=rev*10+a;
                }
                if(t==rev)
                        printf("%d ",t);
        }
}



int Prime_Count(int *start,int *end)
{
int i=*start,j,cc=0;
for(;i<=*end;i++)
{
for(j=2;j<i;j++)
if(i%j==0)
break;
if(j==i)
cc++;;
}
return cc;
}

int Perfect_Count(int *start,int *end)
{
        int i=*start,sum=0,j=0,cc=0;
        for(;i<=*end;i++)
        {
                sum=0;
                for(j=1;j<i;j++)
                        if(i%j==0)
                                sum=sum+j;
                if(i==sum)
                cc++;
}
return cc;
}


int Strong_Count(int *start,int *end)
{
        int i,cc=0,fact=1,sum=0,t,n;
        t=*start;
     for(;t<=*end;t++)
{
        sum=0;
        for(n=t;n>0;n/=10)
        {
                fact=1;
                i=n%10;
                for(;i>0;i--)
                        fact=fact*i;
                sum+=fact;
        }
        if(t==sum)
        cc++;
}
return cc;
}


int Armstrong_Count(int *start,int *end)
{
        int i,c=0,cc=0,a,t,n,prod=1,sum=0;
        t=*start;
        for(;t<=*end;t++)
        {
          int t1=t;
        c=0;
        a=t;
                while(t1){
                        c++;
                        t1/=10;
                }
                sum=0;
                for(n=t;n>0;n/=10)
                {
                        prod=1;
                        i=n%10;
                        for(int j=c;j>0;j--)
                                prod=prod*i;
                        sum+=prod;
                }
                if(sum==a)
                cc++;

        }
return cc;
}


int Palindrome_Count(int *start,int *end)
{
        int i=*start,rev=0,a,t,n,cc=0;
        for(;i<*end;i++)
        {
                rev=0;
                t=i;
                for(n=i;n>0;n/=10)
                {
                        a=n%10;
                        rev=rev*10+a;
                }
                if(t==rev)
                cc++;
        }
return cc;
}

