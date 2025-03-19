letters: palindrome.o
	gcc -g -ansi -Wall -pedantic palindrome.o -o palindrome
letters.o: palindrome.c
	gcc -c -ansi -Wall palindrome.c -o palindrome.o
