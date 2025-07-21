/**
 * Author: Koenig Timoté
 * File: Render.cpp
 * Last modification: 2025-07-20
 */

#include "Render.hpp"

gui::Render::Render(int width, int height, int mapSize) : _camera(), _screenWidth(width), _screenHeight(height)
{
    InitWindow(_screenWidth, _screenHeight, "raylib 3D - camera with square");

    ToggleFullscreen();
    SetTargetFPS(60);

    this->_camera.position = { (float)(mapSize / 2 * -1), (float)mapSize, (float)(mapSize / 2 * -1) };
    this->_camera.target = { (float)(mapSize / 4), 0.0f, (float)(mapSize / 4) };
    this->_camera.up = { 0.0f, 1.0f, 0.0f };
    this->_camera.fovy = 45.0f;
    this->_camera.projection = CAMERA_PERSPECTIVE;

    this->_map = Map(0, 10);
}

gui::Render::~Render()
{
    CloseWindow();
}

void gui::Render::display()
{
    while (!WindowShouldClose()) {

        UpdateCamera(&this->_camera, CAMERA_ORBITAL);

        BeginDrawing();
            ClearBackground(BLACK);

            BeginMode3D(this->_camera);

                this->_map->displayMap();

            EndMode3D();

        EndDrawing();
    }
}
