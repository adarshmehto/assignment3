int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x&1==1)
        printf("odd");
    else
        printf("even");
}
