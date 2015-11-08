CFLAGS=-Wall -g

all: ex1 ex8

clean:
	$(RM) ex1
	$(RM) ex8
	rm -rf `find . -name "*.dSYM" -print`
