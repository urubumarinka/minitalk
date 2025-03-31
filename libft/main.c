#include "libft.h"

int	main()
{
	/* int	i = 0;
	char *str = av[1];
	if (ac > 1) */
	{
		/* // TEST FOR FT_ISASCII

		while(str[i] != '\0')
		{
			if(ft_isascii(str[i]))
				(printf("%c is ascii\n", str[i]));
			else
				(printf("%c is not ascii\n", str[i]));
			i++;
		} */


		/* // TEST FOR FT_STRLEN

		unsigned char *str = (unsigned char *)av[1];
		i = 0;
		printf("%zu is strlen output", ft_strlen((const char*)str)); */


		/* // TEST FOR FT_MEMESET

		unsigned char *str = (unsigned char*)av[1];
		ft_memset(str, 'd', 10);
		printf("%s is output of memeset\n", str);
		ft_memset(str, 'd', 0);
		printf("%s is output of memeset\n", str);
		ft_memset(str, ' ', 10);
		printf("%s is output of memeset\n", str);
		ft_memset(str, 'd', -10);
		printf("%s is output of memeset\n", str);
		memset(str, 'a', 10); //comparasion to original function
		printf("%s is output of memeset\n", str);
		memset(str, 'a', -10); //orignal gives diff output when neg size_t is used
		printf("%s is output of memeset\n", str); */

		/* //TEST FOR FT_BZERO
		char str2[] = "Hello, World!";
		ft_bzero(str2, 1);
		printf("%s\n", str2);
		char str3[] = "Hello, World!";
		bzero(str3, 1);
		printf("%s\n", str3); */


		/* //TEST FOR FT_MEMCPY.C
		char	dest[15] = "Hello, World!";
		const char	*src = "Wasup";
		ft_memcpy(dest, src, 5);
		printf("dest: %p, src: %p, n: %zu\n", dest, src, n);
		printf("Dest: %s\n", dest);
		memcpy(dest, src, 5);
		printf("Dest: %s\n", dest);

		ft_memcpy(dest, src, 10);
		printf("Dest: %s\n", dest);
		memcpy(dest, src, 10);
		printf("Dest: %s\n", dest);
		return (0); */

		/* //	TEST FOR FT_MEMMOVE

		//char dst[150] = "Geeksfor";
		char src[100] = "HelloWorld";
		ft_memmove(src+5, src, strlen(src)+1);
		printf("%s\n", src);

		//char dst2[150] = "Geeksfor";
		char src2[100] = "HelloWorld";
		memmove(src2+5, src2, strlen(src2)+1);
		printf("%s\n", src);

		char csrc2[100] = "HelloWorld";
		ft_memmove(csrc2+5, csrc2, strlen(csrc2)+1);
		printf("%s\n", csrc2);

		char csrc[100] = "HelloWorld";
		memmove(csrc+5, csrc, strlen(csrc)+1);
		printf("%s\n", csrc); */

		//TEST FOR FT_STRLCPY

		/* char dest[100] = "HelloWorld!";
		char src[100] = "opala";
		printf("%zu\n",ft_strlcpy(dest, src, 3));
		printf("Copied String: %s\n", dest);
		char dest2[100] = "HelloWorld!";
		char src2[100] = "opala";
		printf("%zu\n",strlcpy(dest, src, 3));
		printf("Copied String: %s\n", dest); */

		/* printf("%zu\n",ft_strlcpy(dest, src, 10));
		printf("Copied String: %s\n", dest);
		printf("%zu\n",strlcpy(dest, src, 10));
		printf("Copied String: %s\n", dest);

		printf("%zu\n",ft_strlcpy(dest, src, 0));
		printf("Copied String: %s\n", dest);
		printf("%zu\n",strlcpy(dest, src, 0));
		printf("Copied String: %s\n", dest); */

		/* //TEST FOR FT_STRLCAT // use flag -lbsd

		char dest[100] = "Hello, ";
		char src[100] = "opala";
		printf("Test 1 %zu\n",ft_strlcat(dest, src, 3));
		printf("Copied String: %s\n", dest);

		char dest2[100] = "Hello, ";
		char src2[100] = "opala";
		printf("Test 1 sys func %zu\n",strlcat(dest2, src, 3));
		printf("Copied String: %s\n", dest2);

		char dest3[100] = "Hello, ";
		char src3[100] = "opala";
		printf("Test 2 %zu\n",ft_strlcat(dest, src, 0));
		printf("Copied String: %s\n", dest);

		char dest4[100] = "Hello, ";
		char src4[100] = "opala";
		printf("Test 2 sys func %zu\n",strlcat(dest2, src, 0));
		printf("Copied String: %s\n", dest2);

		char dest5[100] = "";
		char src5[100] = "opala";
		printf("Test 3 %zu\n",ft_strlcat(dest, src, 6));
		printf("Copied String: %s\n", dest);

		char dest6[100] = "";
		char src6[100] = "opala";
		printf("Test 3 sys func %zu\n",strlcat(dest2, src, 6));
		printf("Copied String: %s\n", dest2);

		char dest7[100] = "Hello, ";
		char src7[100] = "opala";
		printf("Test 4 %zu\n",ft_strlcat(dest, src, 16));
		printf("Copied String: %s\n", dest);

		char dest8[100] = "Hello, ";
		char src8[100] = "opala";
		printf("Test 4 sys func %zu\n",strlcat(dest2, src, 16));
		printf("Copied String: %s\n", dest2); */

		/* //TEST FOR FT_TOUPPER

		printf("%c\n", ft_toupper('H'));
		printf("%c\n", toupper('H')); */

		/* //TEST FOR FT_TOLOWER

		printf("%c\n", ft_tolower('0'));
		printf("%c\n", tolower('0')); */

		/* //TEST FOR FT_STRCHR

		printf("%s\n", ft_strchr("Hello", 'e'));
		printf("%s\n", strchr("Hello", 'e')); */

		/* //TEST FOR FT_STRRCHR

		printf("%s\n", ft_strrchr("H el lo", ' '));
		printf("%s\n", strrchr("H el lo", ' ')); */

		/* //TEST FOR FT_STRNCMP

		printf("%d\n", ft_strncmp("", "Hello", 7));
		printf("%d\n", strncmp("", "Hello", 7)); */

	/* 	//TEST FOR FT_MEMCHR

		printf("%p\n", ft_memchr("hello", 'h', 20));
		printf("%p\n", memchr("hello", 'h', 20)); */

		/* //TEST FOR FT_MEMCMP

		printf("%d\n", ft_memcmp("hello", "helLo", 2));
		printf("%d\n", memcmp("hello", "helLo", 2));

		printf("%d\n", ft_memcmp("hello", "hello", 20));
		printf("%d\n", memcmp("hello", "hello", 20));

		printf("%d\n", ft_memcmp("helLo", "hello", 20));
		printf("%d\n", memcmp("helLo", "hello", 20));

		printf("%d\n", ft_memcmp("hello", "helloww", 20));
		printf("%d\n", memcmp("hello", "helloww", 20));
		*/

		/* //TEST FOR FT_STRNSTR

		printf("%s\n", ft_strnstr("hello", "helLo", 2));
		printf("%s\n", strnstr("hello", "helLo", 2));

		printf("%s\n", ft_strnstr("hellolove", "hello", 20));
		printf("%s\n", strnstr("hellolove", "hello", 20));

		printf("%s\n", ft_strnstr("helLo", "", 20));
		printf("%s\n", strnstr("helLo", "", 20));

		printf("%s\n", ft_strnstr("hello", "helloww", 8));
		printf("%s\n", strnstr("hello", "helloww", 8));

		const char *big = "Hello, world!";
		const char *little = "world";
		size_t len = 14;

		// Test the standard strnstr
		printf("Standard strnstr: %s\n", strnstr(big, little, len));

		// Test your ft_strnstr
		printf("My ft_strnstr: %s\n", ft_strnstr(big, little, len));

		// Additional edge cases
		printf("Empty little: %s\n", ft_strnstr(big, "", len)); // Should return big
		printf("Not found:    %s\n", ft_strnstr(big, "xyz", len)); // Should return NULL
		printf("Partial len:  %s\n", ft_strnstr(big, "world", 5)); // Should return NULL */

		/* // TEST FOR FT_ATOI

		printf("%d\n", ft_atoi("   	\v\f\r\n123567ghtd23453"));
		printf("%d\n", atoi("   	\v\f\r\n123567ghtd23453"));

		printf("%d\n", ft_atoi("42"));
		printf("%d\n", atoi("42"));

		printf("%d\n", ft_atoi("-42"));
		printf("%d\n", atoi("-42"));

		printf("%d\n", ft_atoi("   +123"));
		printf("%d\n", atoi("   +123"));

		printf("%d\n", ft_atoi("   -567"));
		printf("%d\n", atoi("   -567"));

		printf("%d\n", ft_atoi("   +000567"));
		printf("%d\n", atoi("   +000567"));

		printf("%d\n", ft_atoi("0"));
		printf("%d\n", atoi("0"));

		printf("%d\n", ft_atoi("0000"));
		printf("%d\n", atoi("0000"));

		printf("%d\n", ft_atoi("   "));
		printf("%d\n", atoi("   "));

		printf("%d\n", ft_atoi("123abc456"));
		printf("%d\n", atoi("123abc456"));

		printf("%d\n", ft_atoi("abc123"));
		printf("%d\n", atoi("abc123"));

		printf("%d\n", ft_atoi(""));
		printf("%d\n", atoi(""));

		printf("%d\n", ft_atoi("2147483647"));
		printf("%d\n", atoi("2147483647"));

		printf("%d\n", ft_atoi("-2147483648"));
		printf("%d\n", atoi("-2147483648"));

		printf("%d\n", ft_atoi("2147483648"));
		printf("%d\n", atoi("2147483648"));

		printf("%d\n", ft_atoi("-2147483649"));
		printf("%d\n", atoi("-2147483649"));

		printf("%d\n", ft_atoi("+-42"));
		printf("%d\n", atoi("+-42"));

		printf("%d\n", ft_atoi("+"));
		printf("%d\n", atoi("+"));

		printf("%d\n", ft_atoi("-"));
		printf("%d\n", atoi("-"));

		printf("%d\n", ft_atoi("   \t\n\r\v\f42"));
		printf("%d\n", atoi("   \t\n\r\v\f42"));

		printf("%d\n", ft_atoi("123\0abc"));
		printf("%d\n", atoi("123\0abc"));

		printf("%d\n", ft_atoi("99999999999999999999999")); // TEST NOT WORKING -159383553 when should be -1
		printf("%d\n", atoi("99999999999999999999999")); */

		//TEST FOR FT_CALLOC

		int	*array;
		size_t	i;
		size_t	nmemb;

		nmemb = 200000;
		i = 0;
		array = (int *)ft_calloc(nmemb, sizeof(int));
		while(i < nmemb)
		{
			printf("%d", array[i]);
			i++;
		}
		printf("\n");
		printf("%p", array);
		printf("\n");
		free(array);

		//TEST FOR FT_STRDUP

		char	*str;

		str = ft_strdup("Oi gente linda");
		printf("Pointer is %p and str is %s", str, str);
		free(str);

		//TEST FOR FT_SUBSSTR

		char	*strsub = ft_substr("lorem ipsum dolor sit amet", 7, 10);

		if (strsub != NULL)
		{
			printf("%s\n", strsub);
			free(strsub);
		}

		 //TEST FOR FT_STRJOIN

		char *	strjoin = ft_strjoin("Bom Dia,", " meus queridos!");
		printf("%s\n", strjoin);
		free(strjoin);

		strjoin = ft_strjoin("", " meus queridos!");
		printf("%s\n", strjoin);
		free(strjoin);

		strjoin = ft_strjoin("Bom dia", "");
		printf("%s\n", strjoin);
		free(strjoin);

		strjoin = ft_strjoin("", "");
		printf("%s\n", strjoin);
		free(strjoin);

		//TEST FOR FT_STRTRIM

		char *strtrim = ft_strtrim("erereeeeOi gente lindarereeereee", "er");
		printf("%s\n", strtrim);
		free(strtrim);

		strtrim = ft_strtrim("", "er");
		printf("%s\n", strtrim);
		free(strtrim);

		strtrim = ft_strtrim("   \t\n   ", " \t\n");
		printf("%s\n", strtrim);
		free(strtrim);

		strtrim = ft_strtrim("abcdef", "xyz");
		printf("%s\n", strtrim);
		free(strtrim);

		//TEST FOR FT_SPLIT
		char	**arraysplit;
		int		i2;

		arraysplit = ft_split("Hello,42,World", ',');
		if (!arraysplit)
			return (1);
		i2 = 0;
		while (arraysplit[i2])
		{
			printf("%s\n", arraysplit[i2]);
			free(arraysplit[i2]);
			i2++;
		}
		free(arraysplit);

		//TEST FOR FT_ITOA

		char *itoastr = ft_itoa(123865);
		printf("%s\n", itoastr);
		free(itoastr);

		itoastr = ft_itoa(-123865);
		printf("%s\n", itoastr);
		free(itoastr);

		itoastr = ft_itoa(6);
		printf("%s\n", itoastr);
		free(itoastr);

		itoastr = ft_itoa(0);
		printf("%s\n", itoastr);
		free(itoastr);

		itoastr = ft_itoa(-2147483648);
		printf("%s\n", itoastr);
		free(itoastr);


		//TEST FOR FT_STRMAPI

		//you find it on the main inside the function file

		//TEST FOR FT_STRITERI

		//You find it on the main inside the function file

		/* //TEST FOT FT_PUTCHAR_FD

		ft_putchar_fd('m', 1);

		//TEST FOR FT_PUTSTR_FD

		ft_putstr_fd("Oi gente linda!", 1);

		//TEST FOR FT_PUTENDL_FD

		ft_putendl_fd("Oi gente linda!", 1);

		//TEST FOR FT_PUTNBR_FD

		ft_putnbr_fd(-2147483648, 1); */
	}
return (0);
	}
