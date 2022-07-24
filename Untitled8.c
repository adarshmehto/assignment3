int main()
{
    int x;
    printf("Enter a year:");
    scanf("%d",&x);
    if(x%100==0)
    {
        if(x%400==0)
            printf("Leap year");
        else
            printf("Not a leap year");
    }
    else if(x%4==0)
        printf("Leap year");
    else
        printf("Not a leap year");
}
