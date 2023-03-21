cmake_minimum_required(VERSION 3.25)
project(TutoProjetEfrei2 C)

set(CMAKE_C_STANDARD 99)

add_executable(TutoProjetEfrei2 main.c dog.c dog.h horse.c horse.h Animal.c Animal.h typeanimal.h)
