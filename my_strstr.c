#include "my_strstr.h"

int my_strstr(const char *haystack, const char *needle)
{
    if (needle[0] == 0)
        return 0;
    for (int i = 0; haystack[i] != 0; i++)
    {
        if (haystack[i] == needle[0])
        {
            char vrai = 0;
            for (int j = 1; needle[j] != 0; j++)
            {
                if (!(needle[j] == haystack[i + j]))
                {
                    vrai = 1;
                    break;
                }
            }
            if (vrai == 0)
                return i;
        }
    }
    return -1;
}
