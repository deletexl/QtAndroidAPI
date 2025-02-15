#include "../../JString.hpp"
#include "./CarrierConfigManager_Ims.hpp"

namespace android::telephony
{
	// Fields
	JString CarrierConfigManager_Ims::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager_Ims::KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	CarrierConfigManager_Ims::CarrierConfigManager_Ims(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

