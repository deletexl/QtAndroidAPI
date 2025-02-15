#include "./PixelFormat.hpp"

namespace android::graphics
{
	// Fields
	jint PixelFormat::A_8()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"A_8"
		);
	}
	jint PixelFormat::JPEG()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"JPEG"
		);
	}
	jint PixelFormat::LA_88()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"LA_88"
		);
	}
	jint PixelFormat::L_8()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"L_8"
		);
	}
	jint PixelFormat::OPAQUE()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"OPAQUE"
		);
	}
	jint PixelFormat::RGBA_1010102()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_1010102"
		);
	}
	jint PixelFormat::RGBA_4444()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_4444"
		);
	}
	jint PixelFormat::RGBA_5551()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_5551"
		);
	}
	jint PixelFormat::RGBA_8888()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_8888"
		);
	}
	jint PixelFormat::RGBA_F16()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_F16"
		);
	}
	jint PixelFormat::RGBX_8888()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBX_8888"
		);
	}
	jint PixelFormat::RGB_332()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_332"
		);
	}
	jint PixelFormat::RGB_565()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_565"
		);
	}
	jint PixelFormat::RGB_888()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_888"
		);
	}
	jint PixelFormat::TRANSLUCENT()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"TRANSLUCENT"
		);
	}
	jint PixelFormat::TRANSPARENT()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"TRANSPARENT"
		);
	}
	jint PixelFormat::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"UNKNOWN"
		);
	}
	jint PixelFormat::YCbCr_420_SP()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_420_SP"
		);
	}
	jint PixelFormat::YCbCr_422_I()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_422_I"
		);
	}
	jint PixelFormat::YCbCr_422_SP()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_422_SP"
		);
	}
	jint PixelFormat::bitsPerPixel()
	{
		return getField<jint>(
			"bitsPerPixel"
		);
	}
	jint PixelFormat::bytesPerPixel()
	{
		return getField<jint>(
			"bytesPerPixel"
		);
	}
	
	// QJniObject forward
	PixelFormat::PixelFormat(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PixelFormat::PixelFormat()
		: JObject(
			"android.graphics.PixelFormat",
			"()V"
		) {}
	
	// Methods
	jboolean PixelFormat::formatHasAlpha(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.PixelFormat",
			"formatHasAlpha",
			"(I)Z",
			arg0
		);
	}
	void PixelFormat::getPixelFormatInfo(jint arg0, android::graphics::PixelFormat arg1)
	{
		callStaticMethod<void>(
			"android.graphics.PixelFormat",
			"getPixelFormatInfo",
			"(ILandroid/graphics/PixelFormat;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::graphics

