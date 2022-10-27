# **************************************************************************** #
#   COLORS                                                                     #
#   COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow        #
# **************************************************************************** #
COM_COLOR   := \033[0;34m
OBJ_COLOR   := \033[0;32m
ERROR_COLOR := \033[0;31m
WARN_COLOR  := \033[0;33m


# **************************************************************************** #
#   VARIABLES                                                                  #
# **************************************************************************** #
NAME		:=	ft_printf
LIB			:=	libftprintf.a

CC			:= 	gcc
CFLAGS		:= 	-Wall -Werror -Wextra -Iheader
DEPFLAGS	 =	-MMD -MF $(DDIR)$*.d

SDIR		:=	srcs/
ODIR		:= 	obj/
DDIR		:=	$(ODIR)deps/

LIBFT_DIR	:= 	./Libft/
LDLIBS		:=	$(LIBFT_DIR)libft.a

SRCS 		:= 	main.c												\
				ft_printf.c 	 			ft_conversion.c 		\
				ft_print_char.c 			ft_print_string.c 		\
				ft_print_hexa.c 			ft_print_int.c 			\
				ft_itoa_unsigned.c			ft_print_unsigned_int.c

OBJS		:=	$(SRCS:%.c=$(ODIR)%.o)
DEPS		:=	$(SRCS:%.c=$(DDIR)%.d)

# **************************************************************************** #
#   RULES                                                                      #
# **************************************************************************** #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIB)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $< $(LDLIBS)
	@echo "$(WARN_COLOR)...build executable $(NAME)"

$(LIB): LIBFT $(ODIR) $(DDIR) $(DEPS) $(OBJS)
	@ar -rcs $(LIB) $(OBJS)
	@echo "$(COM_COLOR)...creating: $(LIB)"

$(ODIR)%.o: $(SDIR)%.c $(DDIR)%.d
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(DEPFLAGS) -c $< -o $@

$(ODIR):
	@mkdir -p $(ODIR)
	@echo "$(OBJ_COLOR)...compiling $(LIB)-object-files..."

$(DDIR):
	@mkdir -p $(DDIR)
	@echo "$(OBJ_COLOR)...creating dependency files..."

LIBFT:
	make -C $(LIBFT_DIR)

clean:
	@rm -rf $(LIB) $(OBJS) $(ODIR) $(DDIR)
	@make clean -C $(LIBFT_DIR)
	@echo "$(ERROR_COLOR)...$(LIB) & object files deleted"
	@echo "$(ERROR_COLOR)...$(NAME) deleted"

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all

$(DEPS):
-include $(DEPS)