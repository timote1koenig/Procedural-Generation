/**
 * Author: Koenig Timoté
 * File: main.cpp
 * Last modification: 2025-07-20
 */

#include "Tile.hpp"

int main()
{
    const int screenWidth = GetMonitorWidth(0);
    const int screenHeight = GetMonitorHeight(0);

    InitWindow(screenWidth, screenHeight, "raylib 3D - camera with square");

    ToggleFullscreen();

    Camera camera;
    camera.position = { 4.0f, 2.0f, 4.0f };
    camera.target = { 0.0f, 0.0f, 0.0f };
    camera.up = { 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    SetTargetFPS(60);

    gui::Tile tile(0,0,0);

    while (!WindowShouldClose()) {

        UpdateCamera(&camera, CAMERA_ORBITAL);

        BeginDrawing();
            ClearBackground(BLACK);

            BeginMode3D(camera);

                tile.display();

            EndMode3D();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
 