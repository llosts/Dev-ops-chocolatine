##
## EPITECH PROJECT, 2023
## Untitled (Workspace)
## File description:
## Makefile
##

SRC_MAIN	=	src/main.c								\
				src/display_help.c

SRC_UTILS	= 	src/errors.c

SRC_TEST	=	tests/test.c

OBJ 		=	$(SRC_MAIN:.c=.o)						\
				$(SRC_UTILS:.c=.o)

OBJ_TEST	=	$(SRC_UTILS:.c=.o)						\
				$(SRC_TEST:.c=.o)

CFLAGS		=	-W -Wall -Wextra -iquote include

FLAGS_DEBUG = 	-g3

FLAGS_TEST 	=	-lcriterion

NAME		=	chocolatine

NAME_TEST	= 	unit_tests

$(NAME):		$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

all:			$(NAME)

debug: 			CFLAGS += $(FLAGS_DEBUG)

debug:			$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
			$(RM) -rf $(OBJ)

clean_test:
			find . -name "*.gcda" -delete -or -name "*.gcno" -delete
			$(RM) -rf $(NAME_TEST)

fclean:			clean clean_test
			$(RM) -rf $(NAME)
			$(RM) -rf $(OBJ)
			$(RM) -rf $(OBJ_TEST)

tests_run:		CFLAGS += --coverage

tests_run: 		$(OBJ_TEST)
			$(CC) -o $(NAME_TEST) $(OBJ_TEST) $(CFLAGS) $(FLAGS_TEST)
			./$(NAME_TEST) --verbose

re:				fclean all

.PHONY: 		all debug clean clean_test fclean tests_run re
