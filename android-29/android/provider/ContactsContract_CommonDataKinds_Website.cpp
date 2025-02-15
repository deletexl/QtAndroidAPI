#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Website.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_CommonDataKinds_Website::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_BLOG()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_BLOG"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_FTP()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_FTP"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_HOMEPAGE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_HOMEPAGE"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_PROFILE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_PROFILE"
		);
	}
	jint ContactsContract_CommonDataKinds_Website::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_WORK"
		);
	}
	JString ContactsContract_CommonDataKinds_Website::URL()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"URL",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ContactsContract_CommonDataKinds_Website::ContactsContract_CommonDataKinds_Website(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

