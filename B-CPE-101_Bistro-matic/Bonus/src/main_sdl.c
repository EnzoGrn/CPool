/*
** EPITECH PROJECT, 2021
** bistro
** File description:
** main file for gui, bonus
*/

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_mouse.h>
#include <SDL2/SDL_ttf.h>

#include "../include/eval_expr.h"
#include "../include/my.h"

void add_to_str(char *base, char code, int *i)
{
    base[(*i)++] = code;
    // base[(*i) + 1] = '\0';
    printf("STRING: %s\n", base);
}

void clear_str(char *str, int *i)
{
    memset(str, 0, strlen(str));
    str[0] = '0';
    (*i) = 0;
}

void get_mouse_pos(int x, int y, int *i, char *result, FILE* file, char **display)
{
    if (*display != NULL)
        *display = NULL;
    if (x < 100 && y > 100 && y < 200)
        clear_str(result, i);
    if (x < 100 && y > 200 && y < 300)
        add_to_str(result, '7', i);
    else if (x < 100 && y > 300 && y < 400)
        add_to_str(result, '4', i);
    else if (x < 100 && y > 400 && y < 500)
        add_to_str(result, '1', i);
    else if (x < 200 && y > 500 && y < 597)
        add_to_str(result, '0', i);
    else if (x > 100 && x < 200 && y > 200 && y < 300)
        add_to_str(result, '8', i);
    else if (x > 100 && x < 200 && y > 300 && y < 400)
        add_to_str(result, '5', i);
    else if (x > 100 && x < 200 && y > 400 && y < 500)
        add_to_str(result, '2', i);
    else if (x > 200 && x < 300 && y > 200 && y < 300)
        add_to_str(result, '9', i);
    else if (x > 200 && x < 300 && y > 300 && y < 400)
        add_to_str(result, '6', i);
    else if (x > 200 && x < 300 && y > 400 && y < 500)
        add_to_str(result, '3', i);
    else if (x >100 && x < 200 && y > 100 && y < 200)
        add_to_str(result, '(', i);
    else if (x > 200 && x < 300 && y > 100 && y < 200)
        add_to_str(result, ')', i);
    else if (x > 300 && x < 406 && y > 100 && y < 200)
        add_to_str(result, '/', i);
    else if (x > 300 && x < 406 && y > 200 && y < 300)
        add_to_str(result, '*', i);
    else if (x > 200 && x < 300 && y > 500 && y < 597)
        add_to_str(result, '%', i);
    else if (x > 300 && x < 406 && y > 300 && y < 400)
        add_to_str(result, '-', i);
    else if (x > 300 && x < 406 && y > 400 && y < 500)
        add_to_str(result, '+', i);
    else if (x > 300 && x < 406 && y > 500 && y < 600) {
        *display = eval_expr(result, "0123456789");
        fputs(result, file);
        fputc('\n', file);
        // result = *display;
        fputs(*display, file);
        fputc('\n', file);
        printf("%s\n", *display);
        clear_str(result, i);
    }
}

void mouse_state(int *i, char *result, FILE *file, char **display)
{
    int x, y;
    Uint32 buttons;

    SDL_PumpEvents();  // make sure we have the latest mouse state.

    buttons = SDL_GetMouseState(&x, &y);

    // printf("Mouse cursor is at %d, %d\n", x, y);
    if ((buttons) != 0) {
        get_mouse_pos(x, y, i, result, file, display);
    }
}

int main(int argc, char **argv)
{
    bool quit = false;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    SDL_Window *window = SDL_CreateWindow("Bistromatic", SDL_WINDOWPOS_CENTERED,
                            SDL_WINDOWPOS_CENTERED, 406, 597, SDL_WINDOW_SHOWN);

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_Surface *image = SDL_LoadBMP("assets/calc.bmp");
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, image);
    int i = 0;
    int size_font = 75;
    int text_width;
    int text_height;
    char *result = calloc(300, sizeof(char));
    char *display = NULL;
    result[0] = '0';
    FILE *file = fopen("assets/log.txt", "a");
    // Prep for displaying the text
    TTF_Font *Sans = TTF_OpenFont("assets/OpenSans-Light.ttf", size_font);
    SDL_Color White = {255, 255, 255};
    SDL_Surface *calcul;
    SDL_Texture *texture_calcul;
    SDL_Rect calcul_rect;
    if (file == NULL) {
        printf("ERROR : CAN'T OPEN FILE\n");
        return 84;
    }
    while (!quit)
    {
        SDL_WaitEvent(&event);

        switch (event.type)
        {
        case SDL_QUIT:
            quit = true;
            break;
        case SDL_MOUSEBUTTONDOWN:
            mouse_state(&i, result, file, &display);
            break;
        }
        SDL_RenderClear(renderer);
        calcul = TTF_RenderText_Blended(Sans, display != NULL ? display : result, White);
        texture_calcul = SDL_CreateTextureFromSurface(renderer, calcul);
        text_width = calcul->w;
        text_height = calcul->h;
        SDL_FreeSurface(calcul);
        calcul_rect.x = 15;
        calcul_rect.y = 0;
        calcul_rect.w = text_width;
        calcul_rect.h = text_height;
        SDL_Rect dest_rect = {0, 100, 391, 497};
        SDL_RenderCopy(renderer, texture, NULL, &dest_rect);
        SDL_RenderCopy(renderer, texture_calcul, NULL, &calcul_rect);
        SDL_RenderPresent(renderer);
        SDL_DestroyTexture(texture_calcul);
    }
    fclose(file);
    SDL_DestroyTexture(texture);
    SDL_FreeSurface(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();

    return 0;
}
