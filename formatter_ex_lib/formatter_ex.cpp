#include "formatter_ex.h"
//fddddddddd
#include "formatter.h"

std::ostream& formatter(std::ostream& out, const std::string& message)
{
    return out << formatter(message);
}
