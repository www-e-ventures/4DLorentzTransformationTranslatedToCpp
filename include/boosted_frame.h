#ifndef BOOSTED_FRAME_H
#define BOOSTED_FRAME_H
//https://e.ventures
//the@e.ventures
//MIT License
#include "../include/lorentz_transform.h"

namespace lorentz {

    class BoostedFrame : public LorentzTransform {
    public:
        BoostedFrame(double beta_x, double beta_y, double beta_z);
    };

} // namespace lorentz

#endif // BOOSTED_FRAME_H
