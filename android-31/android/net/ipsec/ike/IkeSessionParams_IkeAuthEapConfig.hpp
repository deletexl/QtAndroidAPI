#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./IkeSessionParams_IkeAuthConfig.hpp"

namespace android::net::eap
{
	class EapSessionConfig;
}

namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthEapConfig : public android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthEapConfig(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthEapConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		android::net::eap::EapSessionConfig getEapConfig();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

