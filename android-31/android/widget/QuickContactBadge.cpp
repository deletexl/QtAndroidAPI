#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./QuickContactBadge.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	QuickContactBadge::QuickContactBadge(QJniObject obj) : android::widget::ImageView(obj) {}
	
	// Constructors
	QuickContactBadge::QuickContactBadge(android::content::Context arg0)
		: android::widget::ImageView(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	QuickContactBadge::QuickContactBadge(android::content::Context arg0, JObject arg1)
		: android::widget::ImageView(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	QuickContactBadge::QuickContactBadge(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ImageView(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	QuickContactBadge::QuickContactBadge(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ImageView(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void QuickContactBadge::assignContactFromEmail(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void QuickContactBadge::assignContactFromEmail(JString arg0, jboolean arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	void QuickContactBadge::assignContactFromPhone(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void QuickContactBadge::assignContactFromPhone(JString arg0, jboolean arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	void QuickContactBadge::assignContactUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"assignContactUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void QuickContactBadge::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	JString QuickContactBadge::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	void QuickContactBadge::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void QuickContactBadge::setExcludeMimes(JArray arg0) const
	{
		callMethod<void>(
			"setExcludeMimes",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void QuickContactBadge::setImageToDefault() const
	{
		callMethod<void>(
			"setImageToDefault",
			"()V"
		);
	}
	void QuickContactBadge::setMode(jint arg0) const
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
	void QuickContactBadge::setOverlay(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setOverlay",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void QuickContactBadge::setPrioritizedMimeType(JString arg0) const
	{
		callMethod<void>(
			"setPrioritizedMimeType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

