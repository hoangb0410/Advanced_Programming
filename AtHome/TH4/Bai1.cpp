int maxThree(int a, int b, int c)
{
    if ((a>=b&&b>=c)||(a>=c&&c>=b))
        return a;
    else if ((b>=c&&c>=a)||(b>=a&&a>=c))
        return b;
    else
        return c;
}