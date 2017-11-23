//
// Created by mho on 11/23/17.
//

#include "quadrature.h"

namespace pnt {

namespace quad {

double simps(const array_type &y, const array_type &x, double dx, long axis) {
    auto ndim = y.ndim();
    if(axis == -1) {
        axis = ndim -1;
    }
    auto last_dx = dx;
    auto first_dx = dx;
    auto N = y.shape(axis);
    if(x.size() > 0) {
        if (x.ndim() != ndim) {
            throw std::invalid_argument("x and y did not have the same shape");
        }
        if (x.shape(axis) != N) {
            throw std::invalid_argument("x and y are required to have the same length");
        }
    }
    if(N%2 == 0) {

    } else {

    }
}

}

}