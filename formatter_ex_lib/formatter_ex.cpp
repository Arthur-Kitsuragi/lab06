#include "formatter_ex.h"

#include "formatter.h"
//fff
std::ostream& formatter(std::ostream& out, const std::string& message)
{
    return out << formatter(message);
}
