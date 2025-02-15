#include "../../JByteArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JShortArray.hpp"
#include "../content/res/Resources.hpp"
#include "../graphics/Bitmap.hpp"
#include "./Allocation_MipmapControl.hpp"
#include "./Element.hpp"
#include "./FieldPacker.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "../view/Surface.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./Allocation.hpp"

namespace android::renderscript
{
	// Fields
	jint Allocation::USAGE_GRAPHICS_CONSTANTS()
	{
		return getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_GRAPHICS_CONSTANTS"
		);
	}
	jint Allocation::USAGE_GRAPHICS_RENDER_TARGET()
	{
		return getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_GRAPHICS_RENDER_TARGET"
		);
	}
	jint Allocation::USAGE_GRAPHICS_TEXTURE()
	{
		return getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_GRAPHICS_TEXTURE"
		);
	}
	jint Allocation::USAGE_GRAPHICS_VERTEX()
	{
		return getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_GRAPHICS_VERTEX"
		);
	}
	jint Allocation::USAGE_IO_INPUT()
	{
		return getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_IO_INPUT"
		);
	}
	jint Allocation::USAGE_IO_OUTPUT()
	{
		return getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_IO_OUTPUT"
		);
	}
	jint Allocation::USAGE_SCRIPT()
	{
		return getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_SCRIPT"
		);
	}
	jint Allocation::USAGE_SHARED()
	{
		return getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_SHARED"
		);
	}
	
	// QJniObject forward
	Allocation::Allocation(QJniObject obj) : android::renderscript::BaseObj(obj) {}
	
	// Constructors
	
	// Methods
	JArray Allocation::createAllocations(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createAllocations",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;II)[Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	android::renderscript::Allocation Allocation::createCubemapFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object()
		);
	}
	android::renderscript::Allocation Allocation::createCubemapFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::renderscript::Allocation Allocation::createCubemapFromCubeFaces(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::graphics::Bitmap arg2, android::graphics::Bitmap arg3, android::graphics::Bitmap arg4, android::graphics::Bitmap arg5, android::graphics::Bitmap arg6)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromCubeFaces",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	android::renderscript::Allocation Allocation::createCubemapFromCubeFaces(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::graphics::Bitmap arg2, android::graphics::Bitmap arg3, android::graphics::Bitmap arg4, android::graphics::Bitmap arg5, android::graphics::Bitmap arg6, android::renderscript::Allocation_MipmapControl arg7, jint arg8)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromCubeFaces",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object(),
			arg7.object(),
			arg8
		);
	}
	android::renderscript::Allocation Allocation::createFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object()
		);
	}
	android::renderscript::Allocation Allocation::createFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::renderscript::Allocation Allocation::createFromBitmapResource(android::renderscript::RenderScript arg0, android::content::res::Resources arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmapResource",
			"(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::renderscript::Allocation Allocation::createFromBitmapResource(android::renderscript::RenderScript arg0, android::content::res::Resources arg1, jint arg2, android::renderscript::Allocation_MipmapControl arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmapResource",
			"(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;ILandroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		);
	}
	android::renderscript::Allocation Allocation::createFromString(android::renderscript::RenderScript arg0, JString arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromString",
			"(Landroid/renderscript/RenderScript;Ljava/lang/String;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	android::renderscript::Allocation Allocation::createSized(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createSized",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::renderscript::Allocation Allocation::createSized(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createSized",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;II)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	android::renderscript::Allocation Allocation::createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object()
		);
	}
	android::renderscript::Allocation Allocation::createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::renderscript::Allocation Allocation::createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeFrom",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, JFloatArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeFrom",
			"(II[F)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>()
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeFrom",
			"(II[I)V",
			arg0,
			arg1,
			arg2.object<jintArray>()
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, JShortArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeFrom",
			"(II[S)V",
			arg0,
			arg1,
			arg2.object<jshortArray>()
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"copy1DRangeFrom",
			"(IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2.object<jobject>()
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, android::renderscript::Allocation arg2, jint arg3) const
	{
		callMethod<void>(
			"copy1DRangeFrom",
			"(IILandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, JFloatArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(II[F)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>()
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(II[I)V",
			arg0,
			arg1,
			arg2.object<jintArray>()
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, JShortArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(II[S)V",
			arg0,
			arg1,
			arg2.object<jshortArray>()
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2.object<jobject>()
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeTo",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, JFloatArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeTo",
			"(II[F)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>()
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeTo",
			"(II[I)V",
			arg0,
			arg1,
			arg2.object<jintArray>()
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, JShortArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeTo",
			"(II[S)V",
			arg0,
			arg1,
			arg2.object<jshortArray>()
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"copy1DRangeTo",
			"(IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2.object<jobject>()
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeToUnchecked",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, JFloatArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeToUnchecked",
			"(II[F)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>()
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeToUnchecked",
			"(II[I)V",
			arg0,
			arg1,
			arg2.object<jintArray>()
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, JShortArray arg2) const
	{
		callMethod<void>(
			"copy1DRangeToUnchecked",
			"(II[S)V",
			arg0,
			arg1,
			arg2.object<jshortArray>()
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"copy1DRangeToUnchecked",
			"(IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2.object<jobject>()
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, android::graphics::Bitmap arg2) const
	{
		callMethod<void>(
			"copy2DRangeFrom",
			"(IILandroid/graphics/Bitmap;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4) const
	{
		callMethod<void>(
			"copy2DRangeFrom",
			"(IIII[B)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jbyteArray>()
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JFloatArray arg4) const
	{
		callMethod<void>(
			"copy2DRangeFrom",
			"(IIII[F)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>()
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4) const
	{
		callMethod<void>(
			"copy2DRangeFrom",
			"(IIII[I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>()
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JShortArray arg4) const
	{
		callMethod<void>(
			"copy2DRangeFrom",
			"(IIII[S)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jshortArray>()
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JObject arg4) const
	{
		callMethod<void>(
			"copy2DRangeFrom",
			"(IIIILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jobject>()
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, jint arg6) const
	{
		callMethod<void>(
			"copy2DRangeFrom",
			"(IIIILandroid/renderscript/Allocation;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5,
			arg6
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4) const
	{
		callMethod<void>(
			"copy2DRangeTo",
			"(IIII[B)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jbyteArray>()
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JFloatArray arg4) const
	{
		callMethod<void>(
			"copy2DRangeTo",
			"(IIII[F)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>()
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4) const
	{
		callMethod<void>(
			"copy2DRangeTo",
			"(IIII[I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>()
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JShortArray arg4) const
	{
		callMethod<void>(
			"copy2DRangeTo",
			"(IIII[S)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jshortArray>()
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JObject arg4) const
	{
		callMethod<void>(
			"copy2DRangeTo",
			"(IIIILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jobject>()
		);
	}
	void Allocation::copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JObject arg6) const
	{
		callMethod<void>(
			"copy3DRangeFrom",
			"(IIIIIILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object<jobject>()
		);
	}
	void Allocation::copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::renderscript::Allocation arg6, jint arg7, jint arg8, jint arg9) const
	{
		callMethod<void>(
			"copy3DRangeFrom",
			"(IIIIIILandroid/renderscript/Allocation;III)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object(),
			arg7,
			arg8,
			arg9
		);
	}
	void Allocation::copy3DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JObject arg6) const
	{
		callMethod<void>(
			"copy3DRangeTo",
			"(IIIIIILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object<jobject>()
		);
	}
	void Allocation::copyFrom(JByteArray arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Allocation::copyFrom(JFloatArray arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void Allocation::copyFrom(JIntArray arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void Allocation::copyFrom(JArray arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"([Landroid/renderscript/BaseObj;)V",
			arg0.object<jarray>()
		);
	}
	void Allocation::copyFrom(JShortArray arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"([S)V",
			arg0.object<jshortArray>()
		);
	}
	void Allocation::copyFrom(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void Allocation::copyFrom(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	void Allocation::copyFrom(JObject arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void Allocation::copyFromUnchecked(JByteArray arg0) const
	{
		callMethod<void>(
			"copyFromUnchecked",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Allocation::copyFromUnchecked(JFloatArray arg0) const
	{
		callMethod<void>(
			"copyFromUnchecked",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void Allocation::copyFromUnchecked(JIntArray arg0) const
	{
		callMethod<void>(
			"copyFromUnchecked",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void Allocation::copyFromUnchecked(JShortArray arg0) const
	{
		callMethod<void>(
			"copyFromUnchecked",
			"([S)V",
			arg0.object<jshortArray>()
		);
	}
	void Allocation::copyFromUnchecked(JObject arg0) const
	{
		callMethod<void>(
			"copyFromUnchecked",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void Allocation::copyTo(JByteArray arg0) const
	{
		callMethod<void>(
			"copyTo",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Allocation::copyTo(JFloatArray arg0) const
	{
		callMethod<void>(
			"copyTo",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void Allocation::copyTo(JIntArray arg0) const
	{
		callMethod<void>(
			"copyTo",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void Allocation::copyTo(JShortArray arg0) const
	{
		callMethod<void>(
			"copyTo",
			"([S)V",
			arg0.object<jshortArray>()
		);
	}
	void Allocation::copyTo(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"copyTo",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void Allocation::copyTo(JObject arg0) const
	{
		callMethod<void>(
			"copyTo",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void Allocation::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void Allocation::generateMipmaps() const
	{
		callMethod<void>(
			"generateMipmaps",
			"()V"
		);
	}
	java::nio::ByteBuffer Allocation::getByteBuffer() const
	{
		return callObjectMethod(
			"getByteBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint Allocation::getBytesSize() const
	{
		return callMethod<jint>(
			"getBytesSize",
			"()I"
		);
	}
	android::renderscript::Element Allocation::getElement() const
	{
		return callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	jlong Allocation::getStride() const
	{
		return callMethod<jlong>(
			"getStride",
			"()J"
		);
	}
	android::view::Surface Allocation::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	jlong Allocation::getTimeStamp() const
	{
		return callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
	android::renderscript::Type Allocation::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Landroid/renderscript/Type;"
		);
	}
	jint Allocation::getUsage() const
	{
		return callMethod<jint>(
			"getUsage",
			"()I"
		);
	}
	void Allocation::ioReceive() const
	{
		callMethod<void>(
			"ioReceive",
			"()V"
		);
	}
	void Allocation::ioSend() const
	{
		callMethod<void>(
			"ioSend",
			"()V"
		);
	}
	void Allocation::resize(jint arg0) const
	{
		callMethod<void>(
			"resize",
			"(I)V",
			arg0
		);
	}
	void Allocation::setAutoPadding(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoPadding",
			"(Z)V",
			arg0
		);
	}
	void Allocation::setFromFieldPacker(jint arg0, android::renderscript::FieldPacker arg1) const
	{
		callMethod<void>(
			"setFromFieldPacker",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.object()
		);
	}
	void Allocation::setFromFieldPacker(jint arg0, jint arg1, android::renderscript::FieldPacker arg2) const
	{
		callMethod<void>(
			"setFromFieldPacker",
			"(IILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Allocation::setFromFieldPacker(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::FieldPacker arg4) const
	{
		callMethod<void>(
			"setFromFieldPacker",
			"(IIIILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void Allocation::setOnBufferAvailableListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnBufferAvailableListener",
			"(Landroid/renderscript/Allocation$OnBufferAvailableListener;)V",
			arg0.object()
		);
	}
	void Allocation::setSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void Allocation::syncAll(jint arg0) const
	{
		callMethod<void>(
			"syncAll",
			"(I)V",
			arg0
		);
	}
} // namespace android::renderscript

