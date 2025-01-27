#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Point.hpp"

namespace android::graphics
{
	// Fields
	JObject Point::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Point",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Point::x()
	{
		return getField<jint>(
			"x"
		);
	}
	jint Point::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// QJniObject forward
	Point::Point(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Point::Point()
		: JObject(
			"android.graphics.Point",
			"()V"
		) {}
	Point::Point(android::graphics::Point &arg0)
		: JObject(
			"android.graphics.Point",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		) {}
	Point::Point(jint arg0, jint arg1)
		: JObject(
			"android.graphics.Point",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint Point::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Point::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Point::equals(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"equals",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint Point::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Point::negate() const
	{
		callMethod<void>(
			"negate",
			"()V"
		);
	}
	void Point::offset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Point::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Point::set(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	JString Point::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Point::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

