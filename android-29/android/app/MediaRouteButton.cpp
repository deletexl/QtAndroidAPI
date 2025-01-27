#include "../../JIntArray.hpp"
#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../../JString.hpp"
#include "./MediaRouteButton.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	MediaRouteButton::MediaRouteButton(QJniObject obj) : android::view::View(obj) {}
	
	// Constructors
	MediaRouteButton::MediaRouteButton(android::content::Context arg0)
		: android::view::View(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	MediaRouteButton::MediaRouteButton(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	MediaRouteButton::MediaRouteButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	MediaRouteButton::MediaRouteButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint MediaRouteButton::getRouteTypes() const
	{
		return callMethod<jint>(
			"getRouteTypes",
			"()I"
		);
	}
	void MediaRouteButton::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void MediaRouteButton::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	void MediaRouteButton::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	jboolean MediaRouteButton::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void MediaRouteButton::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void MediaRouteButton::setExtendedSettingsClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setExtendedSettingsClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void MediaRouteButton::setRouteTypes(jint arg0) const
	{
		callMethod<void>(
			"setRouteTypes",
			"(I)V",
			arg0
		);
	}
	void MediaRouteButton::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void MediaRouteButton::showDialog() const
	{
		callMethod<void>(
			"showDialog",
			"()V"
		);
	}
} // namespace android::app

