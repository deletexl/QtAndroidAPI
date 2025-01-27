#include "../../../../JByteArray.hpp"
#include "./PublishConfig.hpp"
#include "../../../../JString.hpp"
#include "./PublishConfig_Builder.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QJniObject forward
	PublishConfig_Builder::PublishConfig_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PublishConfig_Builder::PublishConfig_Builder()
		: JObject(
			"android.net.wifi.aware.PublishConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::aware::PublishConfig PublishConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/PublishConfig;"
		);
	}
	android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setMatchFilter(JObject arg0) const
	{
		return callObjectMethod(
			"setMatchFilter",
			"(Ljava/util/List;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setPublishType(jint arg0) const
	{
		return callObjectMethod(
			"setPublishType",
			"(I)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setRangingEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setRangingEnabled",
			"(Z)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setServiceName(JString arg0) const
	{
		return callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setServiceSpecificInfo(JByteArray arg0) const
	{
		return callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setTerminateNotificationEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setTerminateNotificationEnabled",
			"(Z)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setTtlSec(jint arg0) const
	{
		return callObjectMethod(
			"setTtlSec",
			"(I)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

