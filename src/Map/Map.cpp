/**
 * Author: Koenig Timoté
 * File: Map.cpp
 * Last modification: 2025-07-21
 */

#include "Map.hpp"

Map::Map(int seed, int size) : _seed(seed), _size(size), _map(std::vector<gui::Tile>())
{
    initMap();
}

Map::~Map()
{}

int Map::getSeed()
{
    return this->_seed;
}

int Map::getSize()
{
    return this->_size;
}

void Map::displayMap()
{
    for (auto tile: this->_map) {
        tile.display();
    }
}

void Map::initMap()
{
    for (int y = 0; y < (this->_size / 2); y++) {
        for (int x = 0; x < (this->_size / 2); x++) {
            this->_map.push_back(gui::Tile(x, 0, y));
        }
    }
}
