#include <stdio.h>
int largest(int a,int b,int c) 
{
    return (a>b && a>c) ? a:(b>a && b>c) ? b:c;
}
int main()
 {
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The largest number is: %d\n", largest(a, b, c));
    return 0;
}