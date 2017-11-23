//
// Created by mho on 11/23/17.
//

#ifndef PYNUMTOOLS_QUADRATURE_H
#define PYNUMTOOLS_QUADRATURE_H

#include <pybind11/numpy.h>

namespace py = pybind11;

namespace pnt {

namespace quad {

using array_type = py::array_t<double, py::array::c_style>;

double simps(const array_type &y, const array_type &x, double dx=-1, long axis = -1);

}

}

#endif //PYNUMTOOLS_QUADRATURE_H
