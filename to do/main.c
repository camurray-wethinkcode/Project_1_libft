#include "libft.h"
#include <string.h>
#include <ctype.h>

/*
	this test requires you to read it to understand it's output. It's worth it though as it catches a few things the others don't.
	obviously use it in conjunction with other tests as this is not exhaustive.
	if you have an issue with the difficulty to use this test remember that 42 rewards critical thinking and initiative. 
	If you still disagree with my methodology then poc or gtfo
*/

void	test_test()
{
	ft_putendl("memcmp");
	char    buf1[11];
	char    buf2[11];
	bzero(buf1+1, 10);
	bzero(buf2+1, 10);
	buf1[0] = 'f';
	buf2[0] = 'l';
	ft_putendl("t1");
	ft_putendl(memset(buf1+1, 'c', 6));
	ft_putendl("t2");
	ft_putendl(ft_memset(buf2+1, 'c', 6));
	buf1[6] = 'k';
	buf2[6] = 'k';
}

void	memcpy_test(void)
{
	char	buf1[10];
	char	buf2[10];

	ft_bzero(buf1, 10);
	ft_bzero(buf2, 10);
	buf1[0] = 'k';
	ft_putendl("start");
	if ((memcpy(buf1, buf2, 5)) != 0 && (ft_memcpy(buf1, buf2, 5) != 0))
		ft_putendl("kane was wrong");
	if ((memcpy(buf1, 0, 0)) != 0 && (ft_memcpy(buf1, 0, 0) != 0))
		ft_putendl("kane was wrong again");
	if ((memcpy(0, buf2, 0)) != 0 && (ft_memcpy(0, buf2, 0) != 0))
		ft_putendl("sawyer was wrong");
	ft_putendl("output");
	ft_putendl("GAS > NASM");
	ft_putendl(memcpy(buf1, buf2, 5));
	ft_putendl(ft_memcpy(buf1, buf2, 5));
	ft_putendl(memcpy(buf1, 0, 0));
	ft_putendl(ft_memcpy(buf1, 0, 0));
	ft_putendl(memcpy(0, buf2, 0));
	ft_putendl(ft_memcpy(0, buf2, 0));
}

void	memccpy_test(void)
{
	char	buf1[10];
	char	buf2[10];

	ft_bzero(buf1, 10);
	ft_bzero(buf2, 10);
	buf1[0] = 'k';
	ft_putendl("memccpy");
	ft_putendl("[");
	if ((memccpy(buf1, buf2, 48, 5)) != 0 && (ft_memccpy(buf1, buf2, 48, 0) != 0))
		ft_putendl("kane was wrong");
	if ((memccpy(buf1, 0, 48, 0)) != 0 && (ft_memccpy(buf1, 0, 48, 0) != 0))
		ft_putendl("kane was wrong again");
	if ((memccpy(0, buf2, 48, 0)) != 0 && (ft_memccpy(0, buf2, 48, 0) != 0))
		ft_putendl("sawyer was wrong");
	ft_putendl("]");
	buf2[4] = 'l';
	buf1[0] = 'l';
	buf2[0] = 'l';
	ft_putendl(memccpy(buf1, buf2, 108, 5));
	ft_putendl(ft_memccpy(buf1, buf2, 108, 5));
	ft_putendl("fire alarm");
	ft_putendl(memccpy(buf1, buf2, 100, 5));
	ft_putendl(ft_memccpy(buf1, buf2, 100, 5));
	ft_putendl(memccpy(buf1, 0, 1, 0));
	ft_putendl("mem");
	ft_putendl(ft_memccpy(buf1, 0, 1, 0));
	ft_putendl("cpy");
	ft_putendl(memccpy(0, buf2, 1, 0));
	ft_putendl(ft_memccpy(0, buf2, 1, 0));
	ft_putendl("is not the one being tested by this");
}

void	memchr_test(void)
{
	ft_putendl("memchr");
	char    buf1[10];
	char    buf2[10];
	bzero(buf1, 10);
	bzero(buf2, 10);
	buf1[0] = 'f';
	buf2[0] = 'l';
	ft_putendl("t1");
	ft_putendl(ft_memset(buf2, 'c', 6));
	ft_putendl("t2");
	ft_putendl(memset(buf1, 'c', 6));
	buf1[5] = 'k';
	buf2[5] = 'k';
	ft_putendl(memchr(buf1, 'k', 8));
	ft_putendl(ft_memchr(buf1, 'k', 8));
	ft_putendl(memchr(buf1, 0, 8));
	ft_putendl(ft_memchr(buf1, 0, 8));
}

void	memmove_test(void)
{
	ft_putendl("memmove");
	char    buf1[10];
	char    buf2[10];
	char	*ptr;
	char	*ptr2;
	bzero(buf1, 10);
	bzero(buf2, 10);
	buf1[0] = 'l';
	buf2[0] = 'f';
	buf1[7] = 'l';
	buf2[7] = 'f';
	ft_putendl("t1");
	ft_putendl(ft_memset(buf2, 'c', 6));
	ft_putendl("t2");
	ft_putendl(memset(buf1, 'c', 6));
	ptr = buf1 + 2;
	ptr2 = buf2 + 2;
	ft_putendl("IGNORE ME");
	ft_putendl(ptr);
	ft_putendl(ptr2);
	ft_putendl("IGNORE ME");
	ft_putendl("*******************");
	ft_putendl(memmove(buf1, ptr, 7));
	ft_putendl(ft_memmove(buf2, ptr2, 7));
	ft_putendl("*******************");
	ft_putendl(memmove(0, ptr2, 0));
	ft_putendl(memmove(buf1, 0, 0));
	ft_putendl("the following two lines should be the same as the above two");
	ft_putendl(ft_memmove(0, ptr2, 0));
	ft_putendl(ft_memmove(buf1, 0, 0));
}

void	memcmp_test()
{
	ft_putendl("memcmp");
	char    buf1[10];
	char    buf2[10];
	bzero(buf1, 10);
	bzero(buf2, 10);
	buf1[0] = 'f';
	buf2[0] = 'l';
	ft_putendl("t1");
	ft_putendl(memset(buf1, 'c', 6));
	ft_putendl("t2");
	ft_putendl(ft_memset(buf2, 'c', 6));
	buf1[5] = 'k';
	buf2[5] = 'k';
	if (!memcmp(buf1, buf2, 10))
		ft_putendl("it works");
	if (!ft_memcmp(buf1, buf2, 10))
		ft_putendl("it works");
	if (!memcmp(buf1, 0, 0))
		ft_putendl("what do you know, it worked again");
	if (!ft_memcmp(buf1, 0, 0))
		ft_putendl("what do you know, it worked again");
	if (!memcmp(0, buf2, 0))
		ft_putendl("success happens twice");
	if (!ft_memcmp(0, buf2, 0))
		ft_putendl("success happens twice");
}

void	strlen_test()
{
	ft_putendl("strlen");
	char    buf1[11];
	char    buf2[11];
	bzero(buf1+1, 10);
	bzero(buf2+1, 10);
	buf1[0] = 'f';
	buf2[0] = 'l';
	ft_putendl("t1");
	ft_putendl(memset(buf1, 'c', 6));
	ft_putendl("t2");
	ft_putendl(ft_memset(buf2, 'c', 6));
	buf1[5] = 'k';
	buf2[5] = 'k';
	ft_putnbr(strlen(buf1));
	ft_putendl("");
	ft_putnbr(ft_strlen(buf2));
	ft_putchar('\n');
}

void	strdup_test()
{
	ft_putendl("strdup");
	char    buf1[11];
	char    buf2[11];
	bzero(buf1+1, 10);
	bzero(buf2+1, 10);
	buf1[0] = 'f';
	buf2[0] = 'l';
	ft_putendl("t1");
	ft_putendl(memset(buf1+1, 'c', 6));
	ft_putendl("t2");
	ft_putendl(ft_memset(buf2+1, 'c', 6));
	buf1[6] = 'k';
	buf2[6] = 'k';
	ft_putendl(strdup(buf1));
	ft_putendl(ft_strdup(buf2));
}

void	str_test()
{
	ft_putendl("strcat, strncat, strlcat, strchr, strrchr, strstr, strnstr, strcmp, strncmp");
	char    buf1[100];
	char    buf2[100];
	bzero(buf1+1, 10);
	bzero(buf2+1, 10);
	buf1[0] = 'f';
	buf2[0] = 'l';
	ft_putendl("t1");
	ft_putendl(memset(buf1+1, 'c', 6));
	ft_putendl("t2");
	ft_putendl(ft_memset(buf2+1, 'c', 6));
	buf1[6] = 'k';
	buf2[6] = 'k';
	ft_putendl(buf1);
	ft_putendl(buf2);
	ft_putendl(strcat(buf1, buf2));
	ft_putendl(ft_strcat(buf1, buf2));
	ft_putendl(strncat(buf1, buf2, 2));
	ft_putendl(ft_strncat(buf1, buf2, 2));
	ft_putnbr(strlcat(buf1, buf2, 0));
	ft_putchar('\n');
	ft_putendl(buf1);
	ft_putnbr(ft_strlcat(buf1, buf2, 0));
	ft_putchar('\n');
	ft_putendl(buf1);
	ft_putendl("strchr, line 208");
	ft_putendl(strchr(buf1, 48));
	ft_putendl(ft_strchr(buf1, 48));
	ft_putendl(strchr(buf1, 107));
	ft_putendl(ft_strchr(buf1, 107));
	ft_putendl("strrchr");
	ft_putendl(strrchr(buf1, 48));
	ft_putendl("is it seg faulting here?");
	ft_putendl(ft_strrchr(buf1, 48));
	ft_putendl("or here?");
	ft_putendl(strrchr(buf1, 107));
	ft_putendl(ft_strrchr(buf1, 107));
	ft_putendl("strstr");
	ft_putendl(strstr("I am a string see me store signed bytes", "string"));
	ft_putendl(ft_strstr("I am a string see me store signed bytes", "string"));
	ft_putendl(strstr("String a ling a ling", "a"));
	ft_putendl(ft_strstr("String a ling a ling", "a"));
	ft_putendl(strstr("sawyer", "42"));
	ft_putendl(ft_strstr("sawyer", "42"));
	ft_putendl("strnstr");
	ft_putendl(strnstr("I am a string see me store signed bytes", "string", 16));
	ft_putendl(ft_strnstr("I am a string see me store signed bytes", "string", 16));
	ft_putendl(strnstr("String a ling a ling", "a", 2));
	ft_putendl(ft_strnstr("String a ling a ling", "a", 2));
	ft_putendl(strnstr("sawyer", "42", 2));
	ft_putendl(ft_strnstr("sawyer", "42", 2));
	ft_putendl("strcmp");
	ft_putnbr(strcmp("crunch", "fluff"));
	ft_putendl(" crunch fluff");
	ft_putnbr(ft_strcmp("crunch", "fluff"));
	ft_putendl(" crunch fluff");
	ft_putnbr(strcmp("table", "table"));
	ft_putendl(" table table");
	ft_putnbr(ft_strcmp("table", "table"));
	ft_putendl(" table table");
	ft_putnbr(strcmp("2112",""));
	ft_putendl(" 2112");
	ft_putnbr(ft_strcmp("2112", ""));
	ft_putendl(" 2112");
	ft_putendl("strncmp");
	ft_putnbr(strncmp("crunch", "fluff", 2));
	ft_putendl(" crunch fluff");
	ft_putnbr(ft_strncmp("crunch", "fluff", 2));
	ft_putendl(" crunch fluff");
	ft_putnbr(strncmp("table", "table", 2));
	ft_putendl(" table table");
	ft_putnbr(ft_strncmp("table", "table", 2));
	ft_putendl(" table table");
	ft_putnbr(strncmp("2112","", 2));
	ft_putendl(" 2112");
	ft_putnbr(ft_strncmp("2112", "", 2));
	ft_putendl(" 2112");
}

void	atoi_test()
{
	ft_putendl("atoi is evil");
	ft_putendl ("google it");
	char    buf1[11];
	char    buf2[11];
	bzero(buf1+1, 10);
	bzero(buf2+1, 10);
	buf1[0] = 'f';
	buf2[0] = 'l';
	ft_putendl("t1");
	ft_putendl(memset(buf1+1, 'c', 6));
	ft_putendl("t2");
	ft_putendl(ft_memset(buf2+1, 'c', 6));
	buf1[6] = 'k';
	buf2[6] = 'k';
	ft_putendl("word size set to 16");
	ft_putnbr(atoi("42"));
	ft_putendl(" words");
	ft_putnbr(ft_atoi("42"));
	ft_putendl(" I really need to write an ft_putnbrnl so I don't have to keep doing this");
	ft_putendl("fuck it I'm testing itoa now as well");
	ft_putendl("if the previous test displayed but these didn't the issue liekly lies with your itoa");
	ft_putendl("c standard library");
	ft_putendl(ft_itoa(atoi("-900")));
	ft_putendl(ft_itoa(atoi("-0")));
	ft_putendl(ft_itoa(atoi("1")));
	ft_putendl(ft_itoa(atoi("0")));
	ft_putendl(ft_itoa(atoi("+0")));
	ft_putendl(ft_itoa(atoi("2147483647")));
	ft_putendl(ft_itoa(atoi("-2147483648")));
	ft_putendl(ft_itoa(atoi("       +42klassic42")));
	ft_putendl("libft");
	ft_putendl(ft_itoa(ft_atoi("-900")));
	ft_putendl(ft_itoa(ft_atoi("-0")));
	ft_putendl(ft_itoa(ft_atoi("1")));
	ft_putendl(ft_itoa(ft_atoi("0")));
	ft_putendl(ft_itoa(ft_atoi("+0")));
	ft_putendl(ft_itoa(ft_atoi("2147483647")));
	ft_putendl(ft_itoa(ft_atoi("-2147483648")));
	ft_putendl(ft_itoa(ft_atoi("       +42klassic42")));
}

void	is_test(void)
{
	if (isalpha('c'))
		ft_putendl("c");
	if (ft_isalpha('c'))
		ft_putendl("c");
	if (isalpha('\n'))
		ft_putendl("danger will robinson");
	if (ft_isalpha('\n'))
		ft_putendl("danger will robinson");
	if (isdigit('c'))
		ft_putendl("danger zoneeeee");
	if (ft_isdigit('c'))
		ft_putendl("danger zoneeeee");
	if (isdigit(9))
		ft_putendl("yay");
	if (ft_isdigit(9))
		ft_putendl("yay");
	if (isalnum('c'))
		ft_putendl("woot");
	if (ft_isalnum('c'))
		ft_putendl("woot");
	if (isalnum(6))
		ft_putendl("high five!");
	if	(ft_isalnum(6))
		ft_putendl("high five!");
	if (isalnum('>'))
		ft_putendl("FAIL!");
	if (ft_isalnum('>'))
		ft_putendl("FAIL!");
	if (isascii(230))
		ft_putendl("lern 2 kode n00b");
	if (ft_isascii(230))
		ft_putendl("lern 2 kode n00b");
	if (isascii(127))
		ft_putendl("encouragement_message_1");
	if (ft_isascii(127))
		ft_putendl("encouragement_message_1");
	if (isprint('_'))
		ft_putendl("printable");
	if (ft_isprint('_'))
		ft_putendl("printable");
	if (isprint(127))
		ft_putendl("go drunk you're home");
	if (ft_isprint(127))
		ft_putendl("go drunk you're home");
	if (toupper('c') == 'C')
		ft_putendl("almost there");
	if (ft_toupper('c') == 'C')
		ft_putendl("almost there");
	if (toupper('C') == 'C')
		ft_putendl("https://42schoolusa.slack.com/messages/teamwork/details/");
	if (ft_toupper('C') == 'C')
		ft_putendl("https://42schoolusa.slack.com/messages/teamwork/details/");
	if (tolower('c') == 'c')
		ft_putendl("http://www.projectrho.com/public_html/rocket/");
	if (ft_tolower('c') == 'c')
		ft_putendl("http://www.projectrho.com/public_html/rocket/");
	if (tolower('C') == 'C')
		ft_putendl("http://www.projectrho.com/public_html/norocket/");
	if (ft_tolower('C') == 'C')
		ft_putendl("http://www.projectrho.com/public_html/norocket/");
	if (ft_tolower('9') == '9')
		ft_putendl("space is fun");
}

void	page10_test(void)
{
	void	*byte = (char*)ft_memalloc(2);
	ft_putendl((char*)ft_memalloc(3));
	ft_putendl("above should be a blank line");
	ft_memdel(&byte);
	ft_putendl((char*)byte);
	ft_putendl("the above should not seg fault, if you are reading this congrats it didn't");
	char	*str = ft_strnew(3);
	ft_putendl(str);
	ft_strdel(&str);
	ft_putendl("IGNORE ME");
	ft_putendl(str);
	ft_putendl("word size set to 64");
	char	*clr = ft_strnew(5);
	clr[0] = ':';
	ft_strclr(clr);
	ft_putendl(clr);
	ft_putendl("colon(:) is wrong-bad");
}

void	ft_striter_test(char *c)
{
	*c += 1;
}

void	ft_striteri_test(unsigned int i, char *c)
{
	*c += i;
	ft_putnbr(i);
}

char	 map_test(char c)
{
	return (c);
}

char	mapi_test(unsigned int i, char c)
{
	return (c + i);
}

void	page11_test()
{
	char	*str = ft_strnew(6);
	str = ft_strcpy(str, "hello");
	ft_putendl(str);
	ft_striter(str, &ft_striter_test);
	ft_putendl(str);
	ft_striteri(str, &ft_striteri_test);
	ft_putendl(" - 01234 = x if x = 0");
	ft_putendl(str);
	ft_putendl("frankly I'm running out of things to write");
	ft_putendl("https://forums.spacebattles.com/threads/athene-reads-a-desert-called-peace-god-have-mercy-on-her-soul.189449/");
	ft_putendl("^ Tom Kratman is crazy");
	ft_putendl(ft_strmap("Like he wrote Athene into a book to attack her and then outed her as trans because he has a google alert set up for his name", &map_test));
	ft_putendl(ft_strmapi("boredom", &mapi_test));
}

void	page12_test()
{
	ft_putendl("strequ");
	if (ft_strequ("day", "day"))
		ft_putendl("pass");
	if (ft_strequ("dat", "day"))
		ft_putendl("https://en.wikipedia.org/wiki/Juche");
	if (ft_strequ("vbravt", "kljh"))
		ft_putendl("double plus good");
	if (ft_strnequ("hg wells", "hg wells", 3))
		ft_putendl("pass");
	if (ft_strnequ("Satrap", "Despot", 2))
		ft_putendl("Basileus");
	ft_putendl("you should have passed twice here");
	if (ft_strnequ("Diarch", "Dune", 1))
		ft_putendl("++++++++++[>+++++++>+++>+++++++>++++++++++>+++++++++>+++++++++++>+++++++++++>++++++++++>++++++++++>+++>++++++>+++++++++++>+++++++++>++++++++++>+++++++++++>++++++++++>+++++++++++>+++++++++>++++++++++<<<<<<<<<<<<<<<<<<<-]>+++.>++.>++++++.>+.>+++++++.>++++.>.>+.>.>++.>++++++.>++++.>+++++++.>+++++.>.>++.>+++++++.>+++++++++.>+++++++.");
	ft_putendl("write a brainfuck interpreter to see if you passed, obviously if you don't see any brainfuck code something has gone horribly wrong");
	ft_putendl("_strsu");
	ft_putendl(ft_strsub("ft_strsub", 2, 6));
	ft_putendl(ft_strjoin("ft_", "strjoin works"));
}

void	str_split_test(void)
{
	char	**t;

	t = ft_strsplit("look mom my ft_strsplit works!", ' ');
	if (t[1] == 0)
		ft_putendl("whoops");
	ft_putendl(t[1]);
	while (*t)
	{
		ft_putendl(*t);
		t++;
	}
}

void	size_t_test(void)
{
	char	*str = ft_strnew(2147483649);
	if (str == 0)
	{
		ft_putendl("malloc failed, please close other open programs and try again");
		ft_putendl("malloc failed, please close other open programs and try again");
		ft_putendl("malloc failed, please close other open programs and try again");
		ft_putendl("malloc failed, please close other open programs and try again");
		ft_putendl("malloc failed, please close other open programs and try again");
		ft_putendl("malloc failed, please close other open programs and try again");
		ft_putendl("malloc failed, please close other open programs and try again");
		return ;
	}
	ft_memset(str, 99, 2147483648);
	if (ft_strlen(str) == 2147483648)
		ft_putendl("Success ignore what comes after this");
	else
		ft_putstr("INT_MIN, you failed, look at the test");
	ft_putendl(" should be 2147483648");
}

int		main(void)
{
	ft_putendl(" ");
	ft_putendl("if you seg fault below look at the difference between the above and below lines in the file");
	char *seg_fault;
	ft_putendl(seg_fault);
	ft_putendl("\n\n\n\n\n\n\n");
	ft_putendl("l is for libraray, f is for forty two, c is for character, k is for ok, d is for don't use printf");
	ft_putstr("gcc -O3 is your friend, you should always use it");
	ft_putchar('\n');
	ft_putendl_fd("the above was a lie", 1);
	ft_putstr_fd("the above was not a lie", 1);
	ft_putchar_fd('\n', 1);
	ft_putstr("we start with memcpy, some stuff gets tested by default so I didn't write test cases");
	ft_putendl("                       if you get an error ask");
	ft_putendl("\n\n\n\nif\nyou\nhave\nto\nask\nwhich\noutput\nis\nthe\nlibrary\n\tthen you haven't read the file");
	ft_putendl("--------------------------------------------------------------");
	memcpy_test();
	memccpy_test();
	memchr_test();
	memmove_test();
	memcmp_test();
	strlen_test();
	strdup_test();
	str_test();
	atoi_test();
	is_test();
	page10_test();
	page11_test();
	page12_test();
	ft_putendl("reading rainbow");
	ft_strsplit("$string $of $splittings", '$');
	str_split_test();
	ft_putendl("ignore the man behind the curtain");
	ft_putendl(ft_strtrim("      okely dokely      "));
	ft_putendl("testing for size_t");
	size_t_test();
	ft_putendl("-----------------------------------------------------------------------------------");
	ft_putendl("if you are having trouble reading the output use this shell script: ./a.out > out.txt");
	ft_putendl("if you open in vim you can press gg, v, shift+g, = to format everything as well but this will break the output of a test");
	ft_putendl("if you don't know which one you broke see the output of the one your broke");
	ft_putendl("for best results run thrice");
	ft_putendl("https://www.youtube.com/watch?v=gymNRI66BBk");
}
