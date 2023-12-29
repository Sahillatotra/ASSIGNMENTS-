#include <stdio.h>
int main()
 {
    int a,b,c,largest;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    largest=a;
    if(b > largest) 
    {
        largest=b; 
    }
    if(c>largest) 
    {
        largest=c;
    }
    printf("The largest number is: %d\n",largest);
    return 0;
}