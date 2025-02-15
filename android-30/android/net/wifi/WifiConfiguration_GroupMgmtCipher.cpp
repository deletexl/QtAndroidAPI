#include "./WifiConfiguration_GroupMgmtCipher.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_GroupMgmtCipher::BIP_CMAC_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_CMAC_256"
		);
	}
	jint WifiConfiguration_GroupMgmtCipher::BIP_GMAC_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_GMAC_128"
		);
	}
	jint WifiConfiguration_GroupMgmtCipher::BIP_GMAC_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_GMAC_256"
		);
	}
	
	// QJniObject forward
	WifiConfiguration_GroupMgmtCipher::WifiConfiguration_GroupMgmtCipher(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

