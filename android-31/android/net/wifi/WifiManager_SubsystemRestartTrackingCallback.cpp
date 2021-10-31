#include "./WifiManager_SubsystemRestartTrackingCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiManager_SubsystemRestartTrackingCallback::WifiManager_SubsystemRestartTrackingCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiManager_SubsystemRestartTrackingCallback::WifiManager_SubsystemRestartTrackingCallback()
		: __JniBaseClass(
			"android.net.wifi.WifiManager$SubsystemRestartTrackingCallback",
			"()V"
		) {}
	
	// Methods
	void WifiManager_SubsystemRestartTrackingCallback::onSubsystemRestarted()
	{
		callMethod<void>(
			"onSubsystemRestarted",
			"()V"
		);
	}
	void WifiManager_SubsystemRestartTrackingCallback::onSubsystemRestarting()
	{
		callMethod<void>(
			"onSubsystemRestarting",
			"()V"
		);
	}
} // namespace android::net::wifi
