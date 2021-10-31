#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::graphics::pdf
{
	class PdfDocument_PageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfDocument_PageInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument_PageInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getContentRect();
		jint getPageHeight();
		jint getPageNumber();
		jint getPageWidth();
	};
} // namespace android::graphics::pdf

