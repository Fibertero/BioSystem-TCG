#include<iostream>
#include<raylib.h>
#include <fstream>
#include <nlohmann/json.hpp>
#include"global.hpp"
#define PATH_TO_CARD "../res/Images/Cards/card.png"

using Json = nlohmann::json;

Json ReadAndStorageCards(std::string file);
void DrawCard(Json card, int ID, Vector2 pos, Texture2D tex);