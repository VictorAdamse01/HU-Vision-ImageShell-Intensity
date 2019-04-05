#include "IntensityImageStudent.h"
#include <algorithm>

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	this->values = other.values;
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height), values(width,std::vector<Intensity>(height,0)) {
}

IntensityImageStudent::~IntensityImageStudent() {
}

void IntensityImageStudent::set(const int width, const int height) {
	this->values.resize(width);
	std::fill(values.begin(), values.end(), std::vector<Intensity>(height, 0));
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	this->values = other.values;
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	this->values[x][y] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	this->values[i % getWidth()][int(i / getWidth())] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return this->values[x][y];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	return this->values[i % getWidth()][int(i / getWidth())];
}