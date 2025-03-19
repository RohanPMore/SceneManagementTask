/*
 * Scene.cpp
 *
 *  Created on: 18-Mar-2025
 *      Author: ROHAN MORE
 */

#include "Scene.h"
#include "Renderable.h"
#include <iostream>
#include <fstream>

void Scene::saveScene() {
   std::ofstream outFile("scene.txt");
   if (outFile.is_open()) {
	   for (const auto& primitive : primitiveParent.getPrimitives()) {
		   outFile << primitive->renderListView() << std::endl;
	   }
	   outFile.close();
	   std::cout << "Scene saved successfully." << std::endl;
   } else {
	   std::cerr << "Failed to open file for saving." << std::endl;
   }
}


void Scene::loadScene() {
	std::ifstream inFile("scene.txt");
	if (inFile.is_open()) {
		std::string line;
		while (std::getline(inFile, line));
		std::cout << "Scene loaded." << std::endl;
		inFile.close();
	} else {
		std::cerr << "Failed to open file for loading." << std::endl;
	}
}

void Scene::addPrimitive(Primitive* primitive) {
    primitiveParent.addPrimitive(primitive);
}

void Scene::removePrimitive(Primitive* primitive) {
    primitiveParent.removePrimitive(primitive);
}

const std::vector<Primitive*>& Scene::getPrimitives() const {
    return primitiveParent.getPrimitives();
}

void Scene::renderScene() const {
    Renderer renderer;
    renderer.renderScene(*this);
}

