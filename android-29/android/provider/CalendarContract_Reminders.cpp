#include "../../JArray.hpp"
#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract_Reminders.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_Reminders::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Reminders",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	CalendarContract_Reminders::CalendarContract_Reminders(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject CalendarContract_Reminders::query(android::content::ContentResolver arg0, jlong arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$Reminders",
			"query",
			"(Landroid/content/ContentResolver;J[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2.object<jarray>()
		);
	}
} // namespace android::provider

