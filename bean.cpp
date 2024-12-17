#include "raylib.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "V bean adventure omg");

    Vector2 idekSpritePos = { (float)screenWidth / 2, (float)screenHeight / 2 };

    Texture2D idekSprite = LoadTexture("Vbean.png");

    SetTargetFPS(144);

    while (!WindowShouldClose()) {
        //KEY INPTU
        if (IsKeyDown(KEY_RIGHT)) idekSpritePos.x += 7.0f;
        if (IsKeyDown(KEY_LEFT)) idekSpritePos.x -= 7.0f;
        if (IsKeyDown(KEY_UP)) idekSpritePos.y -= 6.0f;
        if (IsKeyDown(KEY_DOWN)) idekSpritePos.y += 6.0f;

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(idekSprite, idekSpritePos.x, idekSpritePos.y, WHITE);
            DrawText("Erm what the sigma", 300, 10, 20, PURPLE);
        EndDrawing();
    }
    UnloadTexture(idekSprite);
    CloseWindow();

    return 0;
}