/**
 * Author: Koenig Timoté
 * File: Type.hpp
 * Last modification: 2025-07-20
 */

#include "raylib.h"
#include <utility>

namespace gui {
    class MyVector3 : public Vector3 {
        public:
            MyVector3(float x, float y, float z);
    };
}
