#include "game.h"

int main(int argc, char const *argv[])
{
	Game *g = new Game();
	g->play();
	delete g; 
	return 0;
}