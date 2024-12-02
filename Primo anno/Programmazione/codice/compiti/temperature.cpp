#include <iostream>
#define LOWER_LIMIT 0
#define UPPER_LIMIT 50000

void getData(int &startTemperature, int &endTemperature, int &step)
{
  do
  {
    std::cout << std::endl
              << "Insert the starting temperature (°C >=" << LOWER_LIMIT << "): ";
    std::cin >> startTemperature;
    if (std::cin.fail()) {
      std::cin.clear();
    }
  } while (startTemperature < 0);
  do
  {
    std::cout << std::endl
              << "Insert the ending temperature (°C " << startTemperature << " < ending temperature < " << UPPER_LIMIT << "): ";
    std::cin >> endTemperature;
    if (std::cin.fail()) {
      std::cin.clear();
    }
  } while (endTemperature > UPPER_LIMIT && endTemperature < startTemperature);
  do
  {
    std::cout << std::endl
              << "Insert the step: ";
    std::cin >> step;
    if (std::cin.fail()) {
      std::cin.clear();
    }
  } while (step < 0 && step > endTemperature - startTemperature);
}

float toFarenheit(int &celsius) {
  return ((float)celsius * 9/5) + (float)32;
}


int main(int argc, char const *argv[])
{
  int startTemperature = 0;
  int endTemperature = 0;
  int step = 0;

  getData(startTemperature, endTemperature, step);

  std::cout << "\n\nCelsius\t\tFahrenheit";
  std::cout << "\n-------\t\t----------\n";

  while (startTemperature < endTemperature)
  {
    printf("%-3.3f\t\t%-3.3f\n", (float)startTemperature, toFarenheit(startTemperature));
    startTemperature += step;
  }
  return 0;
}
