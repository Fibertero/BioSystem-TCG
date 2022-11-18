#include"CardsInterpreter.hpp"

Json ReadAndStorageCards(std::string file)
{
	std::ifstream f(file);
	auto Data = Json::parse(f);

	return Data;
}
// void DrawCard(Json& card, int ID, Vector2 pos, Texture2D tex)
// {
// 	DrawTexture(tex, pos.x, pos.y, WHITE);
// 	DrawText(card[ID]["name"].get<std::string>().c_str(), pos.x+10, pos.y+5, ResizeByCharacters(card[ID]["name"].get<std::string>().c_str(), 9), WHITE);
// }

Card::Card(Json& card, int cardIndex){
	std::string nameValue = card[cardIndex]["name"].get<std::string>();
	int energyCostValue = card[cardIndex]["energy cost"].get<int>();
	int HPValue = card[cardIndex]["HP"].get<int>();
	std::string animalTypeValue = card[cardIndex]["type"].get<std::string>();
	std::string animalClassValue = card[cardIndex]["class"].get<std::string>();
    std::string abilityValue = card[cardIndex]["ability"].get<std::string>();
    std::string attackValue = card[cardIndex]["attack"].get<std::string>();
    int numberValue = card[cardIndex]["number"].get<int>();

	name = nameValue;
	energyCost = energyCostValue;
	HP = HPValue;
	animal_Type = (animalTypeValue == "terrestrial") ? TERRESTRIAL : AQUATIC;
	animal_Class = (animalClassValue == "fish") ? FISH : (animalClassValue=="amphibia") ? AMPHIBIA : (animalClassValue=="reptilia") ? REPTILIA : (animalClassValue=="flier") ? FLIER : (animalClassValue=="mammalia") ? MAMMALIA : INVERTEBRATE; 
	ability = abilityValue;
	texture = LoadTexture("../res/Images/Cards/card.png");
	number = numberValue;
}

std::vector<Card> CreateCardsArray(Json& CardsJson){
	std::vector<Card> Cards;
	for(std::size_t i=1; i<(CardsJson["Animals"].size()); i++){
        auto card = Card(CardsJson["Animals"], i);
        Cards.push_back(card);
    }
	return Cards;
}