#include "./Context.hpp"
#include "./Intent.hpp"
#include "../os/Handler.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IntentSender.hpp"

namespace android::content
{
	// Fields
	JObject IntentSender::CREATOR()
	{
		return getStaticObjectField(
			"android.content.IntentSender",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	IntentSender::IntentSender(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::IntentSender IntentSender::readIntentSenderOrNullFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.content.IntentSender",
			"readIntentSenderOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/IntentSender;",
			arg0.object()
		);
	}
	void IntentSender::writeIntentSenderOrNullToParcel(android::content::IntentSender arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.content.IntentSender",
			"writeIntentSenderOrNullToParcel",
			"(Landroid/content/IntentSender;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint IntentSender::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean IntentSender::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString IntentSender::getCreatorPackage() const
	{
		return callObjectMethod(
			"getCreatorPackage",
			"()Ljava/lang/String;"
		);
	}
	jint IntentSender::getCreatorUid() const
	{
		return callMethod<jint>(
			"getCreatorUid",
			"()I"
		);
	}
	android::os::UserHandle IntentSender::getCreatorUserHandle() const
	{
		return callObjectMethod(
			"getCreatorUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	JString IntentSender::getTargetPackage() const
	{
		return callObjectMethod(
			"getTargetPackage",
			"()Ljava/lang/String;"
		);
	}
	jint IntentSender::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void IntentSender::sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4) const
	{
		callMethod<void>(
			"sendIntent",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	void IntentSender::sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5) const
	{
		callMethod<void>(
			"sendIntent",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object<jstring>()
		);
	}
	JString IntentSender::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void IntentSender::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

