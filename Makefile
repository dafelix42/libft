NAME = libft.a

CFLAG = -Wall -Werror -Wextra

INCLUDE = ./libft.h

FT_C = ft_atoi.c			\
	   ft_bzero.c			\
	   ft_countline.c		\
	   ft_countword.c		\
	   ft_isalnum.c			\
	   ft_isalpha.c			\
	   ft_isascii.c			\
	   ft_isdigit.c			\
	   ft_isprint.c			\
	   ft_itoa.c			\
	   ft_lstadd.c			\
	   ft_lstdel.c			\
	   ft_lstdelone.c		\
	   ft_lstiter.c			\
	   ft_lstmap.c			\
	   ft_lstnew.c			\
	   ft_lstsize.c			\
	   ft_memalloc.c		\
	   ft_memccpy.c			\
	   ft_memchr.c			\
	   ft_memcmp.c			\
	   ft_memcpy.c			\
	   ft_memdel.c			\
	   ft_memmove.c			\
	   ft_memset.c			\
	   ft_negpower.c		\
	   ft_power.c			\
	   ft_putchar.c			\
	   ft_putchar_fd.c		\
	   ft_putendl.c			\
	   ft_putendl_fd.c		\
	   ft_putnbr.c			\
	   ft_putnbr_fd.c		\
	   ft_putstr.c			\
	   ft_putstr_fd.c		\
	   ft_strcat.c			\
	   ft_strchr.c			\
	   ft_strclr.c			\
	   ft_strcmp.c			\
	   ft_strcpy.c			\
	   ft_strdel.c			\
	   ft_strdup.c			\
	   ft_strequ.c			\
	   ft_strinc.c			\
	   ft_strisalnum.c		\
	   ft_strisalpha.c		\
	   ft_strisascii.c		\
	   ft_strisdigit.c		\
	   ft_strisprint.c		\
	   ft_striter.c			\
	   ft_striteri.c		\
	   ft_strjoin.c			\
	   ft_strjoinfree.c		\
	   ft_strlcat.c			\
	   ft_strlen.c			\
	   ft_strmap.c			\
	   ft_strmapi.c			\
	   ft_strncat.c			\
	   ft_strncmp.c			\
	   ft_strncpy.c			\
	   ft_strndup.c			\
	   ft_strnequ.c			\
	   ft_strnew.c			\
	   ft_strnrepc.c		\
	   ft_strnstr.c			\
	   ft_strposic.c		\
	   ft_strrchr.c			\
	   ft_strrepc.c			\
	   ft_strrev.c			\
	   ft_strsplit.c		\
	   ft_strstr.c			\
	   ft_strsub.c			\
	   ft_strtrim.c			\
	   ft_swap.c			\
	   ft_tabdel.c			\
	   ft_tolower.c			\
	   ft_toupper.c

FT_O = $(FT_C:.c=.o)

all: $(NAME)

$(NAME): $(FT_O) 
	ar rc $(NAME) $(FT_O)
	ranlib $(NAME)

%.o: %.c
	gcc $(CFLAG) -I $(INCLUDE) -c $< -o $@

clean:
	rm -f $(FT_O)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)