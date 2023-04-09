#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "include/vector4d.h"
#include "include/boosted_frame.h"
//https://e.ventures
//the@e.ventures
//MIT License
using namespace lorentz;

void print_vector(const Vector4D& vec) {
    std::cout << "ct: " << vec.ct() << ", x: " << vec.x() << ", y: " << vec.y() << ", z: " << vec.z() << std::endl;
}

int main() {
    Vector4D vec(1.0, 1.0, 1.0, 1.0);
    BoostedFrame boosted_frame(0.5, 0.0, 0.0);

    std::vector<Vector4D> vectors = {vec, vec, vec};

    // Using a lambda function
    std::transform(vectors.begin(), vectors.end(), vectors.begin(),
                   [&](const Vector4D& vec) { return boosted_frame.transform(vec); });

    // Using std::bind
    std::transform(vectors.begin(), vectors.end(), vectors.begin(),
                   std::bind(&BoostedFrame::transform, boosted_frame, std::placeholders::_1));

    for (const auto& vec : vectors) {
        print_vector(vec);
    }

    return 0;
}
