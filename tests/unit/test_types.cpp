#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include "chess/types.h"

TEST_CASE("opposite_color returns the other color")
{
    CHECK(chess::opposite_color(chess::Color::White) == chess::Color::Black);
    CHECK(chess::opposite_color(chess::Color::Black) == chess::Color::White);
}