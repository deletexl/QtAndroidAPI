#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class NetworkSpecifier;
}
namespace android::net::wifi::aware
{
	class DiscoverySessionCallback;
}
namespace android::net::wifi::aware
{
	class PublishConfig;
}
namespace android::net::wifi::aware
{
	class SubscribeConfig;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::net::wifi::aware
{
	class WifiAwareSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiAwareSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		android::net::NetworkSpecifier createNetworkSpecifierOpen(jint arg0, JByteArray arg1) const;
		android::net::NetworkSpecifier createNetworkSpecifierPassphrase(jint arg0, JByteArray arg1, JString arg2) const;
		void publish(android::net::wifi::aware::PublishConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2) const;
		void subscribe(android::net::wifi::aware::SubscribeConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2) const;
	};
} // namespace android::net::wifi::aware

