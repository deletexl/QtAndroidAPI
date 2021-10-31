#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Callable : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Callable(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Callable(QAndroidJniObject obj);
		
		// Constructors
		ContactsContract_CommonDataKinds_Callable();
		
		// Methods
	};
} // namespace android::provider
