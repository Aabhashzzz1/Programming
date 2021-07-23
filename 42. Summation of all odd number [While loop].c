void main()
{
    int i,j,odd=0;
    printf("Summation of all Odd numbers \n");
    printf("Enter Starting Number - ");
    scanf("%d",&i);
    printf("Enter Ending Number - ");
    scanf("%d",&j);
    while(i<=j)
    {
        if(i%2!=0)
        {
            odd = odd + i;
        }
        i++;
    }
    printf("Summation of all odd number - %d",odd);
    getch();
}
