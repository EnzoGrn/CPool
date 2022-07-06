/*
** EPITECH PROJECT, 2021
** my_print_comb.c
** File description:
** displays all the numbers composed by different digits numbers
*/

void unit_loop(int *unit, int ten, int hundred)
{
    while (unit < 10) {
        display_digit(hundred, ten, *unit);
        (*unit) = (*unit) + 1;
    }
}

int my_print_comb(void)
{
    int unit = 2;
    int ten = 1;
    int hundred = 0;

    while (hundred <= ten && hundred <= unit && hundred < 10) {
        while (ten <= unit && ten < 10) {
            unit_loop(&unit, ten, hundred);
            ten = ten + 1;
            unit = ten + 1;
        }
        hundred = hundred + 1;
        ten = hundred + 1;
        unit = ten + 1;
    }
}

int display_digit(int hundred, int ten, int unit)
{
    if (hundred != 7) {
        my_putchar(hundred + 48);
        my_putchar(ten + 48);
        my_putchar(unit + 48);
        my_putchar(',');
        my_putchar(' ');
    } else {
        my_putchar(hundred + 48);
        my_putchar(ten + 48);
        my_putchar(unit + 48);
    }
}
