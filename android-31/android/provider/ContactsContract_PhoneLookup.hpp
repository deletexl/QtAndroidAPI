#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_PhoneLookup : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static JString QUERY_PARAMETER_SIP_ADDRESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_PhoneLookup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_PhoneLookup(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

