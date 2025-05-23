#pragma once
#include <stdio.h>

class IShape {
public:
	virtual void Size();
	virtual	void Draw();
	
protected:
	const char* name;
    float radius = 4;
	int wide = 2;
	int height = 3;
};