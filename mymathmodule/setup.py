from distutils.core import setup, Extension
# Nombre el módulo y archivos que contienen el código de fuente.
module = Extension("mymath", sources=["mymathmodule.c"])
# Nombre del paquete, versión, descripción y una lista con las extensiones.
setup(name="MyMath",
      version="1.0",
      description="Basic math functions.",
      ext_modules=[module])