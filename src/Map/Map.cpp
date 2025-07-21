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
    for (int i; i < this->_size; i++) {
        this->_map.push_back(gui::Tile(0, 0, 0));
    }
}
