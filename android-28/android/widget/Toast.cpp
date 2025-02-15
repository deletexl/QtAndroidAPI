#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "./Toast.hpp"

namespace android::widget
{
	// Fields
	jint Toast::LENGTH_LONG()
	{
		return getStaticField<jint>(
			"android.widget.Toast",
			"LENGTH_LONG"
		);
	}
	jint Toast::LENGTH_SHORT()
	{
		return getStaticField<jint>(
			"android.widget.Toast",
			"LENGTH_SHORT"
		);
	}
	
	// QJniObject forward
	Toast::Toast(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Toast::Toast(android::content::Context arg0)
		: JObject(
			"android.widget.Toast",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::widget::Toast Toast::makeText(android::content::Context arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.widget.Toast",
			"makeText",
			"(Landroid/content/Context;II)Landroid/widget/Toast;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::widget::Toast Toast::makeText(android::content::Context arg0, JString arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.widget.Toast",
			"makeText",
			"(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void Toast::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint Toast::getDuration() const
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	jint Toast::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jfloat Toast::getHorizontalMargin() const
	{
		return callMethod<jfloat>(
			"getHorizontalMargin",
			"()F"
		);
	}
	jfloat Toast::getVerticalMargin() const
	{
		return callMethod<jfloat>(
			"getVerticalMargin",
			"()F"
		);
	}
	android::view::View Toast::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	jint Toast::getXOffset() const
	{
		return callMethod<jint>(
			"getXOffset",
			"()I"
		);
	}
	jint Toast::getYOffset() const
	{
		return callMethod<jint>(
			"getYOffset",
			"()I"
		);
	}
	void Toast::setDuration(jint arg0) const
	{
		callMethod<void>(
			"setDuration",
			"(I)V",
			arg0
		);
	}
	void Toast::setGravity(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setGravity",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Toast::setMargin(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setMargin",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Toast::setText(jint arg0) const
	{
		callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	void Toast::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toast::setView(android::view::View arg0) const
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Toast::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

