target = sll
cscrs = $(target).c main.c sll_add.c sll_del.c
cobjs = $(cscrs:.c=.o)
cc = gcc
cflags = -Wall
ldflags = 

$(target): $(cobjs)
	$(cc) $(cflags) $(ldflags) -o $@ $^

$(cobjs): %.o: %.c
	$(cc) $(cflags) -c $<

run:
	./$(target)

clean:
	rm *.o $(target)

.phony: run clean

	

