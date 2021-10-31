#include "./GestureStroke.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Path.hpp"
#include "../graphics/RectF.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Gesture.hpp"

namespace android::gesture
{
	// Fields
	QAndroidJniObject Gesture::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.gesture.Gesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Gesture::Gesture(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Gesture::Gesture()
		: __JniBaseClass(
			"android.gesture.Gesture",
			"()V"
		) {}
	
	// Methods
	void Gesture::addStroke(android::gesture::GestureStroke arg0)
	{
		callMethod<void>(
			"addStroke",
			"(Landroid/gesture/GestureStroke;)V",
			arg0.object()
		);
	}
	jobject Gesture::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Gesture::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject Gesture::getBoundingBox()
	{
		return callObjectMethod(
			"getBoundingBox",
			"()Landroid/graphics/RectF;"
		);
	}
	jlong Gesture::getID()
	{
		return callMethod<jlong>(
			"getID",
			"()J"
		);
	}
	jfloat Gesture::getLength()
	{
		return callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	QAndroidJniObject Gesture::getStrokes()
	{
		return callObjectMethod(
			"getStrokes",
			"()Ljava/util/ArrayList;"
		);
	}
	jint Gesture::getStrokesCount()
	{
		return callMethod<jint>(
			"getStrokesCount",
			"()I"
		);
	}
	QAndroidJniObject Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"toBitmap",
			"(IIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callObjectMethod(
			"toBitmap",
			"(IIIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject Gesture::toPath()
	{
		return callObjectMethod(
			"toPath",
			"()Landroid/graphics/Path;"
		);
	}
	QAndroidJniObject Gesture::toPath(android::graphics::Path arg0)
	{
		return callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;)Landroid/graphics/Path;",
			arg0.object()
		);
	}
	QAndroidJniObject Gesture::toPath(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"toPath",
			"(IIII)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Gesture::toPath(android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;IIII)Landroid/graphics/Path;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Gesture::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::gesture

