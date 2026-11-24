#include "include/Image.h"
#include <stdexcept>

Image::Image():width(0), height(0) {

}

Image::Image(std::size_t _width, std::size_t _height) :width(_width), height(_height),pixels(_width*_height) {

}

void Image::SetPixel(std::size_t x, std::size_t y, const Color& color) {
	
	if (y >= height || x >= width) {
		throw  std::out_of_range("An exception occurred!");
	}
	std::size_t index = x + width * y;
	pixels[index] = color;
}

Color Image::GetPixel(std::size_t x, std::size_t y) const{
	if (y >= height || x >= width) {
		throw  std::out_of_range("An exception occurred!");
	}
	std::size_t index = x + width * y;
	return pixels[index];
}

std::size_t Image::GetWidth() const{
	return width;
}

std::size_t Image::GetHeight() const{
	return height;
}