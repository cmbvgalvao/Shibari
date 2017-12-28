// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SHIBARINATIVESINKZEROMQ_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SHIBARINATIVESINKZEROMQ_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SHIBARINATIVESINKZEROMQ_EXPORTS
#define SHIBARINATIVESINKZEROMQ_API __declspec(dllexport)
#else
#define SHIBARINATIVESINKZEROMQ_API __declspec(dllimport)
#endif

// This class is exported from the Shibari.Native.Sink.ZeroMQ.dll
class SHIBARINATIVESINKZEROMQ_API CShibariNativeSinkZeroMQ {
public:
	CShibariNativeSinkZeroMQ(void);
	// TODO: add your methods here.
};

extern SHIBARINATIVESINKZEROMQ_API int nShibariNativeSinkZeroMQ;

SHIBARINATIVESINKZEROMQ_API int fnShibariNativeSinkZeroMQ(void);
