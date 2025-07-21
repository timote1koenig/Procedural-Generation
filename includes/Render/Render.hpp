/**
 * Author: Koenig Timoté
 * File: Render.hpp
 * Last modification: 2025-07-20
 */

#include "Map.hpp"
#include <memory>
#include <optional>

namespace gui {
    class Render {
        public:
            Render(int width, int height, int mapSize);
            ~Render();

            void display();

            Camera3D getCamera();
        private:
            Camera3D _camera;
            int _screenWidth;
            int _screenHeight;
            std::optional<Map> _map;
    };
}      

