#include "./Person_Builder.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
#include "./Person.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass Person::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Person",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Person::Person(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Person::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::drawable::Icon Person::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring Person::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Person::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Person::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Person::isBot()
	{
		return callMethod<jboolean>(
			"isBot",
			"()Z"
		);
	}
	jboolean Person::isImportant()
	{
		return callMethod<jboolean>(
			"isImportant",
			"()Z"
		);
	}
	android::app::Person_Builder Person::toBuilder()
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/app/Person$Builder;"
		);
	}
	void Person::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app
