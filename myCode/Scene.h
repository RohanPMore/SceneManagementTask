/*
 * Scene.h
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#ifndef SCENE_H_
#define SCENE_H_

#include "PrimitiveParent.h"
#include "Renderable.h"

/// @brief Represents a scene containing primitives.
/// The Scene class manages a collection of primitives within
/// the scene. It provides methods to add, remove, display, save, and load
/// the scene to and from persistent storage.
class Scene {
private:
    PrimitiveParent primitiveParent; ///< Parent node managing all primitives.
    Renderer renderer; ///< Handles rendering.

public:
    /// @brief Saves the current scene to a file.
    /// Serializes the primitive objects in the scene and writes them to a file
    /// (in this case, "scene.txt").
    void saveScene();

    /// @brief Loads the scene from a file.
    /// Reads the scene data from a file (in this case, "scene.txt") and
    /// deserializes the primitives to restore the scene.
    void loadScene();

    /// @brief Adds a primitive to the scene.
    /// Adds the given primitive object to the scene for further management
    /// and rendering.
    /// @param primitive The primitive object to add to the scene.
    void addPrimitive(Primitive* primitive);

    /// @brief Removes a primitive from the scene.
    /// Removes the given primitive object from the scene.
    /// @param primitive The primitive object to remove from the scene.
    void removePrimitive(Primitive* primitive);

    /// @brief Retrieves all primitives currently in the scene.
    /// Returns a reference to a vector containing all primitive objects in the scene.
    /// @return A vector of pointers to the primitives in the scene.
    const std::vector<Primitive*>& getPrimitives() const;

    /// @brief Renders the scene using the Renderer class.
    void renderScene() const;
};

#endif /* SCENE_H_ */
