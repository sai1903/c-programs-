void main()
{
    int i,a;
    printf("enter the fibonacci number\n");
    scanf("%d",&i);
    a=fact(i);
    printf("enter the fibonacci number %d is %d\n",i,a);

}

fact( int a)
{
        int b;
        b=a*fact(a-1);
}
