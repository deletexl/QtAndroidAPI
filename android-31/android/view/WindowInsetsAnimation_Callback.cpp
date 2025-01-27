#include "./WindowInsets.hpp"
#include "./WindowInsetsAnimation.hpp"
#include "./WindowInsetsAnimation_Bounds.hpp"
#include "./WindowInsetsAnimation_Callback.hpp"

namespace android::view
{
	// Fields
	jint WindowInsetsAnimation_Callback::DISPATCH_MODE_CONTINUE_ON_SUBTREE()
	{
		return getStaticField<jint>(
			"android.view.WindowInsetsAnimation$Callback",
			"DISPATCH_MODE_CONTINUE_ON_SUBTREE"
		);
	}
	jint WindowInsetsAnimation_Callback::DISPATCH_MODE_STOP()
	{
		return getStaticField<jint>(
			"android.view.WindowInsetsAnimation$Callback",
			"DISPATCH_MODE_STOP"
		);
	}
	
	// QJniObject forward
	WindowInsetsAnimation_Callback::WindowInsetsAnimation_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WindowInsetsAnimation_Callback::WindowInsetsAnimation_Callback(jint arg0)
		: JObject(
			"android.view.WindowInsetsAnimation$Callback",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint WindowInsetsAnimation_Callback::getDispatchMode() const
	{
		return callMethod<jint>(
			"getDispatchMode",
			"()I"
		);
	}
	void WindowInsetsAnimation_Callback::onEnd(android::view::WindowInsetsAnimation arg0) const
	{
		callMethod<void>(
			"onEnd",
			"(Landroid/view/WindowInsetsAnimation;)V",
			arg0.object()
		);
	}
	void WindowInsetsAnimation_Callback::onPrepare(android::view::WindowInsetsAnimation arg0) const
	{
		callMethod<void>(
			"onPrepare",
			"(Landroid/view/WindowInsetsAnimation;)V",
			arg0.object()
		);
	}
	android::view::WindowInsets WindowInsetsAnimation_Callback::onProgress(android::view::WindowInsets arg0, JObject arg1) const
	{
		return callObjectMethod(
			"onProgress",
			"(Landroid/view/WindowInsets;Ljava/util/List;)Landroid/view/WindowInsets;",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::WindowInsetsAnimation_Bounds WindowInsetsAnimation_Callback::onStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1) const
	{
		return callObjectMethod(
			"onStart",
			"(Landroid/view/WindowInsetsAnimation;Landroid/view/WindowInsetsAnimation$Bounds;)Landroid/view/WindowInsetsAnimation$Bounds;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view

