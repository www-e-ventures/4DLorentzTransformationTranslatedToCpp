#include <cmath>
#include "../include/lorentz_transform.h"
//https://e.ventures
//the@e.ventures
//MIT License
namespace lorentz {

    LorentzTransform::LorentzTransform(double beta_x, double beta_y, double beta_z)
            : beta_x_(beta_x), beta_y_(beta_y), beta_z_(beta_z) {
        double beta2 = beta_x * beta_x + beta_y * beta_y + beta_z * beta_z;
        gamma_ = 1.0 / std::sqrt(1.0 - beta2);
    }

    Vector4D LorentzTransform::transform(const Vector4D &vec) const {
        double ct_prime = gamma_ * (vec.ct() - (beta_x_ * vec.x() + beta_y_ * vec.y() + beta_z_ * vec.z()));
        double x_prime = gamma_ * (vec.x() - beta_x_ * vec.ct());
        double y_prime = gamma_ * (vec.y() - beta_y_ * vec.ct());
        double z_prime = gamma_ * (vec.z() - beta_z_ * vec.ct());

        return Vector4D(ct_prime, x_prime, y_prime, z_prime);
    }
}// namespace lorentz