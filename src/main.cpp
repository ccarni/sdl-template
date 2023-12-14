#include <iostream>
#include <SDL2/SDL.h>

const int WIDTH=800, HEIGHT=800;

int main(int argc, char *argv[])
{
    SDL_Init( SDL_INIT_EVERYTHING );

    SDL_Window *window = SDL_CreateWindow( "Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI );

    if (window == nullptr) 
    {
        std::cout << "Error creating window: " << SDL_GetError();
        return EXIT_FAILURE;
    }

    SDL_Event windowEvent;

    while (true) 
    {
        if (SDL_PollEvent(&windowEvent))
        {
            if (windowEvent.type == SDL_QUIT)
            {
                break;
            }
        }
    }

    SDL_DestroyWindow( window );
    SDL_Quit( );

    return EXIT_SUCCESS;

}