#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strlen(char *s);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void errors(void);
int is_digit(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif
