#pragma once
#include <cstddef>
#include <vector>
#include "Color.h"

class Image {
private:
	std::size_t width;
	std::size_t height;
	std::vector <Color> pixels;
public:
	Image();
	Image(std::size_t _width, std::size_t _height);

	void SetPixel(std::size_t x, std::size_t y, const Color& color);

	Color GetPixel(std::size_t x, std::size_t y) const;
	std::size_t GetWidth() const;
	std::size_t GetHeight() const;
};