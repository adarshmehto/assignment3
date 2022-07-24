int main()
{
    char m;
    printf("Enter a character:");
    scanf("%c",&m);
    if(m>=97 || m>=65&&m<=90)
        printf("Alphabet");
    else if(m>=32&&m<=47 || m>=58&&m<=64)
        printf("Special character");
    else if(m>=48)
        printf("Number");
}
