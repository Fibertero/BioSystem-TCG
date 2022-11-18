#include<iostream>
#include<raylib.h>
#include <fstream>
#include <nlohmann/json.hpp>
#include"global.hpp"
#include<vector>
#define PATH_TO_CARD "../res/Images/Cards/card.png"
using Json = nlohmann::json;

/*Animals enum*/
typedef enum {
    TERRESTRIAL,
    AQUATIC
} animalType;
typedef enum {
    FISH,
    AMPHIBIA,
    REPTILIA,
    FLIER,
    MAMMALIA,
    INVERTEBRATE
}animalClass;

class Card
{
public:
    std::string name;
    int energyCost;
    int HP;
    animalType animal_Type;
    animalClass animal_Class;
    std::string ability;
    std::string attack;
    Texture2D texture;
    int number;
public:
    Card(Json& card, int cardIndex);
};


Json ReadAndStorageCards(std::string file);
//void DrawCard(Json& card, int ID, Vector2 pos, Texture2D tex);
std::vector<Card> CreateCardsArray(Json& CardsJson);
