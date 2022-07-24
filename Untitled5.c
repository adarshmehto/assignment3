int main()
{
    int x,i=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x)
    {
        x=x/10;
        i++;
    }
    if(i==3)
        printf("It is a 3 digit number");
    else
        printf("Not a 3 digit number");
}
