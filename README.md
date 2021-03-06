Pathtracer & Raytracer
======================
TEK1 / First year project at Epitech

An image generator using Raytracing and Pathtracing.

You can lauch a render, with this syntax :

`./rt raytrace|pathtrace scene_filename [pathtracing quality]`

Scenes are located in the scenes directory, use scenes located in the pathtracer and raytracer directories with the matches rendering methods

Pathtracing quality is the number of launched rays per pixel, lower value = lower quality but faster rendering

Building the project
====================
Builds on GNU/Linux

Should be buildable on OSX after some changes regarding X11

Dependencies :
- build-essential
- libx11-dev 
- libxt-dev 
- libxtst-dev 

Building the project :
- `cd minilibx && make`
- `cd .. && make`

Examples
========
- `./rt raytrace scenes/raytracer/file2.rt` (raytracing)
- `./rt pathtrace scenes/pathtracer/ambiant2.rt 1` (low quality pathtracing)
- `./rt pathtrace scenes/pathtracer/ambiant2.rt 1000` (high quality pathtracing)
