#include<stdio.h>
int main()
{
    int maths,science;
    printf("Enter marks of Maths:  ");
    scanf("%d",&maths);
    printf("\nEnter marks of Science:  ");
    scanf("%d",&science);

    //passing marks is 33

    if(maths>33 && science>33)
    {
        printf("You win Rs.45");
    }
    else if (maths>33 || science>33)
    {
        printf("You win Rs.15");
    }
    else
    {
        printf("You lose!!!");
    }
    
    

}