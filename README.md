# CppLibWithTestsAndExamples/
A cookiecutter template for a C++ project (vscode) with one lib, unittests and examples (similar to the structure crated by cargo/rust).

## How to use

How to use, after installing cookiecutter (`pip install cookiecutter`):
```
  cookiecutter https://github.com/goto40/CppLibWithTestsAndExamples.git
```

Then enter the newly created repo and start programming (e.g. with vscode or manually)!
```
mkdir build
cd build
cmake ..
make
```

 * A library is created.
 * A unittest executable is created.
 * Examples are created (every *.cpp file in `examples`results in one executable).


## Included external files


We use two files from [https://github.com/rpavlik/cmake-modules](https://github.com/rpavlik/cmake-modules) as described [here](https://ipenguin.ws/2012/11/cmake-automatically-use-git-tags-as.html) to deduce the version from git tags (`project-name`/cmake/modules/GetGitRevisionDescription.cmake* ):

    Copyright 2009-2014, Iowa State University. or Copyright 2014-2017, Sensics, Inc., or Copyright 2018-2020, Collabora, Ltd., or Copyright 2009-2020, Ryan A. Pavlik

    Distributed under the Boost Software License, Version 1.0.

    (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

