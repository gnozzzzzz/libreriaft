FILES = ft_bzero ft_atoi \
		ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
		ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset \
		ft_strchr ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr \
		ft_tolower ft_toupper \
		ft_strdup ft_calloc \
		ft_substr ft_strjoin ft_strtrim \
		ft_split ft_itoa ft_strmapi ft_striteri \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

CFILES = $(addsuffix .c,$(FILES))
OFILES = $(addsuffix .o,$(FILES))
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(OFILES): $(CFILES)
	gcc -c $(CFLAGS) $(CFILES)

clean:
	rm $(OFILES)

fclean: clean
	rm $(NAME)
	#rm .\a.exe

re: fclean all

.PHONY:  all clean fclean re

mimain:
	gcc mimain.c -L. -lft

#gcc mimain.c -L. -lft
