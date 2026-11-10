include(FetchContent)

FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG v2.5.3
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(doctest)

add_executable(chess_tests
    unit/test_types.cpp
)

target_link_libraries(chess_tests
    PRIVATE
        chess_core
        doctest::doctest
        project_warnings
)

add_test(NAME chess_tests COMMAND chess_tests)