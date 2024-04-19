CFLAGS = -Wall -Wextra -Werror
#AR = ar rcs
#$(AR) -r $@ $? #this goes inside linking obj files

EXECUTABLE = libft
HEADER = libft.h

SOURCES = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c
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


