#include "./PublishConfig.hpp"
#include "./PublishDiscoverySession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QAndroidJniObject forward
	PublishDiscoverySession::PublishDiscoverySession(QAndroidJniObject obj) : android::net::wifi::aware::DiscoverySession(obj) {}
	
	// Constructors
	
	// Methods
	void PublishDiscoverySession::updatePublish(android::net::wifi::aware::PublishConfig arg0)
	{
		callMethod<void>(
			"updatePublish",
			"(Landroid/net/wifi/aware/PublishConfig;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware
