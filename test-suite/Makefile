NAME = libtestsuite.a
FLAGS := -Wall -Wextra -Werror

function_files := \
					./char/print_char_res.c \
					./ui/describe.c 

function_objects := ${function_files:.c=.o}

all: $(NAME)

%.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

$(NAME): ${function_objects}
	ar rc $(NAME) ${function_objects}

clean:
	rm -rf $(function_objects)

fclean: clean
	rm -rf $(NAME)

re: fclean all

norm:
	@norminette -R CheckForbiddenSourceHeader \
	$(function_files) *.h

.PHONY: all fclean clean re norm
