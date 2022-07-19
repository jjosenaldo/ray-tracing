#ifndef DIRECTIONAL_LIGHT_H
#define DIRECTIONAL_LIGHT_H

#include "light.h"
#include "non_ambient_light.h"

class DirectionalLight:  public NonAmbientLight {
    private:
        ColorXYZ I;
    public:
        Vector3f from;
        Vector3f to;
        DirectionalLight(ColorXYZ _I, Vector3f _from, Vector3f _to, ColorXYZ _scale): NonAmbientLight(_scale), I(_I), from(_from), to(_to) {}
        ColorXYZ sample_Li( const Surfel& hit, BlinnPhongMaterial& material, Vector3f* wi, VisibilityTester* vis);
        ColorXYZ get_I();
        // TODO: implement this
        Point3f max_shadow_ray_point(Point3f origin) {return default_point3f();}
};

#endif