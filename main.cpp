#include"src/CardsInterpreter.hpp"
#include"src/Engine.hpp"
#include"src/Camera.hpp"


int main()
{
    /*Creating the game window*/
    Window GameWindow = Window((Vector2){800,600}, "BioSystem-TCG", 60);
    /*Reading and storing the game cards*/
	auto Cards = ReadAndStorageCards("../cards.json");
    /*Creating the game camera*/
    Camera2D camera = CreateCamera((Vector2){400,300}, (Vector2){400,300}, 0, 0.6f);

    /*Textures*/
    const auto DEFAULT_CARD = LoadTexture(PATH_TO_CARD); /*This is temporary, just until the texture loading system is ready.*/

    while(!WindowShouldClose()){
        BeginDrawing();
            BeginMode2D(camera);
                ClearBackground(BLUE);
                DrawCard(Cards["Animals"], 5, (Vector2){400, 300}, DEFAULT_CARD); /*This is temporary, just for test the card maker*/
            EndMode2D();
        EndDrawing();
    }
    UnloadTexture(DEFAULT_CARD);
    CloseWindow();
}
