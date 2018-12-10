#include "system.h"
#include <iostream>

		System::System(const char * titel) {
		window = SDL_CreateWindow(titel, 100, 100, 1920, 1080, SDL_WINDOW_OPENGL);
		renderer = SDL_CreateRenderer(window, -1, 0);
		}

		void InitilizeSystem() {
			if (SDL_INIT_EVERYTHING == 0) {
				std::cout << "SDL initlilized!";
			}
			else {
				std::cout << "everything is a lie " << SDL_GetError << std::endl;
			}
			if () {

			}
		}

		System::~System() {
			delete(window);
			delete(renderer);
	}

