#include<stdio.h>
#include<math.h>

void main()
{
    int start, end, i, temp1, temp2,rem, n=0, result=0, sum=0;
    printf("Enter start and end value:");
    scanf("%d%d",&start,&end);
    printf("\nArmstrong numbers between %d and %d are:",start,end);
    for(i = start + 1;i < end;++i)
    {
        temp2=i;
        temp1=i;
        while(temp1 !=0 )
        {
            temp1 /=10;
            ++n;
        }
        while(temp2 != 0)
        {
            rem = temp2 %10;
            result += pow(rem, n);
            temp2 /=10;
        }
        if(result == i)
        {
            sum +=result;
            printf("\n%d",i);
        }
        n=0;
        result = 0;
    }
    printf("\nSum =%d",sum);
}