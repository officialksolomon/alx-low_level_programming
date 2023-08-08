#ifndef FILE_MAIN
#define FILE_MAIN

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
char **strtow(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
