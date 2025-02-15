#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms_Part.hpp"

namespace android::provider
{
	// Fields
	JString Telephony_Mms_Part::CHARSET()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CHARSET",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::CONTENT_DISPOSITION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_DISPOSITION",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::CONTENT_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_ID",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::CONTENT_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_LOCATION",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Telephony_Mms_Part::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Mms_Part::CT_START()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_START",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::CT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::FILENAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"FILENAME",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::MSG_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"MSG_ID",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::SEQ()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"SEQ",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::TEXT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"TEXT",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Part::_DATA()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Telephony_Mms_Part::Telephony_Mms_Part(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

