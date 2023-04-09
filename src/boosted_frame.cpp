#include "../include/boosted_frame.h"

namespace lorentz {

    BoostedFrame::BoostedFrame(double beta_x, double beta_y, double beta_z)
            : LorentzTransform(beta_x, beta_y, beta_z) {}

} // namespace lorentz
