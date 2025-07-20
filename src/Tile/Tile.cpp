/**
 * Author: Koenig Timoté
 * File: Tile.cpp
 * Last modification: 2025-07-20
 */

#include "Tile.hpp"

gui::Tile::Tile(float x, float y, float z): _model(LoadModelFromMesh(GenMeshCube(1.0f, 1.0f, 1.0f))), _x(x), _y(y), _z(z)
{}

gui::Tile::~Tile()
{}

void gui::Tile::display()
{
    DrawModel(this->_model, (Vector3){this->_x, this->_y, this->_z}, 1.0f, GREEN);
    DrawCubeWires((Vector3){this->_x, this->_y, this->_z}, 1.0f, 1.0f, 1.0f, (Color){61, 0, 49, 255});
}
