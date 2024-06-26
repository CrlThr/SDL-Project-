#include <stdio.h>
#include <SDL.h>
#include "Include/init.h"
#include "Include/SDL-init.h"
#include "Include/img_init.h"
#include "Include/keyboard.h"


int main() {

    SDL_Window* window = initWindow();
    SDL_Renderer* renderer = initRenderer(window);


    int player_x = square_x;
    int player_y = square_y;
    SDL_Texture* img = loadImage(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    while (1)
    {
        displayImage(renderer, img);
        if (KeyboardInit(&player_x, &player_y) == -1) {
            return 0;
        }
        SDL_Rect Square = { player_x, player_y, width, height };

        SDL_RenderFillRect(renderer, &Square);

        SDL_RenderPresent(renderer);
        SDL_Delay(30);
    }


        }
   