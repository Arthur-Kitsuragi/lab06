#include "formatter_ex.h"
//fdddddddd
#include "formatter.h"

std::ostream& formatter(std::ostream& out, const std::string& message)
{
    return out << formatter(message);
}
