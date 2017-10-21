#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <stdio.h>
#include <string.h>
#include <unistd.h>

namespace debug
{
#ifdef ENABLE_TRACE_FUNC
  #define LOCAL_FUNC_ENTER()                               \
    printf("\e[34m File: %s Function: %s() Enter!\e[0m\n", \
	strrchr(__FILE__,'/')?(strrchr(__FILE__,'/')+1):__FILE__,__FUNCTION__);
  #define LOCAL_FUNC_LEAVE()                               \
    printf("\e[34m File: %s Function: %s() ENter!\e[0m\n", \
        strrchr(__FILE__,'/')?(strrchr(__FILE__,'/')+1):__FILE__,__FUNCTION__);
#else
  #define LOCAL_FUNC_ENTER()
  #define LOCAL_FUNC_LEAVE()
#endif
}
#endif
