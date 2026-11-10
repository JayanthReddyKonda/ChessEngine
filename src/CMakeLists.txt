# CMakeList.txt : CMake project for ChessEngine, include source and define project specific logic here.

# Add source to this project's executable.

add_library(chess_core STATIC
    chess/types.cpp
)

target_include_directories(chess_core
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}"
)

add_executable(ChessEngine
    app/main.cpp
)


target_link_libraries(chess_core
    PRIVATE
        project_warnings
)

target_link_libraries(ChessEngine
    PRIVATE
        chess_core
        project_warnings
)


# TODO: Add tests and install targets if needed.
