#pragma once

#include "SFML/Graphics.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

namespace utility {

	extern bool loadFromFile(const std::string& path, sf::Texture& tex);

}