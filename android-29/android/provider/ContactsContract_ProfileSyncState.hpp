#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::content
{
	class ContentProviderClient;
}
namespace android::content
{
	class ContentProviderOperation;
}
namespace android::net
{
	class Uri;
}
namespace android::util
{
	class Pair;
}

namespace android::provider
{
	class ContactsContract_ProfileSyncState : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_ProfileSyncState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_ProfileSyncState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jbyteArray get(android::content::ContentProviderClient arg0, android::accounts::Account arg1);
		static QAndroidJniObject getWithUri(android::content::ContentProviderClient arg0, android::accounts::Account arg1);
		static QAndroidJniObject newSetOperation(android::accounts::Account arg0, jbyteArray arg1);
		static void set(android::content::ContentProviderClient arg0, android::accounts::Account arg1, jbyteArray arg2);
	};
} // namespace android::provider

