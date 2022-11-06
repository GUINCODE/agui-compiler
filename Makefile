
default:
	 mkdir -p bin
	 rm -rf bin/*
	 gcc -c src/lexer.c -o bin/lexer.o
	 gcc barry.c -o bin/lexer.o -o bin/barry


