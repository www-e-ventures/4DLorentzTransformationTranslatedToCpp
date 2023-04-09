cmake_minimum_required(VERSION 3.25)
project(4DLorentzTransformationTranslatedToCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(4DLorentzTransformationTranslatedToCpp main.cpp include/vector4d.h src/vector4d.cpp include/lorentz_transform.h src/lorentz_transform.cpp include/boosted_frame.h src/boosted_frame.cpp)
