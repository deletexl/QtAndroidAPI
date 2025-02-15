#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class WifiConfiguration_GroupMgmtCipher : public JObject
	{
	public:
		// Fields
		static jint BIP_CMAC_256();
		static jint BIP_GMAC_128();
		static jint BIP_GMAC_256();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_GroupMgmtCipher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_GroupMgmtCipher(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

