#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ScrollCaptureTarget : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScrollCaptureTarget(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScrollCaptureTarget(QAndroidJniObject obj);
		
		// Constructors
		ScrollCaptureTarget(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2, __JniBaseClass arg3);
		
		// Methods
		__JniBaseClass getCallback();
		android::view::View getContainingView();
		jint getHint();
		android::graphics::Rect getLocalVisibleRect();
		android::graphics::Point getPositionInWindow();
		android::graphics::Rect getScrollBounds();
		void setScrollBounds(android::graphics::Rect arg0);
		jstring toString();
		void updatePositionInWindow();
	};
} // namespace android::view
