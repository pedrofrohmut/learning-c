cmake_minimum_required(VERSION 3.12)
project(pong) # Project name

# Define the standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(SOURCES ./src/main.c ./src/ball.c ./src/app.c ./src/paddle.c)
set(RAYLIB_VERSION 4.5.0)
set(RAYLIB_INCLUDE_DIRS "/usr/local/lib")

include_directories(${RAYLIB_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} raylib)

###################

###find_package(raylib ${RAYLIB_VERSION} REQUIRED)
###target_include_directories(${PROJECT_NAME} PRIVATE ${RAYLIB_INCLUDE_DIRS})

###################

###find_package(raylib REQUIRED)
###target_include_directories(${PROJECT_NAME} PRIVATE ${raylib_INCLUDE_DIRS})
###
#### Link Raylib library to the executable
###target_link_libraries(${PROJECT_NAME} PRIVATE ${raylib_LIBRARIES})
###
#### Additional linker flags
###target_link_libraries(${PROJECT_NAME} PRIVATE -lglfw -lm -ldl -lpthread)
###
######configure_file(raylib.pc.in src/raylib.h)
######set(raylib_DIR PUBLIC "${HOME}/opt/raylib-4.5.0/cmake")

##############################################################################

####set(CMAKE_CXX_STANDARD 11)
###
###find_package(raylib REQUIRED)
###
###set(SOURCES src/main.c)
###
#### Set compiler flags for debug version
###set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall -Wextra -Werror -Og")
###
###add_executable(${PROJECT_NAME} ${SOURCES})
###
###target_include_directories(${PROJECT_NAME} PRIVATE ${raylib_INCLUDE_DIRS})
###
#### Link Raylib library to the executable
###target_link_libraries(${PROJECT_NAME} PRIVATE ${raylib_LIBRARIES})
###
#### Additional linker flags
###target_link_libraries(${PROJECT_NAME} PRIVATE -lglfw -lm -ldl -lpthread)
