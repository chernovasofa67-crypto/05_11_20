#include <iostream>
#include <string>

namespace Namespace1 {
    class Class_1 {
    public:
        void show() { std::cout << "Об'єкт Class_1 із Namespace1\n"; }
    };

    class Class_2 {
    public:
        void show() { std::cout << "Об'єкт Class_2 із Namespace1\n"; }
    };

    class Class_4 {
    public:
        void show() { std::cout << "Об'єкт Class_4 із Namespace1\n"; }
    };
}

namespace Namespace2 {
    class Class_4 {
    public:
        void show() { std::cout << "Об'єкт Class_4 із Namespace2\n"; }
    };

    class Class_3 {
    public:
        void show() { std::cout << "Об'єкт Class_3 із Namespace2\n"; }
    };

    class Class_2 {
    public:
        void show() { std::cout << "Об'єкт Class_2 із Namespace2\n"; }
    };
}

int main() {
    Namespace1::Class_1 obj1;
    Namespace2::Class_4 obj2;
    Namespace2::Class_3 obj3;
    Namespace1::Class_4 obj4;

    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();

    return 0;
}
