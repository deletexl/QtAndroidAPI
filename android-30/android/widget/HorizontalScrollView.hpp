#pragma once

#include "./FrameLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
class JString;

namespace android::widget
{
	class HorizontalScrollView : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HorizontalScrollView(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		HorizontalScrollView(QJniObject obj);
		
		// Constructors
		HorizontalScrollView(android::content::Context arg0);
		HorizontalScrollView(android::content::Context arg0, JObject arg1);
		HorizontalScrollView(android::content::Context arg0, JObject arg1, jint arg2);
		HorizontalScrollView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addView(android::view::View arg0) const;
		void addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void addView(android::view::View arg0, jint arg1) const;
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const;
		jboolean arrowScroll(jint arg0) const;
		void computeScroll() const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		void draw(android::graphics::Canvas arg0) const;
		jboolean executeKeyEvent(android::view::KeyEvent arg0) const;
		void fling(jint arg0) const;
		jboolean fullScroll(jint arg0) const;
		JString getAccessibilityClassName() const;
		jint getLeftEdgeEffectColor() const;
		jint getMaxScrollAmount() const;
		jint getRightEdgeEffectColor() const;
		jboolean isFillViewport() const;
		jboolean isSmoothScrollingEnabled() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean pageScroll(jint arg0) const;
		void requestChildFocus(android::view::View arg0, android::view::View arg1) const;
		jboolean requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const;
		void requestDisallowInterceptTouchEvent(jboolean arg0) const;
		void requestLayout() const;
		void scrollTo(jint arg0, jint arg1) const;
		void setEdgeEffectColor(jint arg0) const;
		void setFillViewport(jboolean arg0) const;
		void setLeftEdgeEffectColor(jint arg0) const;
		void setRightEdgeEffectColor(jint arg0) const;
		void setSmoothScrollingEnabled(jboolean arg0) const;
		jboolean shouldDelayChildPressedState() const;
		void smoothScrollBy(jint arg0, jint arg1) const;
		void smoothScrollTo(jint arg0, jint arg1) const;
	};
} // namespace android::widget

