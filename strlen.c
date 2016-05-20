
/*strlen : return lemght of string s */

int strlen(char *str)
{
    char *p = s;
    while(*p!= '\0')
        p++;
    return p-s;
}
