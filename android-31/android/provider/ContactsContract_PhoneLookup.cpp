#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_PhoneLookup.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_PhoneLookup::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_PhoneLookup::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_PhoneLookup::QUERY_PARAMETER_SIP_ADDRESS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"QUERY_PARAMETER_SIP_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ContactsContract_PhoneLookup::ContactsContract_PhoneLookup(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

