/*############################################################################
##			NEONCUBE - RAGNAROK ONLINE PATCH CLIENT
##
##  http://openkore.sourceforge.net/neoncube
##  Credits: Jeff Glatt
##  This program is free software; you can redistribute it and/or modify
##  it under the terms of the GNU General Public License as published by
##  the Free Software Foundation; either version 2 of the License, or
##  (at your option) any later version.
##
##  This program is distributed in the hope that it will be useful,
##  but WITHOUT ANY WARRANTY; without even the implied warranty of
##  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
##  GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
##  along with this program; if not, write to the Free Software
##  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
##
##############################################################################*/


#ifndef _BROWSER_H_
#define _BROWSER_H_

#include <windows.h>

#define MYWINAPI __stdcall

#if 0
	#ifdef DLL_BUILDING
	#define MYEXPORT __declspec(dllexport)
	#else
	#define MYEXPORT __declspec(dllimport)
	#endif
#else
	#define MYEXPORT
#endif


#ifdef __cplusplus
extern "C" {
#endif

//########################################################
// Embeds the OLE object to a window
//
// @param hwndWindow - handle of the window
//########################################################
MYEXPORT
long MYWINAPI EmbedBrowserObject(HWND hwndWindow);


//########################################################
// Unemdeds the OLE object from the window
//
// @param hwndWindow - Handle of the window
//########################################################
MYEXPORT
void MYWINAPI UnEmbedBrowserObject(HWND hwndWindow);


//########################################################
// Displays an HTML page
//
// @param hwndWindow - Handle of the window where the page will
//		    be displayed.
//
// @param lpszPath - URL of the page that will be displayed
//########################################################
MYEXPORT
long MYWINAPI DisplayHTMLPage(HWND hwndWindow, LPCTSTR lpszPath);


//########################################################
// Displays String (HTML CODED)
//
// @param hwndWindow - Handle of the window where the page
//			will be displayed.
//
// @param lpszHtmlContent - Pointer to a null terminated string
//			    (the HTML code itself)
//#########################################################
MYEXPORT
long MYWINAPI DisplayHTMLStr(HWND hwndWindow, LPCTSTR lpszHtmlContent);

#ifdef __cplusplus
}
#endif

#endif
