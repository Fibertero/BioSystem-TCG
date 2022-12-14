cmake_minimum_required(VERSION 3.15)
project(main)

find_package(raylib 3.0 REQUIRED) # Requires at least version 3.0

set(CMAKE_C_STANDARD 11) # Requires C11 standard

add_executable(${PROJECT_NAME} main.cpp)

target_sources(
  ${PROJECT_NAME}
  PRIVATE

  src/CardsInterpreter.cpp
  src/Engine.cpp
  src/Camera.cpp
  src/global.cpp

  src/CardsInterpreter.hpp
  src/Engine.hpp
  src/Camera.hpp
  src/global.hpp
)

target_link_libraries(${PROJECT_NAME} raylib)

if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()
