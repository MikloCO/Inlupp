#ifndef SYSTEM_H
#define SYSTEM_H
#include <SDL.h>
class System {
	private: 
		SDL_Window* window;
		SDL_Renderer* renderer;

	public:
		//Ska innehålla metoden för window render
		//konstruktor?

		System(const char* titel);
		
		void InitilizeSystem();
		
		
		~System();


		/*
		SDL_Renderer get_ren() const { return *renderer; }
		*/
};


		
#endif