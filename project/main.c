#include<stdio.h>

#include<stdlib.h>





int min(int a,int b,int c)

{

    return (a>((b>c)?c:b))?((b>c)?c:b):a;

}

int getNthUglyNo(int n)

{

    int ugly[500];

    int i2=0,i3=0,i5=0,i=0;

    int next2=2;

    int next3=3;

    int next5=5;

    int nextUglyNo=1;

    ugly[0] = 1;

    for(i=1;i<n;i++)

    {

        nextUglyNo=min(next2,next3,next5);

        ugly[i]=nextUglyNo;

        if(nextUglyNo == next2)

        {

            i2 = i2+1;

            next2=ugly[i2]*2;

        }

        if(nextUglyNo == next3)

        {

            i3 = i3+1;

            next3=ugly[i3]*3;

        }if(nextUglyNo == next5)

        {

            i5 = i5+1;

            next5=ugly[i5]*5;

        }

    }

    return nextUglyNo;



}



int main()

{

    int n ,no;

    printf("Enter the number of the ugly number to be found:");

    scanf("%d",&n);

    no = getNthUglyNo(n);

    printf("%dth ugly no. is %d ",n,no);

    getchar();

    return 0;

}


