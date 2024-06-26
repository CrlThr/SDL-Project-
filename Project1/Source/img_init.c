#include <SDL.h>


SDL_Texture* loadImage(SDL_Renderer* renderer)
{
    SDL_Surface* surface = SDL_LoadBMP("img/cat.bmp");

    if (!surface)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return NULL;
    }

    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface
    (surface);
    return texture;

}

void displayImage(SDL_Renderer* renderer, SDL_Texture* img)
{
    SDL_RenderCopy(renderer, img, NULL, NULL);
}