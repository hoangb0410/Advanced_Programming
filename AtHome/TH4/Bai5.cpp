bool isPrime (int number)
{
    if (number<=1)
        return false;
    bool checkPrime = true;
    for (int i=2;i<=sqrt(number);i++)
        if (number%i==0)
            {
                checkPrime = false;
                break;
            }
    return checkPrime;
}