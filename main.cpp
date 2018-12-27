#include <iostream>

class Point {
private:
    int a;
    char c;
    int c_f;
public:
    //первое задание//
    int getA () const {
        return a;
    }

    void setA (int a) {
        Point::a = a;
    }

    char getC () const {
        return c;
    }

    void setC (char c) {
        //to 5 task//
        int c_f = 1;
        Point::c = c;
    }

    int* getAadr () {
        return &a;
    }

    char* getCadr () {
        return &c;
    }

    void setAfromadr (const int* new_value) {
        a = *new_value;
    }

    void setCfromadr (const char* new_value) {
        c = *new_value;
    }

    //4 задание часть 1//
    int notequal(Point &a1) {
        return (a!= a1.getA() && c!=a1.getC());
    }

    //5//
    void test_char () {
        if (c_f == 1) {
            if (c >= 'a' && c <= 'z')
                c += ('A' - 'a');
            else if (c >= 'A' && c <= 'Z')
                c -= ('A' - 'a');
            else
                std::cout << "error" << std::endl;
        }
    }

};

int main() {
    //второе задание//
    Point x;
    x.setA(5.5);
    std::cout <<*((float*)x.getAadr())<< std::endl;

    //четвертое задание часть 2//
    Point b,y,z;
    y.setA(3);
    z.setA(1);
    y.setC('3');
    y.setC('1');
    std::cout << (b.notequal(y)?"True":"False") << std::endl;

    //пятое задание//
    Point v;
    v.setC('f');
    v.test_char();
    std::cout << v.getC() << std::endl;
    return 0;

};
