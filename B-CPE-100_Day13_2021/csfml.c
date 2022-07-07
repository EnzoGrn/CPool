/*
** EPITECH PROJECT, 2021
** csfml.c
** File description:
** graphic
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "framebuffer.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    int	i = 0;
    framebuffer_t *buffer;

    buffer = malloc(sizeof(framebuffer_t));
    buffer->pixels = malloc(width * height * 4 * sizeof(sfUint8));
    buffer->width = width;
    buffer->height = height;
    while (i < width * height * 4) {
        buffer->pixels[i] = 0;
        i++;
    }
    return (buffer);
}

void framebuffer_destroy(framebuffer_t *framebuffer)
{

}

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    framebuffer->pixels[(framebuffer->width * y + x) * 4] = color.r;
    framebuffer->pixels[(framebuffer->width * y + x) * 4 + 1] = color.g;
    framebuffer->pixels[(framebuffer->width * y + x) * 4 + 2] = color.b;
    framebuffer->pixels[(framebuffer->width * y + x) * 4 + 3] = color.a;
}

void draw_square(framebuffer_t *framebuffer)
{
    for (int i = 100; i < 247; i++) {
        for (int j = 100; j < 247; j++)
            my_put_pixel(framebuffer, j, i, sfBlue);
    }
}

int main()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "task01", sfDefaultStyle, NULL);
    if (!window)
        return (84);
    framebuffer = framebuffer_create(800, 600);
    texture = sfTexture_createFromFile("test.png", NULL);
    if (!texture)
        return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 30);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        draw_square(framebuffer);
        sfTexture_updateFromPixels(texture, framebuffer->pixels, 800, 600, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
    return (0);
}
