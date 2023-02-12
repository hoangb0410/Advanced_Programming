string pigLatin(string word)
{
    if (word[0]=='o'||word[0]=='u'||word[0]=='i'||word[0]=='a'||word[0]=='e')
        word=word+"way";
    else
    {
        char temp=word[0];
        for (int i=0;i<word.length()-1;i++)
            word[i]=word[i+1];
        word[word.length()-1]=temp;
        word=word+"ay";
    }
    return word;
}