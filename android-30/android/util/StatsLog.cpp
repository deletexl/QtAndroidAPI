#include "./StatsLog.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	StatsLog::StatsLog(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean StatsLog::logBinaryPushStateChanged(jstring arg0, jlong arg1, jint arg2, jint arg3, jlongArray arg4)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logBinaryPushStateChanged",
			"(Ljava/lang/String;JII[J)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean StatsLog::logEvent(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logEvent",
			"(I)Z",
			arg0
		);
	}
	jboolean StatsLog::logStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logStart",
			"(I)Z",
			arg0
		);
	}
	jboolean StatsLog::logStop(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logStop",
			"(I)Z",
			arg0
		);
	}
} // namespace android::util

