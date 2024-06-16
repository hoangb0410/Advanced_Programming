void reverse(char* str) 
{
    if (!*str) 
    {
        return;
    }
    char* begin = str;
    char* end = begin + strlen(str) - 1;
    while (begin < end) 
    {
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}