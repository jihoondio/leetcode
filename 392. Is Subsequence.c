bool isSubsequence(char *s, char *t)
{
    while (*s && *t)
    {
        if (*s == *t)
        {
            s++;
            t++;
        }
        else
        {
            t++;
        }
    }
    if (*s != '\0' && *t == '\0')
        return false;

    return true;
}