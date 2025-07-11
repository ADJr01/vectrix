//
// Created by adnan on 6/26/25.
//
#pragma once
#ifndef VEC2_H
#define VEC2_H



class vec2 {
private:
    double x , y;
public:
    vec2() : x(0.0), y(0.0) {}
    vec2(double x, double y) : x(x), y(y) {}
    vec2(double v): x(v), y(v) {}

    [[nodiscard]] double X() const { return x; }
    [[nodiscard]] double Y() const { return y; }
    void operator=(const vec2 &v) {
        this->x = v.x;
        this->y = v.y;
    }

    void operator += (const vec2 &v) {
        this->x += v.x;
        this->y += v.y;
    }

    void operator+(const vec2 &a)  {
        this->x+=a.x;
        this->y+=a.y;
    }

    void operator-(const vec2 &a) {
        this->x-=a.x;
        this->y-=a.y;
    }
    void operator*(const vec2 &a) {
        this->x*=a.x;
        this->y*=a.y;
    }

    //scalar multiplication on vector
    void operator*(const double d) {
        this->x*=d;
        this->y*=d;
    }
    void operator/(const vec2 &a) {
        this->x/=a.x;
        this->y/=a.y;
    }
    void operator%(const vec2 &a) {
        this->x/=a.x;
        this->y/=a.y;
    }
    void operator^(const vec2 &a) {
        this->x*=a.x;
        this->y*=a.y;
    }

    bool operator==(const vec2 &a) {
        return this->x==a.x && this->y==a.y;
    }
    bool operator!=(const vec2 &a) {
        return this->x!=a.x || this->y!=a.y;
    }

    bool operator<(const vec2 &a) {
        return this->x<a.x && this->y<a.y;
    }
    bool operator>(const vec2 &a) {
        return this->x>a.x && this->y>a.y;
    }
};



#endif //VEC2_H
