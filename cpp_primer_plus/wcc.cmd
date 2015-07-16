@echo off 

if defined VS140COMNTOOLS goto vs2015 else if defined VS120COMNTOOLS goto vs2013 else if defined VS110COMNTOOLS goto vs2012 else goto novs

:vs2015
echo CC with vs2015
call "%VS140COMNTOOLS%vsvars32.bat"
goto make

:vs2013
echo CC with vs2013
call "%VS120COMNTOOLS%vsvars32.bat"
goto make

:vs2012
echo CC with vs2012
call "%VS110COMNTOOLS%vsvars32.bat"
goto make

:novs
echo "No Visual Studio"
goto end

:make
echo begin make!
cl /EHsc /nologo %1 /Fo:bin\%~n1.obj /Fe:bin\%~n1.exe

echo done!

:end

