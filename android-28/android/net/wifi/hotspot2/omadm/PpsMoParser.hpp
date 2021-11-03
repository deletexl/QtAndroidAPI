#pragma once

#include "../../../../../JObject.hpp"

namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}

namespace android::net::wifi::hotspot2::omadm
{
	class PpsMoParser : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PpsMoParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PpsMoParser(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::hotspot2::PasspointConfiguration parseMoText(jstring arg0);
	};
} // namespace android::net::wifi::hotspot2::omadm

