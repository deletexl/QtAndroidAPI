#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class ContentValues;
}
namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BitmapFactory_Options;
}
namespace android::net
{
	class Uri;
}
namespace java::io
{
	class InputStream;
}

namespace android::provider
{
	class Contacts_People : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static android::net::Uri DELETED_CONTENT_URI();
		static jstring PRIMARY_EMAIL_ID();
		static jstring PRIMARY_ORGANIZATION_ID();
		static jstring PRIMARY_PHONE_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_People(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_People(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri addToGroup(android::content::ContentResolver arg0, jlong arg1, jstring arg2);
		static android::net::Uri addToGroup(android::content::ContentResolver arg0, jlong arg1, jlong arg2);
		static android::net::Uri addToMyContactsGroup(android::content::ContentResolver arg0, jlong arg1);
		static android::net::Uri createPersonInMyContactsGroup(android::content::ContentResolver arg0, android::content::ContentValues arg1);
		static android::graphics::Bitmap loadContactPhoto(android::content::Context arg0, android::net::Uri arg1, jint arg2, android::graphics::BitmapFactory_Options arg3);
		static void markAsContacted(android::content::ContentResolver arg0, jlong arg1);
		static java::io::InputStream openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1);
		static __JniBaseClass queryGroups(android::content::ContentResolver arg0, jlong arg1);
		static void setPhotoData(android::content::ContentResolver arg0, android::net::Uri arg1, jbyteArray arg2);
	};
} // namespace android::provider
