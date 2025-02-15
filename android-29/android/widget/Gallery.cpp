#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/animation/Transformation.hpp"
#include "../../JString.hpp"
#include "./Gallery.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Gallery::Gallery(QJniObject obj) : android::widget::AbsSpinner(obj) {}
	
	// Constructors
	Gallery::Gallery(android::content::Context arg0)
		: android::widget::AbsSpinner(
			"android.widget.Gallery",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Gallery::Gallery(android::content::Context arg0, JObject arg1)
		: android::widget::AbsSpinner(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Gallery::Gallery(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsSpinner(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Gallery::Gallery(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsSpinner(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean Gallery::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void Gallery::dispatchSetSelected(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchSetSelected",
			"(Z)V",
			arg0
		);
	}
	android::view::ViewGroup_LayoutParams Gallery::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.object()
		);
	}
	JString Gallery::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean Gallery::onDown(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onDown",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Gallery::onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"onFling",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	jboolean Gallery::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Gallery::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void Gallery::onLongPress(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"onLongPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	jboolean Gallery::onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"onScroll",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void Gallery::onShowPress(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"onShowPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	jboolean Gallery::onSingleTapUp(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onSingleTapUp",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Gallery::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Gallery::setAnimationDuration(jint arg0) const
	{
		callMethod<void>(
			"setAnimationDuration",
			"(I)V",
			arg0
		);
	}
	void Gallery::setCallbackDuringFling(jboolean arg0) const
	{
		callMethod<void>(
			"setCallbackDuringFling",
			"(Z)V",
			arg0
		);
	}
	void Gallery::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void Gallery::setSpacing(jint arg0) const
	{
		callMethod<void>(
			"setSpacing",
			"(I)V",
			arg0
		);
	}
	void Gallery::setUnselectedAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setUnselectedAlpha",
			"(F)V",
			arg0
		);
	}
	jboolean Gallery::showContextMenu() const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean Gallery::showContextMenu(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Gallery::showContextMenuForChild(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean Gallery::showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::widget

