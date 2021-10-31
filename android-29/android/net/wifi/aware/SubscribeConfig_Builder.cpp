#include "./SubscribeConfig.hpp"
#include "./SubscribeConfig_Builder.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QAndroidJniObject forward
	SubscribeConfig_Builder::SubscribeConfig_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SubscribeConfig_Builder::SubscribeConfig_Builder()
		: __JniBaseClass(
			"android.net.wifi.aware.SubscribeConfig$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject SubscribeConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/SubscribeConfig;"
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setMatchFilter(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setMatchFilter",
			"(Ljava/util/List;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setMaxDistanceMm(jint arg0)
	{
		return callObjectMethod(
			"setMaxDistanceMm",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setMinDistanceMm(jint arg0)
	{
		return callObjectMethod(
			"setMinDistanceMm",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setServiceName(jstring arg0)
	{
		return callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setServiceSpecificInfo(jbyteArray arg0)
	{
		return callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setSubscribeType(jint arg0)
	{
		return callObjectMethod(
			"setSubscribeType",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setTerminateNotificationEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setTerminateNotificationEnabled",
			"(Z)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setTtlSec(jint arg0)
	{
		return callObjectMethod(
			"setTtlSec",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

