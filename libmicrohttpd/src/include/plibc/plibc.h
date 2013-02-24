#pragma once
/*
     This file is part of PlibC.
     (C) 2005, 2006, 2007, 2008, 2009, 2010 Nils Durner (and other contributing authors)

	   This library is free software; you can redistribute it and/or
	   modify it under the terms of the GNU Lesser General Public
	   License as published by the Free Software Foundation; either
	   version 2.1 of the License, or (at your option) any later version.

	   This library is distributed in the hope that it will be useful,
	   but WITHOUT ANY WARRANTY; without even the implied warranty of
	   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	   Lesser General Public License for more details.

	   You should have received a copy of the GNU Lesser General Public
	   License along with this library; if not, write to the Free Software
	   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/**
 * @file include/plibc.h
 * @brief PlibC header
 * @attention This file is usually not installed under Unix,
 *            so ship it with your application
 * @version $Revision: 87 $
 */

#ifndef _PLIBC_H_
#define _PLIBC_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <ws2tcpip.h>
#include <windows.h>
#include <sys/types.h>
#include <time.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>
#include <stdarg.h>

#define PROT_READ   0x1
#define PROT_WRITE  0x2
#define MAP_SHARED  0x1
#define MAP_PRIVATE 0x2 /* unsupported */
#define MAP_FIXED   0x10
#define MAP_FAILED  ((void *)-1)

#define sleep(secs) (Sleep(secs * 1000))

#define SHUT_WR SD_SEND
#define SHUT_RD SD_RECEIVE
#define SHUT_RDWR SD_BOTH

#define strcasecmp(a, b) stricmp(a, b)
#define wcscasecmp(a, b) wcsicmp(a, b)
#define strncasecmp(a, b, c) strnicmp(a, b, c)
#define wcsncasecmp(a, b, c) wcsnicmp(a, b, c)

#define DIR_SEPARATOR '\\'
#define DIR_SEPARATOR_STR "\\"
#define PATH_SEPARATOR ';'
#define PATH_SEPARATOR_STR ";"
#define NEWLINE "\r\n"

#define CREAT(p, m) _creat(p, m)
#define OPEN _open
//microhttpd aren't using any file handles so set this to closesocket
#define CLOSE(f) closesocket(f)
#define LSEEK(f, o, w) _lseek(f, o, w)
#define ACCESS(p, m) access(p, m)
#define PIPE(h) MHD_win_pipe(h)
#define RANDOM() rand()
#define SRANDOM(s) srand(s)
#define STAT(p, b) _stat(p, b)
#define WRITE(f, b, n) write(f, b, n)
#define READ(f, b, n) _read(f, b, n)
#define MMAP(s, l, p, f, d, o) NULL
#define MUNMAP(s, l) ;
#define STRERROR(i) strerror(i)
#define PRINTF(f, ...) printf(f , __VA_ARGS__)
#define FPRINTF(fil, fmt, ...) fprintf(fil, fmt, __VA_ARGS__)
#define VPRINTF(f, a) vprintf(f, a)
#define VFPRINTF(s, f, a) vfprintf(s, f, a)
#define VSPRINTF(d, f, a) vsprintf(d, f, a)
#define VSNPRINTF(str, size, fmt, a) vsnprintf(str, size, fmt, a)
#define _REAL_SNPRINTF(str, size, fmt, ...) snprintf(str, size, fmt, __VA_ARGS__)
#define SPRINTF(d, f, ...) sprintf(d, f, __VA_ARGS__)
#define ACCEPT(s, a, l) accept(s, a, l)
#define BIND(s, n, l) bind(s, n, l)
#define CONNECT(s, n, l) connect(s, n, l)
#define GETPEERNAME(s, n, l) getpeername(s, n, l)
#define GETSOCKNAME(s, n, l) getsockname(s, n, l)
#define GETSOCKOPT(s, l, o, v, p) getsockopt(s, l, o, v, p)
#define LISTEN(s, b) listen(s, b)
#define RECV(s, b, l, f) recv(s, b, l, f)
#define RECVFROM(s, b, l, f, r, o) recvfrom(s, b, l, f, r, o)
#define SELECT(n, r, w, e, t) select(n, r, w, e, t)
#define SEND(s, b, l, f) send(s, b, l, f)
#define SENDTO(s, b, l, f, o, n) sendto(s, b, l, f, o, n)
#define SETSOCKOPT(s, l, o, v, n) setsockopt(s, l, o, v, n)
#define SHUTDOWN(s, h) shutdown(s, h)
#define SOCKET(a, t, p) socket(a, t, p)
#define GETHOSTBYADDR(a, l, t) gethostbyname(a, l, t)
#define GETHOSTBYNAME(n) gethostbyname(n)
#define TSEARCH(k, r, c) tsearch(k, r, c)
#define TFIND(k, r, c) tfind(k, r, c)
#define TDELETE(k, r, c) tdelete(k, r, c)
#define TWALK(r, a) twalk(r, a)
#define TDESTROY(r, f) tdestroy(r, f)

#ifdef __cplusplus
}
#endif


#endif //_PLIBC_H_

/* end of plibc.h */
