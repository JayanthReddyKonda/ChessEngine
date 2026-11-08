# CMakeList.txt : CMake project for ChessEngine, include source and define project specific logic here.

# Add source to this project's executable.
add_executable(ChessEngine
    app/main.cpp
)

if(MSVC)
    target_compile_options(ChessEngine PRIVATE /W4 /permissive-)
endif()


# TODO: Add tests and install targets if needed.
