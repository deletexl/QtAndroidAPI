#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./RelativeLayout_LayoutParams.hpp"
#include "../../JString.hpp"
#include "./RelativeLayout.hpp"

namespace android::widget
{
	// Fields
	jint RelativeLayout::ABOVE()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ABOVE"
		);
	}
	jint RelativeLayout::ALIGN_BASELINE()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_BASELINE"
		);
	}
	jint RelativeLayout::ALIGN_BOTTOM()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_BOTTOM"
		);
	}
	jint RelativeLayout::ALIGN_END()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_END"
		);
	}
	jint RelativeLayout::ALIGN_LEFT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_LEFT"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_BOTTOM()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_BOTTOM"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_END()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_END"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_LEFT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_LEFT"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_RIGHT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_RIGHT"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_START()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_START"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_TOP()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_TOP"
		);
	}
	jint RelativeLayout::ALIGN_RIGHT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_RIGHT"
		);
	}
	jint RelativeLayout::ALIGN_START()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_START"
		);
	}
	jint RelativeLayout::ALIGN_TOP()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_TOP"
		);
	}
	jint RelativeLayout::BELOW()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"BELOW"
		);
	}
	jint RelativeLayout::CENTER_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_HORIZONTAL"
		);
	}
	jint RelativeLayout::CENTER_IN_PARENT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_IN_PARENT"
		);
	}
	jint RelativeLayout::CENTER_VERTICAL()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_VERTICAL"
		);
	}
	jint RelativeLayout::END_OF()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"END_OF"
		);
	}
	jint RelativeLayout::LEFT_OF()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"LEFT_OF"
		);
	}
	jint RelativeLayout::RIGHT_OF()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"RIGHT_OF"
		);
	}
	jint RelativeLayout::START_OF()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"START_OF"
		);
	}
	jint RelativeLayout::TRUE()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"TRUE"
		);
	}
	
	// QJniObject forward
	RelativeLayout::RelativeLayout(QJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	RelativeLayout::RelativeLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	RelativeLayout::RelativeLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	RelativeLayout::RelativeLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	RelativeLayout::RelativeLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::widget::RelativeLayout_LayoutParams RelativeLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;",
			arg0.object()
		);
	}
	JString RelativeLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint RelativeLayout::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint RelativeLayout::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint RelativeLayout::getIgnoreGravity() const
	{
		return callMethod<jint>(
			"getIgnoreGravity",
			"()I"
		);
	}
	void RelativeLayout::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void RelativeLayout::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout::setHorizontalGravity(jint arg0) const
	{
		callMethod<void>(
			"setHorizontalGravity",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout::setIgnoreGravity(jint arg0) const
	{
		callMethod<void>(
			"setIgnoreGravity",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout::setVerticalGravity(jint arg0) const
	{
		callMethod<void>(
			"setVerticalGravity",
			"(I)V",
			arg0
		);
	}
	jboolean RelativeLayout::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

