#pragma once

#include <SFML/System/Vector2.hpp>

struct Player {
	sf::Vector2f size;
	sf::Vector2f position;
	sf::Vector2f velocity;
};


struct Ghost {
	sf::Vector2f size;
	sf::Vector2f position;
	sf::Vector2f velocity;
};


struct TileMap {
	unsigned int tile_size = 32;
	unsigned int tiles[1024][1024]; // a 2D array of 1024 by 1024 blocks
};


enum Scene {
	Menu,
	Playing,
	GameOver,
	Victory
};

struct GameState {
	Player player;
	Ghost ghost;
	Scene scene;
};