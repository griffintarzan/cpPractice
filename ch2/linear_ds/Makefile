#Makefile compiling .cpp files and redirecting their outputs to .txt files
CC := g++

SRCS := $(wildcard *.cpp)

OUTPUTS := $(patsubst %.cpp,%_out.txt,$(SRCS))

all: $(OUTPUTS)

%_out.txt: %.cpp
	$(CC) $< -o $@
	./$@ > $@.tmp
	mv $@.tmp $@

clean:
	rm -f $(OUTPUTS)
