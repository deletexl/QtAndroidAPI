#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "./Keyboard.hpp"
#include "./Keyboard_Key.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "./KeyboardView.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// QJniObject forward
	KeyboardView::KeyboardView(QJniObject obj) : android::view::View(obj) {}
	
	// Constructors
	KeyboardView::KeyboardView(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	KeyboardView::KeyboardView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	KeyboardView::KeyboardView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void KeyboardView::closing() const
	{
		callMethod<void>(
			"closing",
			"()V"
		);
	}
	android::inputmethodservice::Keyboard KeyboardView::getKeyboard() const
	{
		return callObjectMethod(
			"getKeyboard",
			"()Landroid/inputmethodservice/Keyboard;"
		);
	}
	jboolean KeyboardView::handleBack() const
	{
		return callMethod<jboolean>(
			"handleBack",
			"()Z"
		);
	}
	void KeyboardView::invalidateAllKeys() const
	{
		callMethod<void>(
			"invalidateAllKeys",
			"()V"
		);
	}
	void KeyboardView::invalidateKey(jint arg0) const
	{
		callMethod<void>(
			"invalidateKey",
			"(I)V",
			arg0
		);
	}
	jboolean KeyboardView::isPreviewEnabled() const
	{
		return callMethod<jboolean>(
			"isPreviewEnabled",
			"()Z"
		);
	}
	jboolean KeyboardView::isProximityCorrectionEnabled() const
	{
		return callMethod<jboolean>(
			"isProximityCorrectionEnabled",
			"()Z"
		);
	}
	jboolean KeyboardView::isShifted() const
	{
		return callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	void KeyboardView::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void KeyboardView::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	void KeyboardView::onDraw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"onDraw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean KeyboardView::onHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void KeyboardView::onMeasure(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	void KeyboardView::onSizeChanged(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onSizeChanged",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean KeyboardView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void KeyboardView::setKeyboard(android::inputmethodservice::Keyboard arg0) const
	{
		callMethod<void>(
			"setKeyboard",
			"(Landroid/inputmethodservice/Keyboard;)V",
			arg0.object()
		);
	}
	void KeyboardView::setOnKeyboardActionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnKeyboardActionListener",
			"(Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;)V",
			arg0.object()
		);
	}
	void KeyboardView::setPopupOffset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setPopupOffset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void KeyboardView::setPopupParent(android::view::View arg0) const
	{
		callMethod<void>(
			"setPopupParent",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void KeyboardView::setPreviewEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setPreviewEnabled",
			"(Z)V",
			arg0
		);
	}
	void KeyboardView::setProximityCorrectionEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setProximityCorrectionEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean KeyboardView::setShifted(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
	void KeyboardView::setVerticalCorrection(jint arg0) const
	{
		callMethod<void>(
			"setVerticalCorrection",
			"(I)V",
			arg0
		);
	}
} // namespace android::inputmethodservice

