XBMC-deps
================

This is a project trying to get a single place to get all the dependencies needed to build XBMC for Windows. This is only for those wanting to mess about where the prebuilt libs doesn't fit.

For normal development this is handled by XBMC downloading prebuilt libs from the project website

Goals
========

- Everything should build in VS2013
- Single solution to build it all, no mingw or things required
- Minimal to no code changes, just drop in source files in place when upgrading versions

Requirements
======================
- [VS2013 Express or better](http://go.microsoft.com/fwlink/?LinkId=309297&clcid=0x409&slcid=0x409)

Licences
===
All projects are licensed under their own terms, this is just a compilation to make builds easier

Howto
=====
1. Open project/xbmc-deps.sln
4. Build
5. Results should be found in project/deps/$configuration

Versions
===
- taglib version 1.9.1
- bzip version 1.0.6
- freetype version 2.4.11
- harfbuzz version 0.9.10
- tinyxml version 2.6.2
- zlib version 1.2.7
- fontconfig version 2.11.0
- expat version 2.1.0
- pcre version 8.33
- liblzo version 2.0.6
- yajl version 2.0.1
- fribidi version 0.19.5
- sqlite3 version 3.8.1
- dnssd version 333.10