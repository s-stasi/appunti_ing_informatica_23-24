#include <iostream>
#include <array>

class Cerchio {
public:
  Cerchio(float raggio) {
    _raggio = raggio;
  }
  float _raggio;

  float diametro() {
    return _raggio * 2;
  }
};


int main(int argc, char const *argv[])
{
  std:array<int, 4> array = std::array<int, 4>();
  Cerchio nuovoCerchio = Cerchio(2.4);

  std::cout << nuovoCerchio.diametro() << std::endl;
  return 0;
}


