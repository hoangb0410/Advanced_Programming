long long int factorial(int n)
{
    long long int result=1;
    for (long long i=2;i<=n;i++)
        result = result * i;
    return result;
}