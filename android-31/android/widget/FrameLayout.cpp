#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./FrameLayout_LayoutParams.hpp"
#include "../../JString.hpp"
#include "./FrameLayout.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	FrameLayout::FrameLayout(QJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	FrameLayout::FrameLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	FrameLayout::FrameLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	FrameLayout::FrameLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	FrameLayout::FrameLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::widget::FrameLayout_LayoutParams FrameLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",
			arg0.object()
		);
	}
	JString FrameLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean FrameLayout::getConsiderGoneChildrenWhenMeasuring() const
	{
		return callMethod<jboolean>(
			"getConsiderGoneChildrenWhenMeasuring",
			"()Z"
		);
	}
	jboolean FrameLayout::getMeasureAllChildren() const
	{
		return callMethod<jboolean>(
			"getMeasureAllChildren",
			"()Z"
		);
	}
	void FrameLayout::setForegroundGravity(jint arg0) const
	{
		callMethod<void>(
			"setForegroundGravity",
			"(I)V",
			arg0
		);
	}
	void FrameLayout::setMeasureAllChildren(jboolean arg0) const
	{
		callMethod<void>(
			"setMeasureAllChildren",
			"(Z)V",
			arg0
		);
	}
	jboolean FrameLayout::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

