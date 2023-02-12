void rFilter(char *s)
{
    if (!*s) 
    {
        return;
    }
    char* begin = s;
    char* end = begin + strlen(s) - 1;
    while ((int(*end)<65)||((int(*end)>90)&&(int(*end)<97))||int(*end)>122)
    {
        *end='_';
        end--;
    }
}