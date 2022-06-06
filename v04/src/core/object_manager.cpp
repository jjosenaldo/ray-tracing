#include "object_manager.h"
#include "sphere.h"

void ObjectManager::add_object(Primitive* obj) {
    obj_list.push_back(obj);
}

void ObjectManager::add_material(Material* _mat) {
     materials.push_back(_mat);
}

void ObjectManager::instantiate_sphere(const Point3f& _c, const float& _r, Material* mat) {
    Shape* s = new Sphere(_c, _r);
    this->add_object(new GeometricPrimitive(s, mat));
}

Material* ObjectManager::get_material(void) {
    return materials.back();
}

std::vector< Primitive* >& ObjectManager::get_object_list(void) {
	return obj_list;
}
