FLAGS := -Wall -Wextra -Werror -Wno-comment

function_files := \
					../src/ex00/ft_putchar.c \
					../src/ex01/ft_print_alphabet.c \
					../src/ex02/ft_print_reverse_alphabet.c 

function_objects := ${function_files:.c=.o}

test_files := \
					./ft_print_alphabet.test.c \
					./ft_print_reverse_alphabet.test.c \
					./ft_putchar.test.c

test_objects := ${test_files:.c=.o}

all: ${test_objects} ${function_objects}
	@$(CC) ./main.c \
			${test_objects} \
			${function_objects} \
			-ltestsuite -L../test-suite \
			-o tests.out	

%.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

clean:
	rm -rf $(test_objects)

fclean: clean

re: fclean all

.PHONY: all fclean clean re norm