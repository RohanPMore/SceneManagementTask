/*
 * Renderable.cpp
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#include "Renderable.h"
#include <iostream>
#include "Scene.h"
#include <vector>

void Renderer::renderScene(const Scene& scene) const {
    std::cout << "Rendering Scene..." << std::endl;
    const std::vector<Primitive*>& primitives = scene.getPrimitives();
    for (const auto& primitive : primitives) {
        std::cout << primitive->renderListView() << std::endl;
    }
}

