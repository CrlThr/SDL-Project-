#include <stdio.h>
#include <SDL.h>
#include "../Include/init.h"


SDL_Window* initWindow() {

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Erreur SDL INIT failed\n");
        return NULL;
    }
    //creer une fenetre avec sdl
    SDL_Window* window = SDL_CreateWindow("SDL Project",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

    if (window == NULL) {
        printf("Erreur creation de la fenetre SDL\n");
        SDL_Quit();
        return NULL;
    }

    return window;
}

SDL_Renderer* initRenderer(SDL_Window* window)
{
    // Creer le systeme de rendu
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (renderer == NULL) {
        printf("Erreur creation rendu SDL");
        SDL_Quit();
        return NULL;

    }

    return renderer;

    
}