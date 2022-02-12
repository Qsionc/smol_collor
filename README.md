# smol::color

Welcome to another useless library that i created because i had few free minutes.<br>
What this library does, is:
```shell
$ echo "\033[01;33mFunny Coloring"
Funny Coloring
```

Just believe, that 'Funny Coloring' is in bold yellow - trust.

---
# Installation

Just run

```shell
$ mkdir build
$ cd build
$ cmake .. -DCMAKE_INSTALL_PREFIX="${HOME}/.local/" # Path to your local folder
$ cmake --build . --target install
```
if you want `debug` or

```shell
$ mkdir build
$ cd build
$ cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="${HOME}/.local/" # Path to your local folder
$ cmake --build . --target install
```

if u want `release`

Then just include in your program where you want colors on terminal:
```C++
#include <iostream>
#include <smol_color.h>

using namespace smol;

int main() {
    std::cout << color{foreground::yellow, form::bold} << "Funny Coloring" << smol::endl;
    return 0;
}
```
This should return yellow `Funny Coloring` but you never know...

---
##Enjoy!