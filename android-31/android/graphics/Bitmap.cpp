#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "./Bitmap_CompressFormat.hpp"
#include "./Bitmap_Config.hpp"
#include "./Canvas.hpp"
#include "./Color.hpp"
#include "./ColorSpace.hpp"
#include "./Matrix.hpp"
#include "./Paint.hpp"
#include "./Picture.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "../os/Parcel.hpp"
#include "../util/DisplayMetrics.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/nio/Buffer.hpp"
#include "./Bitmap.hpp"

namespace android::graphics
{
	// Fields
	JObject Bitmap::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Bitmap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Bitmap::DENSITY_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.Bitmap",
			"DENSITY_NONE"
		);
	}
	
	// QJniObject forward
	Bitmap::Bitmap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Bitmap Bitmap::createBitmap(android::graphics::Bitmap arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::graphics::Picture arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Picture;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(JIntArray arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"([IIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::graphics::Picture arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Picture;IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2, jboolean arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;IIII)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::util::DisplayMetrics arg0, JIntArray arg1, jint arg2, jint arg3, android::graphics::Bitmap_Config arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;[IIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3, jboolean arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2, jboolean arg3, android::graphics::ColorSpace arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;ZLandroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Bitmap_Config arg5)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"([IIIIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3, jboolean arg4, android::graphics::ColorSpace arg5)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;ZLandroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5.object()
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Matrix arg5, jboolean arg6)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;IIIILandroid/graphics/Matrix;Z)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6
		);
	}
	android::graphics::Bitmap Bitmap::createBitmap(android::util::DisplayMetrics arg0, JIntArray arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::graphics::Bitmap_Config arg6)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;[IIIIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	android::graphics::Bitmap Bitmap::createScaledBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jboolean arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createScaledBitmap",
			"(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	android::graphics::Bitmap Bitmap::wrapHardwareBuffer(android::hardware::HardwareBuffer arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Bitmap",
			"wrapHardwareBuffer",
			"(Landroid/hardware/HardwareBuffer;Landroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::Bitmap Bitmap::asShared() const
	{
		return callObjectMethod(
			"asShared",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jboolean Bitmap::compress(android::graphics::Bitmap_CompressFormat arg0, jint arg1, java::io::OutputStream arg2) const
	{
		return callMethod<jboolean>(
			"compress",
			"(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::graphics::Bitmap Bitmap::copy(android::graphics::Bitmap_Config arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"copy",
			"(Landroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1
		);
	}
	void Bitmap::copyPixelsFromBuffer(java::nio::Buffer arg0) const
	{
		callMethod<void>(
			"copyPixelsFromBuffer",
			"(Ljava/nio/Buffer;)V",
			arg0.object()
		);
	}
	void Bitmap::copyPixelsToBuffer(java::nio::Buffer arg0) const
	{
		callMethod<void>(
			"copyPixelsToBuffer",
			"(Ljava/nio/Buffer;)V",
			arg0.object()
		);
	}
	jint Bitmap::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Bitmap::eraseColor(jint arg0) const
	{
		callMethod<void>(
			"eraseColor",
			"(I)V",
			arg0
		);
	}
	void Bitmap::eraseColor(jlong arg0) const
	{
		callMethod<void>(
			"eraseColor",
			"(J)V",
			arg0
		);
	}
	android::graphics::Bitmap Bitmap::extractAlpha() const
	{
		return callObjectMethod(
			"extractAlpha",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::graphics::Bitmap Bitmap::extractAlpha(android::graphics::Paint arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"extractAlpha",
			"(Landroid/graphics/Paint;[I)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	jint Bitmap::getAllocationByteCount() const
	{
		return callMethod<jint>(
			"getAllocationByteCount",
			"()I"
		);
	}
	jint Bitmap::getByteCount() const
	{
		return callMethod<jint>(
			"getByteCount",
			"()I"
		);
	}
	android::graphics::Color Bitmap::getColor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getColor",
			"(II)Landroid/graphics/Color;",
			arg0,
			arg1
		);
	}
	android::graphics::ColorSpace Bitmap::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	android::graphics::Bitmap_Config Bitmap::getConfig() const
	{
		return callObjectMethod(
			"getConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	jint Bitmap::getDensity() const
	{
		return callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	jint Bitmap::getGenerationId() const
	{
		return callMethod<jint>(
			"getGenerationId",
			"()I"
		);
	}
	android::hardware::HardwareBuffer Bitmap::getHardwareBuffer() const
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	jint Bitmap::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JByteArray Bitmap::getNinePatchChunk() const
	{
		return callObjectMethod(
			"getNinePatchChunk",
			"()[B"
		);
	}
	jint Bitmap::getPixel(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getPixel",
			"(II)I",
			arg0,
			arg1
		);
	}
	void Bitmap::getPixels(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6) const
	{
		callMethod<void>(
			"getPixels",
			"([IIIIIII)V",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jint Bitmap::getRowBytes() const
	{
		return callMethod<jint>(
			"getRowBytes",
			"()I"
		);
	}
	jint Bitmap::getScaledHeight(android::graphics::Canvas arg0) const
	{
		return callMethod<jint>(
			"getScaledHeight",
			"(Landroid/graphics/Canvas;)I",
			arg0.object()
		);
	}
	jint Bitmap::getScaledHeight(android::util::DisplayMetrics arg0) const
	{
		return callMethod<jint>(
			"getScaledHeight",
			"(Landroid/util/DisplayMetrics;)I",
			arg0.object()
		);
	}
	jint Bitmap::getScaledHeight(jint arg0) const
	{
		return callMethod<jint>(
			"getScaledHeight",
			"(I)I",
			arg0
		);
	}
	jint Bitmap::getScaledWidth(android::graphics::Canvas arg0) const
	{
		return callMethod<jint>(
			"getScaledWidth",
			"(Landroid/graphics/Canvas;)I",
			arg0.object()
		);
	}
	jint Bitmap::getScaledWidth(android::util::DisplayMetrics arg0) const
	{
		return callMethod<jint>(
			"getScaledWidth",
			"(Landroid/util/DisplayMetrics;)I",
			arg0.object()
		);
	}
	jint Bitmap::getScaledWidth(jint arg0) const
	{
		return callMethod<jint>(
			"getScaledWidth",
			"(I)I",
			arg0
		);
	}
	jint Bitmap::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Bitmap::hasAlpha() const
	{
		return callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	jboolean Bitmap::hasMipMap() const
	{
		return callMethod<jboolean>(
			"hasMipMap",
			"()Z"
		);
	}
	jboolean Bitmap::isMutable() const
	{
		return callMethod<jboolean>(
			"isMutable",
			"()Z"
		);
	}
	jboolean Bitmap::isPremultiplied() const
	{
		return callMethod<jboolean>(
			"isPremultiplied",
			"()Z"
		);
	}
	jboolean Bitmap::isRecycled() const
	{
		return callMethod<jboolean>(
			"isRecycled",
			"()Z"
		);
	}
	void Bitmap::prepareToDraw() const
	{
		callMethod<void>(
			"prepareToDraw",
			"()V"
		);
	}
	void Bitmap::reconfigure(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2) const
	{
		callMethod<void>(
			"reconfigure",
			"(IILandroid/graphics/Bitmap$Config;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Bitmap::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jboolean Bitmap::sameAs(android::graphics::Bitmap arg0) const
	{
		return callMethod<jboolean>(
			"sameAs",
			"(Landroid/graphics/Bitmap;)Z",
			arg0.object()
		);
	}
	void Bitmap::setColorSpace(android::graphics::ColorSpace arg0) const
	{
		callMethod<void>(
			"setColorSpace",
			"(Landroid/graphics/ColorSpace;)V",
			arg0.object()
		);
	}
	void Bitmap::setConfig(android::graphics::Bitmap_Config arg0) const
	{
		callMethod<void>(
			"setConfig",
			"(Landroid/graphics/Bitmap$Config;)V",
			arg0.object()
		);
	}
	void Bitmap::setDensity(jint arg0) const
	{
		callMethod<void>(
			"setDensity",
			"(I)V",
			arg0
		);
	}
	void Bitmap::setHasAlpha(jboolean arg0) const
	{
		callMethod<void>(
			"setHasAlpha",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setHasMipMap(jboolean arg0) const
	{
		callMethod<void>(
			"setHasMipMap",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setHeight(jint arg0) const
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void Bitmap::setPixel(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setPixel",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Bitmap::setPixels(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6) const
	{
		callMethod<void>(
			"setPixels",
			"([IIIIIII)V",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void Bitmap::setPremultiplied(jboolean arg0) const
	{
		callMethod<void>(
			"setPremultiplied",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setWidth(jint arg0) const
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	void Bitmap::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

