# DJ++

Audio manipulation with C++

## Dependencies

- [Git](https://git-scm.com): for version control
- [SFML library](https://github.com/SFML/SFML) : For playing audio

## Build 

- Use a C++ compiler in the directory housing the .cpp files. 
- Link SFML libraries with their corresponding flags. 

``` shell
$ clang++ songloop.cpp -std=c++2a -o songloop.k -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system
```

- Run compiled app:

``` shell
$ ./songloop.k
```

## License

[![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](http://badges.mit-license.org)

- **[MIT license](./LICENSE)**
- Copyright 2022 © <a href="https://github.com/andrewrgarcia" target="_blank">Andrew Garcia, PhD</a>.
