int ft_numlen(long n)
{
    int len;

    len = 0;
    if (n == 0)
        return(1);
    if (n < 0)
    {
        len++;
        n = -n;
    }
    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    return(len);
}

int ft_hexlen(unsigned long n)
{
    int len;

    len = 0;
    if (n == 0)
        return(1);
    while (n > 0)
    {
        n = n / 16;
        len++;
    }
    return(len);
}