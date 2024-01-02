##
## EPITECH PROJECT, 2023
## makefile
## File description:
## idk
##

SRC 	=	my_compute_power_rec.c	\
		my_compute_square_root.c\
		my_find_prime_sup.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strncmp.c 	\
		my_strcmp.c 	\
		my_strncpy.c	\
		my_revstr.c	\
		my_getnbr.c	\
		my_strdup.c	\
		my_swap.c	\
		./my_printf/fct_lower_e.c	\
		./my_printf/fct_lower_f.c	\
		./my_printf/fct_multiple_cns.c	\
		./my_printf/fct_lower_pdisc.c	\
		./my_printf/fct_lower_uo.c	\
		./my_printf/fct_lower_x.c	\
		./my_printf/fct_upper_e.c	\
		./my_printf/fct_upper_f.c	\
		./my_printf/fct_upper_x.c	\
		./my_printf/fct_lower_p.c	\
		./my_printf/fct_fake_fe.c	\
		./my_printf/fct_lower_g.c	\
		./my_printf/fct_upper_g.c	\
		./my_printf/fct_fake_fe_bis.c	\
		./my_printf/my_printf.c	\

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

GREEN	=	\033[0;32m
RED		=	\033[0;31m
BLUE	=	\033[0;34m
NC		=	\033[0m # No Color

all:	$(NAME)

%.o: %.c
	@$(CC) -c $< -o $@ > /dev/null 2>&1

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ) > /dev/null 2>&1
	@if [ $$? -eq 0 ]; then echo "${BLUE}+------------------------+\n| Compilation successful |\n+------------------------+${NC}"; else echo -e "${RED}+------------------+\n| Compilation failed |\n+------------------+\n${NC}"; fi

clean:
	@rm -f $(OBJ) > /dev/null 2>&1 && echo "${GREEN}+-------------------+\n| Cleaned object files |\n+-------------------+\n${NC}"

fclean: clean
	@rm -f $(NAME) > /dev/null 2>&1 && echo "${GREEN}+--------------+\n| Fully cleaned |\n+--------------+\n${NC}"

re:	fclean all

unit_tests: re
	@gcc $(TEST) $(SRC) -o unit_test --coverage -lcriterion > /dev/null 2>&1 && echo -e "${GREEN}+-------------------+\n| Unit tests compiled |\n+-------------------+\n${NC}"

tests_run: unit_tests
	@./unit_test > /dev/null 2>&1 && echo "${GREEN}+-------------+\n| Unit tests run |\n+-------------+\n${NC}"

coverage: tests_run
	@gcovr --exclude tests/ > /dev/null 2>&1 && echo "${GREEN}+-------------------+\n| Coverage calculated |\n+-------------------+\n${NC}"
	@gcovr --exclude tests/ --branches > /dev/null 2>&1 && echo "${GREEN}+-----------------------------+\n| Branch coverage calculated |\n+-----------------------------+\n${NC}"
	@rm unit_test* > /dev/null 2>&1 && echo "${GREEN}+-----------------------------------+\n| Cleaned up after coverage calculation |\n+-----------------------------------+\n${NC}"

auteur:
	@echo $(USER) > auteur > /dev/null 2>&1 && echo "${GREEN}+------------------+\n| Author file created |\n+------------------+\n${NC}"