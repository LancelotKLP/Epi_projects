/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** return nbr of char
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
