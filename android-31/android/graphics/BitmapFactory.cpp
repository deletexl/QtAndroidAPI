#include "../../JByteArray.hpp"
#include "../content/res/Resources.hpp"
#include "./Bitmap.hpp"
#include "./BitmapFactory_Options.hpp"
#include "./Rect.hpp"
#include "../util/TypedValue.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JString.hpp"
#include "./BitmapFactory.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	BitmapFactory::BitmapFactory(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BitmapFactory::BitmapFactory()
		: JObject(
			"android.graphics.BitmapFactory",
			"()V"
		) {}
	
	// Methods
	android::graphics::Bitmap BitmapFactory::decodeByteArray(JByteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeByteArray",
			"([BII)Landroid/graphics/Bitmap;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeByteArray(JByteArray arg0, jint arg1, jint arg2, android::graphics::BitmapFactory_Options arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeByteArray",
			"([BIILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeFile(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFile",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			arg0.object<jstring>()
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeFile(JString arg0, android::graphics::BitmapFactory_Options arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFile",
			"(Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeFileDescriptor(java::io::FileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFileDescriptor",
			"(Ljava/io/FileDescriptor;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeFileDescriptor(java::io::FileDescriptor arg0, android::graphics::Rect arg1, android::graphics::BitmapFactory_Options arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeFileDescriptor",
			"(Ljava/io/FileDescriptor;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeResource(android::content::res::Resources arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResource",
			"(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeResource(android::content::res::Resources arg0, jint arg1, android::graphics::BitmapFactory_Options arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResource",
			"(Landroid/content/res/Resources;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, android::graphics::Rect arg3, android::graphics::BitmapFactory_Options arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeStream(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	android::graphics::Bitmap BitmapFactory::decodeStream(java::io::InputStream arg0, android::graphics::Rect arg1, android::graphics::BitmapFactory_Options arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapFactory",
			"decodeStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::graphics

