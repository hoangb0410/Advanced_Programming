void printArrow(int n, bool left)
{
    int i, j, k;  
    if (left==true)
    {
        for(i = 1; i <= n; i++)
        {
        	for(j = 1; j <= n - i; j++)
                cout << " ";
            for(k = i; k <= n; k++)
                cout << "*";
            cout << "\n";
        }	
        for(i = 1; i < n; i++)
        {
        	for(j = 0; j < i; j++)
                cout << " ";
            for(k = 0; k <= i; k++)
                cout << "*";
            cout << "\n";
        }
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            for(k = 0; k <i; k++)
                cout << "  ";
        	for(j = i; j < n; j++)
                cout << "*";
            cout << "\n";
        }	
        for(i = 1; i < n; i++)
        {
            for(j = i+1; j < n; j++)
                cout << "  ";
            for(k = 0; k <=i; k++)
                cout << "*";
            cout << "\n";
        }
    }
    return;
}