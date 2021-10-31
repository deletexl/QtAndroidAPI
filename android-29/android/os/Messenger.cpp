#include "./Handler.hpp"
#include "./Message.hpp"
#include "./Parcel.hpp"
#include "./Messenger.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject Messenger::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Messenger",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Messenger::Messenger(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Messenger::Messenger(android::os::Handler arg0)
		: __JniBaseClass(
			"android.os.Messenger",
			"(Landroid/os/Handler;)V",
			arg0.object()
		) {}
	Messenger::Messenger(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.os.Messenger",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject Messenger::readMessengerOrNullFromParcel(android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Messenger",
			"readMessengerOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/os/Messenger;",
			arg0.object()
		);
	}
	void Messenger::writeMessengerOrNullToParcel(android::os::Messenger arg0, android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Messenger",
			"writeMessengerOrNullToParcel",
			"(Landroid/os/Messenger;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint Messenger::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Messenger::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Messenger::getBinder()
	{
		return callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;"
		);
	}
	jint Messenger::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Messenger::send(android::os::Message arg0)
	{
		callMethod<void>(
			"send",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void Messenger::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

