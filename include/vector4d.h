#ifndef VECTOR4D_H
#define VECTOR4D_H

namespace lorentz {

    class Vector4D {
    public:
        Vector4D(double ct, double x, double y, double z);

        double ct() const;
        double x() const;
        double y() const;
        double z() const;

    private:
        double ct_, x_, y_, z_;
    };

} // namespace lorentz

#endif // VECTOR4D_H
