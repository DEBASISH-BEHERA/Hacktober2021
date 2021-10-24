#include <stdio.h>

int main()
{
    
    int array[20];//Declare array for 20 inputs
    float average;
    int sum=0;
    int pos_tot=0;
    int neg_tot=0;
    int zero_tot=0;
    /*Declare variables for average value
    total number of positives, negatives, and zeros */
    for(int i=0; i<20; i++)//Declare for loop for get 20 inputs
    {
        printf("%d number : ",i+1);
        scanf("%d",&array[i]);
        sum=sum+array[i];
        if(array[i]==0)
            zero_tot++;
        else if(array[i]>0)
            pos_tot++;
        else
            neg_tot++;

    }
    average=sum/20;//average calculate
    printf("Average = %.2f \n",average);//display average
    printf("Total of Positives = %d\n",pos_tot);//display Total of Positives
    printf("Total of Negetives = %d\n",neg_tot);//display Total of Negetives
    printf("Total of Zeros = %d\n",zero_tot);//display Total of Zeros

  

    return 0;
}
