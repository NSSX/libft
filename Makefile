NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC=ft_putchar.c ft_putstr.c ft_tolower.c \
ft_toupper.c ft_strlen.c \
        ft_memset.c ft_strcpy.c ft_isascii\
.c ft_isalpha.c ft_isdigit.c \
    ft_isalnum.c ft_isprint.c ft_putchar_f\
d.c ft_putstr_fd.c \
    ft_putendl.c ft_putendl_fd.c ft_strdup\
.c ft_bzero.c ft_putnbr.c \
    ft_strchr.c ft_strrchr.c ft_atoi.c ft_\
strdel.c ft_memcpy.c \
    ft_memalloc.c ft_strclr.c ft_strncpy.c\
 ft_memccpy.c ft_memmove.c \
    ft_memchr.c ft_memcmp.c ft_strcat.c ft\
_strncat.c ft_strlcat.c \
    ft_strstr.c ft_strnstr.c ft_strcmp.c f\
t_strncmp.c ft_memdel.c \
    ft_strnew.c ft_striter.c ft_striteri.c\
 ft_strmap.c ft_strmapi.c \
    ft_strequ.c ft_strnequ.c ft_strsub.c f\
t_strjoin.c ft_strtrim.c \
    ft_strsplit.c ft_itoa.c ft_putnbr_fd.c

OBJ= $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
        ar rc $(NAME) $(OBJ)
        ranlib $(NAME)

$(OBJ): ./libft.h $(SRC)
                $(CC) $(FLAGS) -I . -c $(S\
RC)

clean:
                rm -rf $($OBJ)

fclean: clean
                rm -rf $(NAME)