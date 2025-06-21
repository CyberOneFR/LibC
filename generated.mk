HEADERS =	\
	-I./headers/\
	-I./headers/types\
	-I./headers/types/tarray\
	-I./headers/types/tarray/char\
	-I./headers/types/tarray/int\
	-I./headers/types/tarray/long\
	-I./headers/types/tarray/short\
	-I./headers/types/tarray/float\
	-I./headers/types/tarray/double\
	-I./headers/types/tarray/ptr\
	-I./headers/types/def\
	-I./headers/types/tstr\
	-I./headers/parsing\
	-I./headers/parsing/string

SRCS =	\
	./srcs/parsing/int/ftstrtoi.c\
	./srcs/parsing/char/cisupper.c\
	./srcs/parsing/char/cislower.c\
	./srcs/parsing/char/cisalpha.c\
	./srcs/parsing/char/cisnumeric.c\
	./srcs/parsing/char/cisalnum.c

OBJS =	\
	./build/ftstrtoi.o\
	./build/cisupper.o\
	./build/cislower.o\
	./build/cisalpha.o\
	./build/cisnumeric.o\
	./build/cisalnum.o

DEPS =	\
	./build/ftstrtoi.d\
	./build/cisupper.d\
	./build/cislower.d\
	./build/cisalpha.d\
	./build/cisnumeric.d\
	./build/cisalnum.d

$(BUILD_DIR):
	@mkdir -p $@

./build/ftstrtoi.o: ./srcs/parsing/int/ftstrtoi.c | $(BUILD_DIR)
	@$(CC) $(CFLAGS) $(HEADERS) -MD -MP -o $@ -c $<
	@echo -e $(BLUE)$(NAME)$(RESET) compiling: $@

./build/cisupper.o: ./srcs/parsing/char/cisupper.c | $(BUILD_DIR)
	@$(CC) $(CFLAGS) $(HEADERS) -MD -MP -o $@ -c $<
	@echo -e $(BLUE)$(NAME)$(RESET) compiling: $@

./build/cislower.o: ./srcs/parsing/char/cislower.c | $(BUILD_DIR)
	@$(CC) $(CFLAGS) $(HEADERS) -MD -MP -o $@ -c $<
	@echo -e $(BLUE)$(NAME)$(RESET) compiling: $@

./build/cisalpha.o: ./srcs/parsing/char/cisalpha.c | $(BUILD_DIR)
	@$(CC) $(CFLAGS) $(HEADERS) -MD -MP -o $@ -c $<
	@echo -e $(BLUE)$(NAME)$(RESET) compiling: $@

./build/cisnumeric.o: ./srcs/parsing/char/cisnumeric.c | $(BUILD_DIR)
	@$(CC) $(CFLAGS) $(HEADERS) -MD -MP -o $@ -c $<
	@echo -e $(BLUE)$(NAME)$(RESET) compiling: $@

./build/cisalnum.o: ./srcs/parsing/char/cisalnum.c | $(BUILD_DIR)
	@$(CC) $(CFLAGS) $(HEADERS) -MD -MP -o $@ -c $<
	@echo -e $(BLUE)$(NAME)$(RESET) compiling: $@
