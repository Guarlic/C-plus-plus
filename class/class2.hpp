#pragma once
#ifndef class2_hpp
#define class2_hpp

class Vector2 {
public:
    int x;
    int y;
};

class Vector3 : public Vector2 {
public:
    int z;
};

#endif
