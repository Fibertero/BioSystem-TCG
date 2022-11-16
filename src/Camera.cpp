#include"Camera.hpp"

Camera2D CreateCamera(Vector2 target, Vector2 offset, float rotation, float zoom)
{
    Camera2D camera = {target, offset, rotation, zoom};
    return camera;
}