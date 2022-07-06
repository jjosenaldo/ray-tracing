#ifndef BLINN_PHONG_MATERIAL_H
#define BLINN_PHONG_MATERIAL_H

#include "material.h"
#include "vec3.h"

class BlinnPhongMaterial: public Material {
    public:
        ColorXYZ ka; // ambient
        ColorXYZ kd; // diffuse
        ColorXYZ ks; // specular
        ColorXYZ mirror; 
        int g; // glossiness

        BlinnPhongMaterial(const ColorXYZ _ka, const ColorXYZ _kd, const ColorXYZ _ks, const ColorXYZ _mirror, const int _g) : 
            ka{_ka}, kd{_kd}, ks{_ks}, mirror{_mirror}, g{_g}{/* empty */ }
        ~BlinnPhongMaterial(){}
};

#endif