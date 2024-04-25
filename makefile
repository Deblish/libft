CFLAGS = -Wall -Wextra -Werror
#AR = ar rcs
#$(AR) -r $@ $? #this goes inside linking obj files

EXECUTABLE = libft
HEADER = libft.h

SOURCES = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c
OBJECTS = $(SOURCES:.c=.o)

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@echo "Linking object files, creating executable"
	cc $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE) 
	
%.o: %.c
	cc $(CFLAGS) -c $?

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(EXECUTABLE)

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


