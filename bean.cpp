#include "raylib.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "V bean adventure omg");

    Vector2 idekSpritePos = { (float)screenWidth / 2, (float)screenHeight / 2 };

    Texture2D idekSprite = LoadTexture("Vbean.png");

    SetTargetFPS(144);

    //TEXT PROPERTIES
    const char* sigma = "Erm what the sigma";

    const int fontSize = 20;

    int textCentre = MeasureText(sigma, fontSize);

    //WINDWO
    while (!WindowShouldClose()) {
        //KEY INPTU
        if (IsKeyDown(KEY_RIGHT) && idekSpritePos.x < screenWidth - idekSprite.width) idekSpritePos.x += 7.0f;
        if (IsKeyDown(KEY_LEFT) && idekSpritePos.x > 0) idekSpritePos.x -= 7.0f;
        if (IsKeyDown(KEY_UP) && idekSpritePos.y > 0) idekSpritePos.y -= 6.0f;
        if (IsKeyDown(KEY_DOWN) && idekSpritePos.y < screenHeight - idekSprite.height) idekSpritePos.y += 6.0f;

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(idekSprite, idekSpritePos.x, idekSpritePos.y, WHITE);
            DrawText(sigma, (screenWidth - textCentre) / 2, 10, fontSize, PURPLE);
            DrawFPS(10, 10);            
        EndDrawing();
    }
    UnloadTexture(idekSprite);
    CloseWindow();

    return 0;
}