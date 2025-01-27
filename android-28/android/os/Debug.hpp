#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Debug_MemoryInfo;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::lang
{
	class ClassLoader;
}
class JString;

namespace android::os
{
	class Debug : public JObject
	{
	public:
		// Fields
		static jint SHOW_CLASSLOADER();
		static jint SHOW_FULL_DETAIL();
		static jint SHOW_INITIALIZED();
		static jint TRACE_COUNT_ALLOCS();
		
		// QJniObject forward
		template<typename ...Ts> explicit Debug(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Debug(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void attachJvmtiAgent(JString arg0, JString arg1, java::lang::ClassLoader arg2);
		static void changeDebugPort(jint arg0);
		static void dumpHprofData(JString arg0);
		static jboolean dumpService(JString arg0, java::io::FileDescriptor arg1, JArray arg2);
		static void enableEmulatorTraceOutput();
		static jint getBinderDeathObjectCount();
		static jint getBinderLocalObjectCount();
		static jint getBinderProxyObjectCount();
		static jint getBinderReceivedTransactions();
		static jint getBinderSentTransactions();
		static jint getGlobalAllocCount();
		static jint getGlobalAllocSize();
		static jint getGlobalClassInitCount();
		static jint getGlobalClassInitTime();
		static jint getGlobalExternalAllocCount();
		static jint getGlobalExternalAllocSize();
		static jint getGlobalExternalFreedCount();
		static jint getGlobalExternalFreedSize();
		static jint getGlobalFreedCount();
		static jint getGlobalFreedSize();
		static jint getGlobalGcInvocationCount();
		static jint getLoadedClassCount();
		static void getMemoryInfo(android::os::Debug_MemoryInfo arg0);
		static jlong getNativeHeapAllocatedSize();
		static jlong getNativeHeapFreeSize();
		static jlong getNativeHeapSize();
		static jlong getPss();
		static JString getRuntimeStat(JString arg0);
		static JObject getRuntimeStats();
		static jint getThreadAllocCount();
		static jint getThreadAllocSize();
		static jint getThreadExternalAllocCount();
		static jint getThreadExternalAllocSize();
		static jint getThreadGcInvocationCount();
		static jboolean isDebuggerConnected();
		static void printLoadedClasses(jint arg0);
		static void resetAllCounts();
		static void resetGlobalAllocCount();
		static void resetGlobalAllocSize();
		static void resetGlobalClassInitCount();
		static void resetGlobalClassInitTime();
		static void resetGlobalExternalAllocCount();
		static void resetGlobalExternalAllocSize();
		static void resetGlobalExternalFreedCount();
		static void resetGlobalExternalFreedSize();
		static void resetGlobalFreedCount();
		static void resetGlobalFreedSize();
		static void resetGlobalGcInvocationCount();
		static void resetThreadAllocCount();
		static void resetThreadAllocSize();
		static void resetThreadExternalAllocCount();
		static void resetThreadExternalAllocSize();
		static void resetThreadGcInvocationCount();
		static jint setAllocationLimit(jint arg0);
		static jint setGlobalAllocationLimit(jint arg0);
		static void startAllocCounting();
		static void startMethodTracing();
		static void startMethodTracing(JString arg0);
		static void startMethodTracing(JString arg0, jint arg1);
		static void startMethodTracing(JString arg0, jint arg1, jint arg2);
		static void startMethodTracingSampling(JString arg0, jint arg1, jint arg2);
		static void startNativeTracing();
		static void stopAllocCounting();
		static void stopMethodTracing();
		static void stopNativeTracing();
		static jlong threadCpuTimeNanos();
		static void waitForDebugger();
		static jboolean waitingForDebugger();
	};
} // namespace android::os

