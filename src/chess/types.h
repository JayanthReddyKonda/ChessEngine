# pragma once

namespace chess
{
	enum class Color
	{
		White,
		Black
	};

	[[nodiscard]] Color opposite_color(Color color);
}