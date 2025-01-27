#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::net
{
	class PlatformVpnProfile;
}

namespace android::net
{
	class VpnManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VpnManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VpnManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void deleteProvisionedVpnProfile() const;
		android::content::Intent provisionVpnProfile(android::net::PlatformVpnProfile arg0) const;
		void startProvisionedVpnProfile() const;
		void stopProvisionedVpnProfile() const;
	};
} // namespace android::net

