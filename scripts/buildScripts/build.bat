set "ROOT=%~dp0..\.."
set "BUILD=%ROOT%\build"

if not exist "%BUILD%" mkdir "%BUILD%"

cmake -S "%ROOT%" -B "%BUILD%"
if errorlevel 1 exit /b 1

cmake --build "%BUILD%"
if errorlevel 1 exit /b 1
