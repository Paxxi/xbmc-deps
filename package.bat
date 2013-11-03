mkdir packaging
mkdir packaging\system
mkdir packaging\project\BuildDependencies\lib
mkdir packaging\project\BuildDependencies\include

set SYSTEM_DIR=packaging\system\
set LIB_DIR=packaging\project\BuildDependencies\lib\
set INCLUDE_DIR=packaging\project\BuildDependencies\include\
set BUILD_DIR=project\deps\release\

REM #######################
REM bzip2 section
REM #######################
xcopy /y %BUILD_DIR%bzip* %LIB_DIR%
xcopy /y bzip2\bzlib.h %INCLUDE_DIR%

REM #######################
REM dnssd section
REM #######################
xcopy /y %BUILD_DIR%dnssd*lib %LIB_DIR%
xcopy /y %BUILD_DIR%dnssd*pdb %LIB_DIR%
xcopy /y %BUILD_DIR%dnssd.dll %SYSTEM_DIR%
xcopy /y dnssd\mDNSShared\dns_sd.h %INCLUDE_DIR%

REM #######################
REM Taglib section
REM #######################
mkdir %INCLUDE_DIR%taglib
xcopy /y %BUILD_DIR%tag* %LIB_DIR%
xcopy /y taglib\taglib\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\ape\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\asf\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\flac\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\it\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\mod\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\mp4\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\mpc\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\mpeg\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\ogg\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\riff\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\s3m\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\toolkit\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\toolkit\*.tcc %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\trueaudio\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\wavpack\*.h %INCLUDE_DIR%taglib\
xcopy /y taglib\taglib\xm\*.h %INCLUDE_DIR%taglib\

REM #######################
REM TinyXML section
REM #######################
xcopy /y %BUILD_DIR%tinyxml* %LIB_DIR%
xcopy /y tinyxml\tinystr.h %INCLUDE_DIR%
xcopy /y tinyxml\tinyxml.h %INCLUDE_DIR%