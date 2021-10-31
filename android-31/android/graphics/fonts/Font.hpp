#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Paint_FontMetrics;
}
namespace android::graphics
{
	class RectF;
}
namespace android::graphics::fonts
{
	class FontStyle;
}
namespace android::os
{
	class LocaleList;
}
namespace java::io
{
	class File;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::graphics::fonts
{
	class Font : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Font(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Font(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jarray getAxes();
		java::nio::ByteBuffer getBuffer();
		java::io::File getFile();
		jfloat getGlyphBounds(jint arg0, android::graphics::Paint arg1, android::graphics::RectF arg2);
		android::os::LocaleList getLocaleList();
		void getMetrics(android::graphics::Paint arg0, android::graphics::Paint_FontMetrics arg1);
		jint getSourceIdentifier();
		android::graphics::fonts::FontStyle getStyle();
		jint getTtcIndex();
		jint hashCode();
		jstring toString();
	};
} // namespace android::graphics::fonts

