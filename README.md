XBMC-deps
================

This is a project trying to get a single place to get all the dependencies needed to build XBMC for Windows. This is only for those wanting to mess about where the prebuilt libs doesn't fit.

For normal development this is handled by XBMC downloading prebuilt libs from the project website

Goals
========

- Everything should build in VS2012
- Everything should build in VS2010
- Everything should build for x64
- Single solution to build it all, no mingw or things required

Requirements
======================
- [VS2010 Express or better](http://download.microsoft.com/download/1/D/9/1D9A6C0E-FC89-43EE-9658-B9F0E3A76983/vc_web.exe)
- [Platform SDK v7.1](http://www.microsoft.com/en-us/download/details.aspx?id=8279 "Platform SDK v7.1")

Howto
=====
1. Open project/xbmc-deps.sln
2. make sure that Release x64 is selected
3. make sure that platform toolset is set to sdk7.1 for VS Express and VS2010 for full VS versions
4. Build
5. Results should be found in project/deps/$configuration



