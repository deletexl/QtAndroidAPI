#include "./Notification_Builder.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../../JString.hpp"
#include "./Notification_BigPictureStyle.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_BigPictureStyle::Notification_BigPictureStyle(QJniObject obj) : android::app::Notification_Style(obj) {}
	
	// Constructors
	Notification_BigPictureStyle::Notification_BigPictureStyle()
		: android::app::Notification_Style(
			"android.app.Notification$BigPictureStyle",
			"()V"
		) {}
	Notification_BigPictureStyle::Notification_BigPictureStyle(android::app::Notification_Builder arg0)
		: android::app::Notification_Style(
			"android.app.Notification$BigPictureStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigLargeIcon(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigLargeIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigPicture(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"bigPicture",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigPicture(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"bigPicture",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::setBigContentTitle(JString arg0) const
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::setContentDescription(JString arg0) const
	{
		return callObjectMethod(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::setSummaryText(JString arg0) const
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::showBigPictureWhenCollapsed(jboolean arg0) const
	{
		return callObjectMethod(
			"showBigPictureWhenCollapsed",
			"(Z)Landroid/app/Notification$BigPictureStyle;",
			arg0
		);
	}
} // namespace android::app

