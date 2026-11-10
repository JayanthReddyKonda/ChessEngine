
#include "types.h"

namespace chess 
{
	Color opposite_color(Color color)
	{
		return color == Color::White ? Color::Black : Color::White;
	}
}