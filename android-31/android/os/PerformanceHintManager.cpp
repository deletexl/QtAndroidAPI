#include "./PerformanceHintManager_Session.hpp"
#include "./PerformanceHintManager.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	PerformanceHintManager::PerformanceHintManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::os::PerformanceHintManager_Session PerformanceHintManager::createHintSession(jintArray arg0, jlong arg1)
	{
		return callObjectMethod(
			"createHintSession",
			"([IJ)Landroid/os/PerformanceHintManager$Session;",
			arg0,
			arg1
		);
	}
	jlong PerformanceHintManager::getPreferredUpdateRateNanos()
	{
		return callMethod<jlong>(
			"getPreferredUpdateRateNanos",
			"()J"
		);
	}
} // namespace android::os

