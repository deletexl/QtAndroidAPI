#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Website : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jint TYPE_BLOG();
		static jint TYPE_FTP();
		static jint TYPE_HOME();
		static jint TYPE_HOMEPAGE();
		static jint TYPE_OTHER();
		static jint TYPE_PROFILE();
		static jint TYPE_WORK();
		static JString URL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Website(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Website(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

