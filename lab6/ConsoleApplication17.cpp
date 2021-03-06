
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#pragma warning(disable : 4996)
typedef struct {
	char name[50];
	char author[50];
	int year;
}Book;
void printBook(Book b) {
	printf("%s-%s(%d)\n", b.name, b.author, b.year);
}
Book CreateBookFromString(char* string) {
	int i = 0;
	Book b;
	char *t = string;
	while (*t != ';') {
		b.name[i] = *t;
		t++; i++;
	}b.name[i] = '\0';
	t++; i = 0;
	while (*t != ';') {
		b.author[i] = *t;
		i++; t++;
	}b.author[i] = '\0';
	t++; i = 0;
	char year[5];
	while (*t != ';') {
		year[i] = *t;
		i++; t++;
	}year[i] = '\0';
	b.year = atoi(year);
	return b;
}
int main()
{
	FILE *f = fopen("C:\\1.txt", "rt");
	if (f == NULL) {
		printf("Can`t open the file");
		return 0;
	}
	int n;
	fscanf(f, "%d", &n);
	fgetc(f);
	char string[100];

	Book *books = (Book*)malloc(sizeof(Book)*n);
	for (int i = 0; i < n; i++) {
		fgets(string, 100, f);
		Book book = CreateBookFromString(string);
		books[i] = book;
	}
	fclose(f);
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (books[j].year<books[min].year) {
				min = j;
			}
		}

		Book swap = books[i];
		books[i] = books[min];
		books[min] = swap;
		printBook(books[i]);
	}
	free(books);
	int g;
	scanf("%d", &g);
	return 0;
}