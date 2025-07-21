/**
 * Author: Koenig Timoté
 * File: Map.hpp
 * Last modification: 2025-07-21
 */

#include "Tile.hpp"
#include <vector>

class Map {
    public:
        Map(int seed, int size);
        ~Map();

        int getSeed();
        int getSize();
        void displayMap();
    private:
        void initMap();

        int _seed;
        int _size;
        std::vector<gui::Tile> _map;
};

