#include"src/CardsInterpreter.hpp"
#include"src/Engine.hpp"
#include"src/Camera.hpp"

int main()
{
    /*Creating the game window*/
    Window GameWindow = Window((Vector2){800,600}, "BioSystem-TCG", 60);
    /*Reading and storing the game cards*/
	auto CardsJson = ReadAndStorageCards("../cards.json");
    auto Cards = CreateCardsArray(CardsJson);
    /*Creating the game camera*/
    Camera2D camera = CreateCamera((Vector2){400,300}, (Vector2){400,300}, 0, 0.6f);


    while(!WindowShouldClose()){
        BeginDrawing();
            BeginMode2D(camera);
                ClearBackground(BLUE);
            EndMode2D();
        EndDrawing();
    }
    CloseWindow();
}
