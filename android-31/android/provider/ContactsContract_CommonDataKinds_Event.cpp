#include "../content/res/Resources.hpp"
#include "../../JString.hpp"
#include "../../java/lang/Integer.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Event.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_CommonDataKinds_Event::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Event::START_DATE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"START_DATE",
			"Ljava/lang/String;"
		);
	}
	jint ContactsContract_CommonDataKinds_Event::TYPE_ANNIVERSARY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"TYPE_ANNIVERSARY"
		);
	}
	jint ContactsContract_CommonDataKinds_Event::TYPE_BIRTHDAY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"TYPE_BIRTHDAY"
		);
	}
	jint ContactsContract_CommonDataKinds_Event::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"TYPE_OTHER"
		);
	}
	
	// QJniObject forward
	ContactsContract_CommonDataKinds_Event::ContactsContract_CommonDataKinds_Event(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ContactsContract_CommonDataKinds_Event::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	jint ContactsContract_CommonDataKinds_Event::getTypeResource(java::lang::Integer arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Event",
			"getTypeResource",
			"(Ljava/lang/Integer;)I",
			arg0.object()
		);
	}
} // namespace android::provider

