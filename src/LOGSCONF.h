#ifndef _H_LOGCONF_
#define _H_LOGCONF_

/*
 * iLOG3 - 标准c日志函数库 日志句柄集合简单配置文件接口
 * author	: calvin
 * email	: calvinwilliams.c@gmail.com
 * LastVersion	: v1.0.5
 *
 * Licensed under the LGPL v2.1, see the file LICENSE in base directory.
 */

#ifdef __cplusplus
extern "C" {
#endif

#if ( defined _WIN32 )
#ifndef _WINDLL_FUNC
#define _WINDLL_FUNC		_declspec(dllexport)
#endif
#elif ( defined __unix ) || ( defined __linux__ )
#ifndef _WINDLL_FUNC
#define _WINDLL_FUNC
#endif
#endif

#include "LOG.h"
#include "LOGS.h"
#include "LOGCONF.h"

/* 函数返回值宏 */
_WINDLL_FUNC LOGS *CreateLogsHandleFromConfig( char *config_filename , char *postfix );

#ifdef __cplusplus
}
#endif

#endif
