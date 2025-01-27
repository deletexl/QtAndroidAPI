#include "../../JString.hpp"
#include "./CarrierConfigManager_Gps.hpp"

namespace android::telephony
{
	// Fields
	JString CarrierConfigManager_Gps::KEY_PERSIST_LPP_MODE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Gps",
			"KEY_PERSIST_LPP_MODE_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager_Gps::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Gps",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	CarrierConfigManager_Gps::CarrierConfigManager_Gps(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

