#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_PHOTO
#define ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_PHOTO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_Contacts_Photo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_DIRECTORY();
		static QAndroidJniObject DISPLAY_PHOTO();
		static QAndroidJniObject PHOTO();
		static QAndroidJniObject PHOTO_FILE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_Contacts_Photo::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts_Photo::DISPLAY_PHOTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"DISPLAY_PHOTO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts_Photo::PHOTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"PHOTO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Contacts_Photo::PHOTO_FILE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$Photo",
			"PHOTO_FILE_ID",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract_Contacts_Photo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Contacts$Photo",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Contacts_Photo : public __jni_impl::android::provider::ContactsContract_Contacts_Photo
	{
	public:
		ContactsContract_Contacts_Photo(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Contacts_Photo()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTS_PHOTO

