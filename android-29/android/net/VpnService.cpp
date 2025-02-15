#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../../JString.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/Socket.hpp"
#include "./VpnService.hpp"

namespace android::net
{
	// Fields
	JString VpnService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.net.VpnService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString VpnService::SERVICE_META_DATA_SUPPORTS_ALWAYS_ON()
	{
		return getStaticObjectField(
			"android.net.VpnService",
			"SERVICE_META_DATA_SUPPORTS_ALWAYS_ON",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	VpnService::VpnService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	VpnService::VpnService()
		: android::app::Service(
			"android.net.VpnService",
			"()V"
		) {}
	
	// Methods
	android::content::Intent VpnService::prepare(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.net.VpnService",
			"prepare",
			"(Landroid/content/Context;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	jboolean VpnService::isAlwaysOn() const
	{
		return callMethod<jboolean>(
			"isAlwaysOn",
			"()Z"
		);
	}
	jboolean VpnService::isLockdownEnabled() const
	{
		return callMethod<jboolean>(
			"isLockdownEnabled",
			"()Z"
		);
	}
	JObject VpnService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void VpnService::onRevoke() const
	{
		callMethod<void>(
			"onRevoke",
			"()V"
		);
	}
	jboolean VpnService::protect(jint arg0) const
	{
		return callMethod<jboolean>(
			"protect",
			"(I)Z",
			arg0
		);
	}
	jboolean VpnService::protect(java::net::DatagramSocket arg0) const
	{
		return callMethod<jboolean>(
			"protect",
			"(Ljava/net/DatagramSocket;)Z",
			arg0.object()
		);
	}
	jboolean VpnService::protect(java::net::Socket arg0) const
	{
		return callMethod<jboolean>(
			"protect",
			"(Ljava/net/Socket;)Z",
			arg0.object()
		);
	}
	jboolean VpnService::setUnderlyingNetworks(JArray arg0) const
	{
		return callMethod<jboolean>(
			"setUnderlyingNetworks",
			"([Landroid/net/Network;)Z",
			arg0.object<jarray>()
		);
	}
} // namespace android::net

