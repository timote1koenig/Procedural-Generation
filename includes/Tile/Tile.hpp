/**
 * Author: Koenig Timoté
 * File: Tile.hpp
 * Last modification: 2025-07-20
 */

#ifndef GUI_TILE
    #define GUI_TILE

    #include <utility>
    #include "raylib.h"

namespace gui {
    class Tile
    {
        public:
            Tile(float x, float y, float z);
            ~Tile();

            void display();

        private:
            Model _model;
            
            float _x;
            float _y;
            float _z;     
    };
}

#endif /* GUI_TILE */
