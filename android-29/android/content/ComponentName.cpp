#include "./Context.hpp"
#include "../os/Parcel.hpp"
#include "./ComponentName.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject ComponentName::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ComponentName",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ComponentName::ComponentName(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ComponentName::ComponentName(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.content.ComponentName",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ComponentName::ComponentName(android::content::Context arg0, jclass arg1)
		: __JniBaseClass(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.object(),
			arg1
		) {}
	ComponentName::ComponentName(android::content::Context arg0, jstring arg1)
		: __JniBaseClass(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	ComponentName::ComponentName(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.content.ComponentName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	QAndroidJniObject ComponentName::createRelative(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject ComponentName::createRelative(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ComponentName::readFromParcel(android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	QAndroidJniObject ComponentName::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0
		);
	}
	void ComponentName::writeToParcel(android::content::ComponentName arg0, android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ComponentName",
			"writeToParcel",
			"(Landroid/content/ComponentName;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ComponentName::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/content/ComponentName;"
		);
	}
	jint ComponentName::compareTo(android::content::ComponentName arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint ComponentName::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ComponentName::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ComponentName::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ComponentName::flattenToShortString()
	{
		return callObjectMethod(
			"flattenToShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::flattenToString()
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getShortClassName()
	{
		return callObjectMethod(
			"getShortClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ComponentName::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ComponentName::toShortString()
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ComponentName::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

