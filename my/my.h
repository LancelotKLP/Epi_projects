/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** idk
*/

#ifndef MY
    #define MY
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <stdarg.h>

void my_putchar(char c);
int my_isneg(int nb);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_in_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_is_prime(int nb);
int my_compute_square_root(int nb);
int my_find_is_prime(int nb);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2);
int my_printf(const char *format, ...);
void my_putchar(char c);
void my_put_nbr(int nb);
int my_putstr(char const *str);
int fake_e(double nb);
int fake_f(double nb);
int lowcase_e(va_list args);
int lowcase_f(va_list args);
int uppcase_e(va_list args);
int uppcase_f(va_list args);
int lowcase_o(va_list args);
int lowcase_u(va_list args);
int lowcase_s(va_list args);
int lowcase_d(va_list args);
int lowcase_i(va_list args);
int lowcase_c(va_list args);
int low_percent(va_list args);
int lowcase_x(va_list args);
int uppcase_x(va_list args);
int lowcase_p(va_list args);
int lowcase_g(va_list args);
int uppcase_g(va_list args);
int supplines_bis(double nb, int n);
int fake_f_bis(double nb);
void fake_print_first_bis(int i);
int fake_e_bis(double nb);
int supplines(double nb, int n);
int fake_f(double nb);
void fake_print_first(int i);
int fake_e(double nb);
int lowcase_u(va_list args);
int lowcase_u_bis(long nb);
int lowcase_o(va_list args);
int lowcase_o_bis(long nb);
char *my_strdup(const char *);

struct Flag {
    char format;
    int (*fonction) (va_list);
};

#endif /* MY */
