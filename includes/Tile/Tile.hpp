/**
 * Author: Koenig Timoté
 * File: Tile.hpp
 * Last modification: 2025-07-20
 */

#ifndef GUI_TILE
    #define GUI_TILE

    #include "Type.hpp"

namespace gui {
    class Tile
    {
        public:
            Tile(float x, float y, float z);
            ~Tile();

            void display();

        private:
            Model _model;
            MyVector3 _position;
    };
}

#endif /* GUI_TILE */
