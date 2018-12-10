#include <SDL.h>
#include <iostream>
#include "System.h"
#define LOG(x)  cout << x << endl;
using namespace std;
int main(int argv, char** argc) {
	SDL_INIT_EVERYTHING; cout << "SDL initlilized!";

	//System("AHHHHHHHH");



	int x = 2;

	LOG(x);

	
	
	return 0;
}