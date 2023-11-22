cmake_minimum_required(VERSION 3.7)

PROJECT( neat )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



FILE(GLOB neat_sources *.cpp)



ADD_EXECUTABLE( neat ${neat_sources} )

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 20 CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF ) 