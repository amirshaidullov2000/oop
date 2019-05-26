﻿#include "game.h"

int main()
{
	Game* game = new Game();

	game->setupSystem();
	game->initialize();

	while (game->frame());

	game->shutdown();

	delete game;

	return 0;
}