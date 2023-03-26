call cleanproject
mwc.pl -type make -relative SLN_ROOT=%~dp0 -value_template "configurations = 'Debug'"
set path=C:\Qt\Qt6.2\Tools\mingw810_64\bin;%path%
make
pause