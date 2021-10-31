#include "../net/Uri.hpp"
#include "./CalendarContract_ExtendedProperties.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_ExtendedProperties::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$ExtendedProperties",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract_ExtendedProperties::CalendarContract_ExtendedProperties(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider
