char* remove_char(char* dst, const char* src)
{
    int i = 0;

    while(src[i+2] != '\0') 
    {
        dst[i] = src[i + 1];
        i++;
    }

    dst[i]= '\0';
    
    return dst;
}
