echo 'start auto build by Jenkins’
set PATH=C:\mingw64\bin;%PATH%
g++ --version

g++ main.cpp -o main

echo 'build is complete'

exit /b %ERRORLEVEL%