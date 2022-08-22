#include <stdio.h>
#include <stdlib.h>

char *ft_strcatsep(char *dest, char *src, char *sep)
{
    while (*dest)
        dest++;
    while (*src)
        *(dest++) = *(src++);
	while (*sep)
		*(dest++) = *(sep++);
	*dest = '\0';
    return dest;
}

int length(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int len_sep;
	char *pstr;

	len_sep = 0;
	while (*(sep++) != '\0')
		len_sep++;
	len = 0;
	i = 0;
	while (size--)
	{
		pstr = strs[i];
		while (*(pstr++) != '\0')
			len++;
		len += len_sep;
		i++;
	}
	len -= len_sep;		// this to take out separator after last str;
	return len + 1; 	// +1 for '\0' char;
}


char *ft_strjoin(int size, char **strs, char *sep)
{
	char *joined;
	char *pjoined;
	char *pstrs;
	int i;
	
	if (size == 0)
	{
		*strs = (char *) malloc (1);
		*(*strs) = '\0';
		return *strs;
	}
	joined = (char *) malloc(length(size, strs, sep));
	pjoined = joined;
	i = 0;
	while (size--)
		if (size > 0)
			pjoined = ft_strcatsep(pjoined, strs[i++], sep);  //return ptr to end of string;
		else
			pjoined = ft_strcatsep(pjoined, strs[i++], "\0");  //return ptr to end of string;
	return joined;
}


int main()
{
	char **strs = (char **) malloc(5 *sizeof(char*)); 
	strs[0] = "Hell";
	strs[1] = "Mamen";
	strs[2] = " 1 10391902ajd xklzc ;;; ";
	strs[3] = "just k";
	strs[4] = "fuck you mf";
	char *str = ft_strjoin(5, strs, "||YE||");
	printf("%s\n", str);
	return 0;
}
