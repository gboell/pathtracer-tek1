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
Dependencies :
- build-essential
- libx11-dev 
- libxt-dev 
- libxtst-dev 

Building the project :
- `cd minilibx && make`
- `cd .. && make`
