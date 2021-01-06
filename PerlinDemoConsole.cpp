#include <cmath>
#include <iostream>
#include "PerlinNoise.h"

int main() {
	// Define the size of the console output
	unsigned int width = 200, height = 200;

	// Create a PerlinNoise object with a random permutation vector generated with seed
	unsigned int seed = 267;
	PerlinNoise pn(seed);

	unsigned int kk = 0;
	// Visit every pixel of the image and assign a color generated with Perlin noise
	for(unsigned int i = 0; i < height; ++i) {     // y
		for(unsigned int j = 0; j < width; ++j) {  // x
			double x = (double)j/((double)width);
			double y = (double)i/((double)height);

			// Typical Perlin noise
			double n = pn.noise(20 * x, 20 * y, 0.2);
			if(n > 0.5) {
                std::cout << "#";
            } else {
                std::cout << ".";
			}
		}
        std::cout << std::endl;
	}

	return 0;
}