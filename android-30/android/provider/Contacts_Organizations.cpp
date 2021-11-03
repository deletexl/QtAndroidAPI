#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./Contacts_Organizations.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_Organizations::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Contacts_Organizations::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Organizations::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Contacts_Organizations::Contacts_Organizations(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring Contacts_Organizations::getDisplayLabel(android::content::Context arg0, jint arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$Organizations",
			"getDisplayLabel",
			"(Landroid/content/Context;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2
		).object<jstring>();
	}
} // namespace android::provider

