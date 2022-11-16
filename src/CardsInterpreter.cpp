#include"CardsInterpreter.hpp"

Json ReadAndStorageCards(std::string file)
{
	std::ifstream f(file);
	auto Data = Json::parse(f);

	return Data;
}
void DrawCard(Json card, int ID, Vector2 pos, Texture2D tex)
{
	DrawTexture(tex, pos.x, pos.y, WHITE);
	DrawText(card[ID]["name"].get<std::string>().c_str(), pos.x+10, pos.y+5, ResizeByCharacters(card[ID]["name"].get<std::string>().c_str(), 9), WHITE);
}