#include "./ImageDecoder_Source.hpp"
#include "./ImageDecoder_DecodeException.hpp"

namespace android::graphics
{
	// Fields
	jint ImageDecoder_DecodeException::SOURCE_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_EXCEPTION"
		);
	}
	jint ImageDecoder_DecodeException::SOURCE_INCOMPLETE()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_INCOMPLETE"
		);
	}
	jint ImageDecoder_DecodeException::SOURCE_MALFORMED_DATA()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_MALFORMED_DATA"
		);
	}
	
	// QAndroidJniObject forward
	ImageDecoder_DecodeException::ImageDecoder_DecodeException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	
	// Methods
	jint ImageDecoder_DecodeException::getError()
	{
		return callMethod<jint>(
			"getError",
			"()I"
		);
	}
	android::graphics::ImageDecoder_Source ImageDecoder_DecodeException::getSource()
	{
		return callObjectMethod(
			"getSource",
			"()Landroid/graphics/ImageDecoder$Source;"
		);
	}
} // namespace android::graphics
