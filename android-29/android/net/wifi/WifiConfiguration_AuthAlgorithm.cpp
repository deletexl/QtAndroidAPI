#include "./WifiConfiguration_AuthAlgorithm.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_AuthAlgorithm::LEAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"LEAP"
		);
	}
	jint WifiConfiguration_AuthAlgorithm::OPEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"OPEN"
		);
	}
	jint WifiConfiguration_AuthAlgorithm::SHARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"SHARED"
		);
	}
	jarray WifiConfiguration_AuthAlgorithm::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_AuthAlgorithm::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	WifiConfiguration_AuthAlgorithm::WifiConfiguration_AuthAlgorithm(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

