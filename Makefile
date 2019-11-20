NAME = game

SRCS = src/main.c \
	src/pox_create_color.c \
	src/pox_create_poxel.c \
	src/pox_create_rect.c \
	src/pox_draw_pixel_in_grid.c \
	src/pox_draw_pixel.c \
	src/pox_draw_rectangle.c \
	src/pox_random_int.c \

INC = inc/PoxEngine.h

SDL = -F inc/framework -I inc/framework/SDL2.framework/SDL2

CFLAGS = -std=c11 -Wall -g \
	-rpath inc/framework -framework SDL2 \

all: $(NAME)

$(NAME): install clean

install:
	@gcc $(CFLAGS) -o $(NAME) $(SRCS) $(LIBS) $(SDL) -I inc

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf .DS_Store
	@rm -rf game.dSYM

reinstall: all 