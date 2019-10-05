#include <libgpp/pipe.hpp>

int main() {
  gpp::pipe plot{};
  plot << "plot sin(x)\n"
       << "replot 0.5*cos(x)\n";
}