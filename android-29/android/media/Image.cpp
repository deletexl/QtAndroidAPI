#include "../../JArray.hpp"
#include "../graphics/Rect.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "./Image.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	Image::Image(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Image::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::graphics::Rect Image::getCropRect() const
	{
		return callObjectMethod(
			"getCropRect",
			"()Landroid/graphics/Rect;"
		);
	}
	jint Image::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	android::hardware::HardwareBuffer Image::getHardwareBuffer() const
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	jint Image::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JArray Image::getPlanes() const
	{
		return callObjectMethod(
			"getPlanes",
			"()[Landroid/media/Image$Plane;"
		);
	}
	jlong Image::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jint Image::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void Image::setCropRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setCropRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Image::setTimestamp(jlong arg0) const
	{
		callMethod<void>(
			"setTimestamp",
			"(J)V",
			arg0
		);
	}
} // namespace android::media

