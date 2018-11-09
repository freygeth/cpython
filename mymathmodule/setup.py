from distutils.core import setup, Extension

module = Extension("mymath", sources=["mymathmodule.c"])

setup(name="MyMath",
      version="1.0",
      description="Basic math functions.",
      ext_modules=[module])
