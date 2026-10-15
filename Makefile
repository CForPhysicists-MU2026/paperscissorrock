
NAME        := paperscissorrock

#---------------------------------------#
#   VARIABLES                           #
#---------------------------------------#

CC          := gcc
C_FLAGS     :=
LIBS        := -lm

SRC_DIR     := src
BUILD_DIR   := build

SRCS        := $(shell find $(SRC_DIR) -name '*.c')
OBJS        := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

#---------------------------------------#
#   RECIPES                             #
#---------------------------------------#

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(C_FLAGS) $(OBJS) -o $(NAME) $(LIBS)

$(OBJS): $(BUILD_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(C_FLAGS) -c -o $@ $<

clean:
	rm -r $(BUILD_DIR)
	rm $(NAME)

#---------------------------------------#
#   SPECS                               #
#---------------------------------------#

.PHONY: all
.PHONY: clean

