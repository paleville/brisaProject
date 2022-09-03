#include "loadFromFile.h"

namespace utility {


	bool loadFromFile(const std::string& path, sf::Texture& tex) {
		std::fstream file(path, std::ios::in | std::ios::binary);
		if (!file.is_open()) {
			std::cerr << "Error opening file: " << path << "\n";
			return false;
		}

		std::stringstream data;
		data << file.rdbuf();
		file.close();

		if (!tex.loadFromMemory(data.str().c_str(), data.str().size())) {
			std::cerr << "Failed to load texture: " << path << "\n";
			return false;
		}
		return true;
	}

}