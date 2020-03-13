@echo off
for /d %%i in (.\*) do (
cd %%i
if exist "build.bat" (
echo Running build in %%i
echo ============ %%i / build.bat ============
if "%1" == "" (
call build.bat all
) else (
call build.bat %1
)
echo ==========================================
)
cd ..
)