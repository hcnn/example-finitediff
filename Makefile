
CC ?= gcc

BINS = example1

#CP      = cp -f
MV      = mv -f 
RM      = rm -f
MKDIR   = mkdir -p
DIRBIN  = ./bin

SRC  = $(wildcard src/*.c)
DEPS = $(wildcard deps/*/*.c)
OBJS = $(DEPS:.c=.o)

CFLAGS += -std=c99 -Wall -Wextra -Ideps
LDFLAGS =

all: $(BINS)

$(BINS): $(SRC) $(OBJS)
	$(CC) $(CFLAGS) -o $@ src/$(@:.exe=).c $(OBJS) $(LDFLAGS)

%.o: %.c
	$(CC) $< -c -o $@ $(CFLAGS)

clean:
	$(foreach c, $(BINS), $(RM) $(c);)
	$(RM) $(OBJS)

install: $(BINS)
	$(MKDIR) $(DIRBIN)
	$(foreach c, $(BINS), $(MV) $(c) $(DIRBIN)/$(c);)

uninstall:
	$(foreach c, $(BINS), $(RM) $(DIRBIN)/$(c);)

test:
	@./test.sh

deps: package.json
	clib install 
	@touch $@

.PHONY: test all clean install uninstall deps
