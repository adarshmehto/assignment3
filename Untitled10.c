int main()
{
    float profit,loss,cp,sp;
    printf("Enter cost price:");
    scanf("%f",&cp);
    printf("Enter selling price:");
    scanf("%f",&sp);
    profit=sp-cp;
    loss=cp-sp;
    if(profit>=loss)
        printf("Profit percent is %f",profit/cp*100);
    else
        printf("Loss percent is %f",loss/sp*100);
}
