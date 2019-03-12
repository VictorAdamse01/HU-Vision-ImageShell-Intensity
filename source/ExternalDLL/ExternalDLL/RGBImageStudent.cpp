#include "RGBImageStudent.h"
#include <algorithm>

RGBImageStudent::RGBImageStudent() : RGBImage() {}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	this->values = other.values;
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height), values(width, std::vector<RGB>(height, RGB())) {}

RGBImageStudent::~RGBImageStudent() {}

void RGBImageStudent::set(const int width, const int height) {
	this->values.resize(width);
	std::fill(this->values.begin(), this->values.end(), std::vector<RGB>(height, RGB()));
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	this->values = other.values;
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	this->values[x][y] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	this->values[i % this->values.size()][int(i / this->values.size())] = pixel;
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return this->values[x][y];
}

RGB RGBImageStudent::getPixel(int i) const {
	return this->values[i % this->values.size()][int(i / this->values.size())];
}