//
// Created by adnan on 6/26/25.
//

#ifndef VEX3_H
#define VEX3_H



class vec3 {
private:
    double x , y, z;
public:
    vec3() : x(0.0), y(0.0), z(0.0) {}
    vec3(double x, double y, double z) : x(x), y(y),z(z) {}
    vec3(double v): x(v), y(v), z(v) {}

    [[nodiscard]] double X() const { return x; }
    [[nodiscard]] double Y() const { return y; }
    void operator=(const vec3 &v) {
        this->x = v.x;
        this->y = v.y;
        this->z = v.z;
    }

    void operator += (const vec3 &v) {
        this->x += v.x;
        this->y += v.y;
        this->z += v.z;
    }

    void operator++() {
        this->x++;
        this->y++;
        this->z++;
    }

    void operator--() {
        this->x--;
        this->y--;
        this->z--;
    }

    void operator+(const vec3 &a)  {
        this->x+=a.x;
        this->y+=a.y;
        this->z+=a.z;
    }

    void operator-(const vec3 &a) {
        this->x-=a.x;
        this->y-=a.y;
        this->z-=a.z;
    }
    void operator*(const vec3 &a) {
        this->x*=a.x;
        this->y*=a.y;
        this->z*=a.z;
    }

    //scalar multiplication on vector
    void operator*(const double d) {
        this->x*=d;
        this->y*=d;
        this->z*=d;
    }
    void operator/(const vec3 &a) {
        this->x/=a.x;
        this->y/=a.y;
        this->z/=a.z;
    }

    bool operator==(const vec3 &a) {
        return this->x==a.x && this->y==a.y && this->z==a.z;
    }
    bool operator!=(const vec3 &a) {
        return this->x!=a.x || this->y!=a.y || this->z!=a.z;
    }

    bool operator<(const vec3 &a) {
        return this->x<a.x && this->y<a.y && this->z<a.z;
    }
    bool operator>(const vec3 &a) {
        return this->x>a.x && this->y>a.y && this->z>a.z;
    }
};



#endif //VEX3_H
