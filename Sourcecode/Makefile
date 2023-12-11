CC = gcc
CFLAGS = -Wall -Wextra -g  # Ajoutez vos flags de compilation ici

SRC_DIR = Sourcecode
BUILD_DIR = build

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
EXEC = Programme

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
    $(CC) $(OBJS) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
    $(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
    mkdir -p $@

clean:
    rm -rf $(BUILD_DIR) $(EXEC)
