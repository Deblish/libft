CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

NAME = libft.a
EXECUTABLE = libft
HEADER = libft.h

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strrchr.c

B_SOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c

OBJECTS = $(SOURCES:.c=.o)
B_OBJECTS = $(B_SOURCES:.c=.o)

all: $(NAME)
exe: $(EXECUTABLE)
.PHONY: bonus
bonus: .bonus

.bonus: $(NAME) $(B_OBJECTS)
	$(AR) $(NAME) $(B_OBJECTS)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

$(EXECUTABLE): $(OBJECTS)
	@echo "Linking object files, creating executable"
	cc $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.c
	cc $(CFLAGS) -c $?

clean:
	rm -f $(OBJECTS) $(B_OBJECTS) .bonus

fclean: clean
	rm -f $(EXECUTABLE) $(NAME) 

re: fclean all

#main.o: main.c
#	@echo "Compiling main"
#	cc $(CFLAGS) main.c -c

#ft_isdigit.o: ft_isdigit.c
#	@echo "Compiling ft_ function"
#	cc $(CFLAGS) -c ft_isdigit.c

#ft_isalpha.o: ft_isalpha.c
#	@echo "Compiling ft_ function"
#	cc $(CFLAGS) -c ft_isalpha.c

#ft_isalnum.o: ft_isalnum.c
#	@echo "Compiling ft_ function"
#	cc $(CFLAGS) -c ft_isalnum.c

#ft_isascii.o: ft_isascii.c
#	@echo "Compiling ft_ function"
#	cc $(CFLAGS) -c ft_isascii.c

#ft_isprint.o: ft_isprint.c
#	@echo "Compiling ft_ function"
#	cc $(CFLAGS) -c ft_isprint.c


