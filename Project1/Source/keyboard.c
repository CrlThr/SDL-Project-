#include <SDL.h> 

#define speed 20
 int KeyboardInit(int* x, int* y) {
    SDL_Event event;
    while (SDL_PollEvent(&event) != 0) {
        if (event.type == SDL_QUIT) {
            return -1;
        }
        else if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
            case SDLK_UP:
                *y -= speed;
                break;
            case SDLK_DOWN:
                *y += speed;
                break;
            case SDLK_LEFT:
                *x -= speed;
                break;
            case SDLK_RIGHT:
                *x += speed;
                break;

            }
        }
    }

    return 0;
}