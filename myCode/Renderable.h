/*
 * Renderable.h
 *
*  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#ifndef RENDERABLE_H
#define RENDERABLE_H

#include <string>

// Forward declaration of Scene class
class Scene;

/**
 * @class Renderer
 * @brief Handles rendering of the scene.
 */
class Renderer {
public:
    /// @brief Renders all primitives in the scene.
    /// @param scene The scene to be rendered.
    void renderScene(const Scene& scene) const;
};

#endif /* RENDERABLE_H_ */
