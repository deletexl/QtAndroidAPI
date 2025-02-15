#include "../../JString.hpp"
#include "./CarrierConfigManager_ImsServiceEntitlement.hpp"

namespace android::telephony
{
	// Fields
	JString CarrierConfigManager_ImsServiceEntitlement::KEY_ENTITLEMENT_SERVER_URL_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_ENTITLEMENT_SERVER_URL_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager_ImsServiceEntitlement::KEY_FCM_SENDER_ID_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_FCM_SENDER_ID_STRING",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager_ImsServiceEntitlement::KEY_IMS_PROVISIONING_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_IMS_PROVISIONING_BOOL",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager_ImsServiceEntitlement::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		);
	}
	JString CarrierConfigManager_ImsServiceEntitlement::KEY_SHOW_VOWIFI_WEBVIEW_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$ImsServiceEntitlement",
			"KEY_SHOW_VOWIFI_WEBVIEW_BOOL",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	CarrierConfigManager_ImsServiceEntitlement::CarrierConfigManager_ImsServiceEntitlement(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

