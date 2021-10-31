#include "./Person.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./Notification_MessagingStyle_Message.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(jstring arg0, jlong arg1, android::app::Person arg2)
		: __JniBaseClass(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(jstring arg0, jlong arg1, jstring arg2)
		: __JniBaseClass(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jstring Notification_MessagingStyle_Message::getDataMimeType()
	{
		return callObjectMethod(
			"getDataMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getDataUri()
	{
		return callObjectMethod(
			"getDataUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring Notification_MessagingStyle_Message::getSender()
	{
		return callObjectMethod(
			"getSender",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getSenderPerson()
	{
		return callObjectMethod(
			"getSenderPerson",
			"()Landroid/app/Person;"
		);
	}
	jstring Notification_MessagingStyle_Message::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong Notification_MessagingStyle_Message::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	QAndroidJniObject Notification_MessagingStyle_Message::setData(jstring arg0, android::net::Uri arg1)
	{
		return callObjectMethod(
			"setData",
			"(Ljava/lang/String;Landroid/net/Uri;)Landroid/app/Notification$MessagingStyle$Message;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app

