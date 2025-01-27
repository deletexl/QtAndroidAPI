#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./AdapterViewFlipper.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	AdapterViewFlipper::AdapterViewFlipper(QJniObject obj) : android::widget::AdapterViewAnimator(obj) {}
	
	// Constructors
	AdapterViewFlipper::AdapterViewFlipper(android::content::Context arg0)
		: android::widget::AdapterViewAnimator(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AdapterViewFlipper::AdapterViewFlipper(android::content::Context arg0, JObject arg1)
		: android::widget::AdapterViewAnimator(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AdapterViewFlipper::AdapterViewFlipper(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AdapterViewAnimator(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AdapterViewFlipper::AdapterViewFlipper(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AdapterViewAnimator(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void AdapterViewFlipper::fyiWillBeAdvancedByHostKThx() const
	{
		callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V"
		);
	}
	JString AdapterViewFlipper::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AdapterViewFlipper::getFlipInterval() const
	{
		return callMethod<jint>(
			"getFlipInterval",
			"()I"
		);
	}
	jboolean AdapterViewFlipper::isAutoStart() const
	{
		return callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	jboolean AdapterViewFlipper::isFlipping() const
	{
		return callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	void AdapterViewFlipper::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void AdapterViewFlipper::setAutoStart(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	void AdapterViewFlipper::setFlipInterval(jint arg0) const
	{
		callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	void AdapterViewFlipper::showNext() const
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void AdapterViewFlipper::showPrevious() const
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
	void AdapterViewFlipper::startFlipping() const
	{
		callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	void AdapterViewFlipper::stopFlipping() const
	{
		callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace android::widget

