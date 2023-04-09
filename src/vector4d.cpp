#include "../include/vector4d.h"

namespace lorentz {

    Vector4D::Vector4D(double ct, double x, double y, double z)
            : ct_(ct), x_(x), y_(y), z_(z) {}

    double Vector4D::ct() const { return ct_; }
    double Vector4D::x() const { return x_; }
    double Vector4D::y() const { return y_; }
    double Vector4D::z() const { return z_; }

} // namespace lorentz
