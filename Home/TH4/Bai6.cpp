double calculate (double num1, char operat, double num2)
{
    switch (operat)
    {
        case '+':
            return num1+num2;
        case '-':
            return num1-num2;
        case '/':
            return double(num1)/num2;
        default:
            return num1*num2;
    }
}