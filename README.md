This is a simple implementation of the d3d9 dll that just returns an error when an application tries to create a d3d9 device.
This behavior is required for Atelier Firis (and probably other Atelier games as well) to start on wine with dxvk.
The mingw-w64 compiler is required to build.
