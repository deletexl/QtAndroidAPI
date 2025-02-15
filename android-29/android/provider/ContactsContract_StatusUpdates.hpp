#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_StatusUpdates : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri PROFILE_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_StatusUpdates(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_StatusUpdates(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getPresenceIconResourceId(jint arg0);
		static jint getPresencePrecedence(jint arg0);
	};
} // namespace android::provider

