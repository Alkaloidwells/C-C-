@echo off
set PellesCDir=A:\program\c-p\PellesC
rem
echo Setting 64-bit environment for Pelles C...
rem
set PATH=%PellesCDir%\Bin;%PATH%
set INCLUDE=%PellesCDir%\Include;%PellesCDir%\Include\Win;%INCLUDE%
set LIB=%PellesCDir%\Lib;%PellesCDir%\Lib\Win64;%LIB%
