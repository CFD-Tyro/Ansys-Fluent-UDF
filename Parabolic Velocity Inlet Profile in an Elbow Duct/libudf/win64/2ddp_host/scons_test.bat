rem 
rem  Copyright 1987-2021 ANSYS, Inc. All Rights Reserved.
rem 
set PYTHONHOME=%FLUENT_INC%/../commonfiles/CPython/3_7/winx64/Release/python
set PYTHONPATH=%FLUENT_INC%/../commonfiles/CPython/3_7/winx64/Release/python
set FLUENT_UDF_COMPILER=clang
set FLUENT_UDF_CLANG=builtin
"%FLUENT_INC%/../commonfiles/CPython/3_7/winx64/Release/python/scons"
