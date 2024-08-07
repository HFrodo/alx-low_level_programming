#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *str);
int _putchar(char c);
void print_string(char *str);
void initialize_array(char *arr, int size, char c);
void print_memory(char *str);
void print_number_recursive(int n);
void print_number(int n);

#endif /* MAIN_H */
