#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ConversationStatus.hpp"

namespace android::app::people
{
	// Fields
	jint ConversationStatus::ACTIVITY_ANNIVERSARY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_ANNIVERSARY"
		);
	}
	jint ConversationStatus::ACTIVITY_AUDIO()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_AUDIO"
		);
	}
	jint ConversationStatus::ACTIVITY_BIRTHDAY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_BIRTHDAY"
		);
	}
	jint ConversationStatus::ACTIVITY_GAME()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_GAME"
		);
	}
	jint ConversationStatus::ACTIVITY_LOCATION()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_LOCATION"
		);
	}
	jint ConversationStatus::ACTIVITY_NEW_STORY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_NEW_STORY"
		);
	}
	jint ConversationStatus::ACTIVITY_OTHER()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_OTHER"
		);
	}
	jint ConversationStatus::ACTIVITY_UPCOMING_BIRTHDAY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_UPCOMING_BIRTHDAY"
		);
	}
	jint ConversationStatus::ACTIVITY_VIDEO()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_VIDEO"
		);
	}
	jint ConversationStatus::AVAILABILITY_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_AVAILABLE"
		);
	}
	jint ConversationStatus::AVAILABILITY_BUSY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_BUSY"
		);
	}
	jint ConversationStatus::AVAILABILITY_OFFLINE()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_OFFLINE"
		);
	}
	jint ConversationStatus::AVAILABILITY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_UNKNOWN"
		);
	}
	JObject ConversationStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.app.people.ConversationStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ConversationStatus::ConversationStatus(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ConversationStatus::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ConversationStatus::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ConversationStatus::getActivity() const
	{
		return callMethod<jint>(
			"getActivity",
			"()I"
		);
	}
	jint ConversationStatus::getAvailability() const
	{
		return callMethod<jint>(
			"getAvailability",
			"()I"
		);
	}
	JString ConversationStatus::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jlong ConversationStatus::getEndTimeMillis() const
	{
		return callMethod<jlong>(
			"getEndTimeMillis",
			"()J"
		);
	}
	android::graphics::drawable::Icon ConversationStatus::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString ConversationStatus::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jlong ConversationStatus::getStartTimeMillis() const
	{
		return callMethod<jlong>(
			"getStartTimeMillis",
			"()J"
		);
	}
	jint ConversationStatus::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ConversationStatus::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ConversationStatus::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::people

