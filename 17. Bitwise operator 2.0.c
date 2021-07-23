/**       AND     |     OR       |    X-OR
     A   B  OUT   |  A  B  OUT   |  A  B  OUT
     1   1   1    |  1  1   1    |  1  1   0
     1   0   0    |  1  0   1    |  1  0   1
     0   1   0    |  0  1   1    |  0  1   1
     0   0   0    |  0  0   0    |  0  0   0
*/
#include<stdio.h>                                                              
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter value's for bitwise operator - ");
    scanf("%d %d",&a,&b);

    printf("\nBITWISE AND OPERATOR - ");
    printf("%d",a&b);

    printf("\nBITWISE OR OPERATOR - ");
    printf("%d",a|b);

    printf("\nBITWISE X-OR OPERATOR - ");
    printf("%d",a^b);

    printf("\nBITWISE LEFT-SHIFT OPERATOR - ");
    printf("%d",a<<b);
    
    printf("\nBITWISE RIGHT-SHIFT OPERATOR - ");
    printf("%d",a>>b);
    getch();
}