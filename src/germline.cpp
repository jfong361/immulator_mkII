//
// @author: jiahong
// @date  : 24/02/18 5:22 PM
//

#include <iostream>
#include "germline.h"


namespace immulator {
std::ostream
&operator<<(std::ostream &os, const immulator::Germline &germ) {
    return os << germ.ascnum_ << '|' << germ.name_ << '\n' << germ.seq_;
}

immulator::Germline
operator+(immulator::Germline lhs, const immulator::Germline &rhs) {
    return lhs += rhs;
}


}

