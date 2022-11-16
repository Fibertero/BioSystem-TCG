#include<raylib.h>
#include<string>

/*The main window class*/
class Window{
private:
    Vector2 size;
    std::string title;
    int MaxFPS;
public:
    Window(Vector2 _size, std::string _title, int _MaxFPS);
    Vector2 GetSize();
    std::string GetTitle();
};