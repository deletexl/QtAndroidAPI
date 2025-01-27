#include "../content/res/Resources.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Im.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_CommonDataKinds_Im::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Im::CUSTOM_PROTOCOL()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"CUSTOM_PROTOCOL",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Im::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Im::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Im::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Im::PROTOCOL()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL",
			"Ljava/lang/String;"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_AIM()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_AIM"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_CUSTOM()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_CUSTOM"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_GOOGLE_TALK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_GOOGLE_TALK"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_ICQ()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_ICQ"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_JABBER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_JABBER"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_MSN()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_MSN"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_NETMEETING()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_NETMEETING"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_QQ()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_QQ"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_SKYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_SKYPE"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_YAHOO()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_YAHOO"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"TYPE_WORK"
		);
	}
	
	// QJniObject forward
	ContactsContract_CommonDataKinds_Im::ContactsContract_CommonDataKinds_Im(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ContactsContract_CommonDataKinds_Im::getProtocolLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"getProtocolLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	jint ContactsContract_CommonDataKinds_Im::getProtocolLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"getProtocolLabelResource",
			"(I)I",
			arg0
		);
	}
	JString ContactsContract_CommonDataKinds_Im::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	jint ContactsContract_CommonDataKinds_Im::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

