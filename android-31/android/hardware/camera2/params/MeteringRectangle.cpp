#include "../../../graphics/Point.hpp"
#include "../../../graphics/Rect.hpp"
#include "../../../util/Size.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MeteringRectangle.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint MeteringRectangle::METERING_WEIGHT_DONT_CARE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_DONT_CARE"
		);
	}
	jint MeteringRectangle::METERING_WEIGHT_MAX()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_MAX"
		);
	}
	jint MeteringRectangle::METERING_WEIGHT_MIN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_MIN"
		);
	}
	
	// QJniObject forward
	MeteringRectangle::MeteringRectangle(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MeteringRectangle::MeteringRectangle(android::graphics::Rect arg0, jint arg1)
		: JObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(Landroid/graphics/Rect;I)V",
			arg0.object(),
			arg1
		) {}
	MeteringRectangle::MeteringRectangle(android::graphics::Point arg0, android::util::Size arg1, jint arg2)
		: JObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(Landroid/graphics/Point;Landroid/util/Size;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	MeteringRectangle::MeteringRectangle(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jboolean MeteringRectangle::equals(android::hardware::camera2::params::MeteringRectangle arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/hardware/camera2/params/MeteringRectangle;)Z",
			arg0.object()
		);
	}
	jboolean MeteringRectangle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MeteringRectangle::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint MeteringRectangle::getMeteringWeight() const
	{
		return callMethod<jint>(
			"getMeteringWeight",
			"()I"
		);
	}
	android::graphics::Rect MeteringRectangle::getRect() const
	{
		return callObjectMethod(
			"getRect",
			"()Landroid/graphics/Rect;"
		);
	}
	android::util::Size MeteringRectangle::getSize() const
	{
		return callObjectMethod(
			"getSize",
			"()Landroid/util/Size;"
		);
	}
	android::graphics::Point MeteringRectangle::getUpperLeftPoint() const
	{
		return callObjectMethod(
			"getUpperLeftPoint",
			"()Landroid/graphics/Point;"
		);
	}
	jint MeteringRectangle::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint MeteringRectangle::getX() const
	{
		return callMethod<jint>(
			"getX",
			"()I"
		);
	}
	jint MeteringRectangle::getY() const
	{
		return callMethod<jint>(
			"getY",
			"()I"
		);
	}
	jint MeteringRectangle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString MeteringRectangle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

