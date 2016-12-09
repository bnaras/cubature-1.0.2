# cubature-1.0.2

This is a minimally modified copy of
[cubature-1.0.2 C library](http://ab-initio.mit.edu/wiki/index.php/Cubature)
needed for the for
[R package `cubature`](https://cran.r-project.org/package=cubature).

This C library has a large include file `clencurt.h` that violates
CRAN limitations on size. Therefore, we make it available with the
slight modifications here on github so that the build process may
download it on demand during the build process.

The specific modifications I made are:

- This file

- Added a Makefile for the R package

- Added an `ifdef` macro to avoid the compilation warnings for a couple
  of lines of `hcubature.c` (line 920) and `pcubature.c` (line 310).

