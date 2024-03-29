

#include <stdio.h>
#include <stdarg.h>

void vLoggingPrintf( const char *pcFormat, ... )
{
    char pcBuffer[256] = {0};
	va_list xArgs;
    va_start( xArgs, pcFormat );
	vsnprintf( pcBuffer, sizeof(pcBuffer), pcFormat, xArgs );
	va_end( xArgs );
    printf("%s", pcBuffer);
    fflush(stdout);
}
/*-----------------------------------------------------------*/
