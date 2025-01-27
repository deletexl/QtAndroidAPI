#include "../../JString.hpp"
#include "./ContactsContract_Intents.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_Intents::ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::ATTACH_IMAGE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"ATTACH_IMAGE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::CONTACTS_DATABASE_CREATED()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"CONTACTS_DATABASE_CREATED",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::EXTRA_CREATE_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_CREATE_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::EXTRA_FORCE_CREATE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_FORCE_CREATE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_CHAT_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_CHAT_ID",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_URI",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::INVITE_CONTACT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"INVITE_CONTACT",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::METADATA_ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"METADATA_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::METADATA_MIMETYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"METADATA_MIMETYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::SEARCH_SUGGESTION_CLICKED()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_CLICKED",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Intents::SHOW_OR_CREATE_CONTACT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SHOW_OR_CREATE_CONTACT",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ContactsContract_Intents::ContactsContract_Intents(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContactsContract_Intents::ContactsContract_Intents()
		: JObject(
			"android.provider.ContactsContract$Intents",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

