#ifndef LORENTZ_TRANSFORM_H
#define LORENTZ_TRANSFORM_H

#include "../include/vector4d.h"

namespace lorentz {

    class LorentzTransform {
    public:
        LorentzTransform(double beta_x, double beta_y, double beta_z);

        Vector4D transform(const Vector4D& vec) const;

    private:
        double gamma_;
        double beta_x_, beta_y_, beta_z_;
    };

} // namespace lorentz

#endif // LORENTZ_TRANSFORM_H
