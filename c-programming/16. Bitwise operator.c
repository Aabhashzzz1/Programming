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
    int a,b,c;
    printf("Enter value's for bitwise operator - ");
    scanf("%d %d",&a,&b);

    printf("\nBITWISE AND OPERATOR - ");
    c = a & b;
    printf("%d",c);

    printf("\nBITWISE OR OPERATOR - ");
    c = a | b;
    printf("%d",c);

    printf("\nBITWISE X-OR OPERATOR - ");
    c = a ^ b;
    printf("%d",c);

    printf("\nBITWISE LEFT-SHIFT OPERATOR - ");
    c = a << b;
    printf("%d",c);
    
    printf("\nBITWISE RIGHT-SHIFT OPERATOR - ");
    c = a >> b;
    printf("%d",c);
    getch();
}