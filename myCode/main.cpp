#include "Scene.h"
#include "Sphere.h"
#include "Box.h"
#include "Plane.h"

int main() {
    Scene scene;

    // Create primitives.
    Sphere* sphere = new Sphere(5.0f);
    Box* box = new Box({1.0f, 2.0f, 3.0f});
    Plane* plane = new Plane({4.0f, 5.0f});

    // Add primitives to the scene.
    scene.addPrimitive(sphere);
    scene.addPrimitive(box);
    scene.addPrimitive(plane);

    // Display the current scene
    scene.renderScene();

    // Save and load the scene
    scene.saveScene();
    scene.loadScene();

    // Remove primitives from the scene
    scene.removePrimitive(sphere);
    scene.removePrimitive(box);

    // Display the updated scene
    scene.renderScene();

    return 0;
}
