/**
 * Author: Koenig Timoté
 * File: Tile.cpp
 * Last modification: 2025-07-20
 */

#include "Tile.hpp"

gui::Tile::Tile(float x, float y, float z): _model(LoadModelFromMesh(GenMeshCube(1.0f, 1.0f, 1.0f))), _position(x, y, z)
{}

gui::Tile::~Tile()
{}

void gui::Tile::display()
{
    DrawModel(this->_model, this->_position, 1.0f, GREEN);
    DrawCubeWires(this->_position, 1.0f, 1.0f, 1.0f, (Color){61, 0, 49, 255});
}
