int lengthOfLastWord(char *s)
{
    int i = 0;
    int count = 0;
    if(*s == '\0')
        return count;
    while(s[i])
        i++;
    i--;
    while(i >= 0 && s[i] == ' ' && s[i] != 0)
        i--;
    while(i >= 0 && s[i] != ' ' && s[i] != 0)
    {
        count++;
        i--;
    }
    return count;
}


