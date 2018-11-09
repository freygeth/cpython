#include <Python.h>
    #define MODULE_DOC "Módulo con operaciones aritméticas básicas."
    static PyObject *
    mymath_add(PyObject *self, PyObject *args)
    {
        long a, b, ret;
        if (!PyArg_ParseTuple(args, "ll", &a, &b))
            return NULL;
        ret = a + b;
        return PyLong_FromLong(ret);
    }
    static PyMethodDef MyMathMethods[] = {
        {"add", mymath_add, METH_VARARGS,
         "Suma los argumentos y retorna el resultado."},
        {NULL, NULL, 0, NULL}
    };
    static struct PyModuleDef MyMathModule = {
       PyModuleDef_HEAD_INIT,
       "mymath",
       MODULE_DOC,
       -1,
       MyMathMethods
    };
    PyMODINIT_FUNC
    PyInit_mymath(void)
    {
        return PyModule_Create(&MyMathModule);
    }