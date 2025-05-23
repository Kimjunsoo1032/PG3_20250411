#include "IShape.h"

void IShape::Size() {
	answer = radius * radius * 3.14f;
}

void IShape::Draw() {
	printf("円の面積：%0.2f\n", answer);
}