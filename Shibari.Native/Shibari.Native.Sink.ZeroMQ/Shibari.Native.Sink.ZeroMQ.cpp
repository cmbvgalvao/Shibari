// Shibari.Native.Sink.ZeroMQ.cpp : Defines the exported functions for the DLL application.
//

#include "header.h"
#include "Shibari.Native.Sink.ZeroMQ.h"


// This is an example of an exported variable
SHIBARINATIVESINKZEROMQ_API int nShibariNativeSinkZeroMQ=0;

// This is an example of an exported function.
SHIBARINATIVESINKZEROMQ_API int fnShibariNativeSinkZeroMQ(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Shibari.Native.Sink.ZeroMQ.h for the class definition
CShibariNativeSinkZeroMQ::CShibariNativeSinkZeroMQ()
{
    return;
}
