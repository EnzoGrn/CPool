/*
** EPITECH PROJECT, 2021
** my_print_comb2.c
** File description:
** displays all the different combinations of two two-digit numbers
*/

int my_print_comb2(void)
{
    int left_0 = 0;
    int left_1 = 0;
    int right_0 = 0;
    int right_1 = 1;

    calculation(left_0, left_1, right_0, right_1);
}

int calculation(left_0, left_1, right_0, right_1)
{
    while (left_0 <= 9 && left_1 <= 9 && right_0 <= 9 && right_1 <= 9) {
        if (left_1 >= 9 && right_0 >= 9 && right_1 >= 9) {
            left_0 = left_0 + 1;
            left_1 = 0;
            right_1 = left_1 + 1;
            right_0 = left_0 + 1;
        }
        if (right_0 >= 9 && right_1 >= 9) {
            left_1 = left_1 + 1;
            right_0 = left_0;
            right_1 = left_1;
        }
        if (right_1 >= 9) {
            right_0 = right_0 + 1;
            right_1 = 0;
        }
        right_1 = right_1 + 1;
        display_number(left_0, left_1, right_0, right_1);
    }
}

int display_number(int left_0, int left_1, int right_0, int right_1)
{
    my_putchar(left_0 + 48);
    my_putchar(left_1 + 48);
    my_putchar(' ');
    my_putchar(right_0 + 48);
    my_putchar(right_1 + 48);
    if (left_0 != 9 || left_1 != 8 || right_0 != 9 || right_1 != 9) {
        my_putchar(',');
        my_putchar(' ');
    }
}
