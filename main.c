#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL_ttf.h>
#include <windows.h>
#define LARGEUR 600
#define HAUTEUR 460


int main(int argc,char *argv[])
{
    SDL_Surface *fenetre=NULL,*menu=NULL,*text=NULL;
    SDL_Rect positionClick, positionMenu, positionTxt
    SDL_Event event;
    int continuer = 1;
    TTF_FONT *police=NULL;
    SDL_Color couleurNoire={0,0,0};
    police=TTF_OpenFONT("police.ttf",35);
    SDL_Init(SDL_INIT_VIDEO);

    ecran=SDL_CreateWindow("Egypte",0,0,LARGEUR,HAUTEUR);
    menu=IMG_Load(pyramide.jpg);



    return 0;
}
