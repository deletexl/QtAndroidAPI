#include "../net/Uri.hpp"
#include "./ContactsContract_DisplayPhoto.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_DisplayPhoto::CONTENT_MAX_DIMENSIONS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"CONTENT_MAX_DIMENSIONS_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_DisplayPhoto::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_DisplayPhoto::DISPLAY_MAX_DIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"DISPLAY_MAX_DIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_DisplayPhoto::THUMBNAIL_MAX_DIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"THUMBNAIL_MAX_DIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ContactsContract_DisplayPhoto::ContactsContract_DisplayPhoto(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

