# GPP: Gnuplot Pipeline Library

Really simple, header-only C++ library for creating and using a Gnuplot pipeline.
Only for direct communication with Gnuplot without special functions for handling files.


## Example

```c++
    #include <libgpp/pipe.hpp>

    int main() {
      gpp::pipe plot{};
      plot << "plot sin(x)\n"
           << "replot 0.5*cos(x)\n";
    }
```