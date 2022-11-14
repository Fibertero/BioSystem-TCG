#include<iostream>
#include<raylib.h>
#include<vector>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

void ReadAndStorageCards(std::string file)
{
	std::ifstream f(file);
	auto JsonFile = json::parse(f);

	std::cout << JsonFile << '\n';
}

int main(){
	ReadAndStorageCards("../cards.json");
}
