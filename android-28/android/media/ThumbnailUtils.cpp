#include "../graphics/Bitmap.hpp"
#include "../../JString.hpp"
#include "./ThumbnailUtils.hpp"

namespace android::media
{
	// Fields
	jint ThumbnailUtils::OPTIONS_RECYCLE_INPUT()
	{
		return getStaticField<jint>(
			"android.media.ThumbnailUtils",
			"OPTIONS_RECYCLE_INPUT"
		);
	}
	
	// QJniObject forward
	ThumbnailUtils::ThumbnailUtils(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ThumbnailUtils::ThumbnailUtils()
		: JObject(
			"android.media.ThumbnailUtils",
			"()V"
		) {}
	
	// Methods
	android::graphics::Bitmap ThumbnailUtils::createVideoThumbnail(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"createVideoThumbnail",
			"(Ljava/lang/String;I)Landroid/graphics/Bitmap;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::graphics::Bitmap ThumbnailUtils::extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"extractThumbnail",
			"(Landroid/graphics/Bitmap;II)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::graphics::Bitmap ThumbnailUtils::extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.media.ThumbnailUtils",
			"extractThumbnail",
			"(Landroid/graphics/Bitmap;III)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

