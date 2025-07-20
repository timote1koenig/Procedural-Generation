/**
 * Author: Koenig Timoté
 * File: Render.hpp
 * Last modification: 2025-07-20
 */

#include "Tile.hpp"
#include <memory>
#include <optional>

namespace gui {
    class Render {
        public:
            Render(int width, int height);
            ~Render();

            void display();

            Camera3D getCamera();
        private:
            Camera3D _camera;
            int _screenWidth;
            int _screenHeight;
            std::optional<Tile> _tile;
    };
}      

