#include"Engine.hpp"

Window::Window(Vector2 _size, std::string _title, int _MaxFPS):
    size(_size), title(_title), MaxFPS(_MaxFPS)
    {
        InitWindow(size.x, size.y, title.c_str());
        SetTargetFPS(MaxFPS);
    }

Vector2 Window::GetSize(){
    return size;
}
std::string Window::GetTitle(){
    return title;
}