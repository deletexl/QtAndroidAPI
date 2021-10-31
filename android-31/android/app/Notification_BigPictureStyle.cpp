#include "./Notification_Builder.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "./Notification_BigPictureStyle.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_BigPictureStyle::Notification_BigPictureStyle(QAndroidJniObject obj) : android::app::Notification_Style(obj) {}
	
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
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigLargeIcon(android::graphics::Bitmap arg0)
	{
		return callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigLargeIcon(android::graphics::drawable::Icon arg0)
	{
		return callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigPicture(android::graphics::Bitmap arg0)
	{
		return callObjectMethod(
			"bigPicture",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigPicture(android::graphics::drawable::Icon arg0)
	{
		return callObjectMethod(
			"bigPicture",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::setBigContentTitle(jstring arg0)
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::setContentDescription(jstring arg0)
	{
		return callObjectMethod(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::setSummaryText(jstring arg0)
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0
		);
	}
	android::app::Notification_BigPictureStyle Notification_BigPictureStyle::showBigPictureWhenCollapsed(jboolean arg0)
	{
		return callObjectMethod(
			"showBigPictureWhenCollapsed",
			"(Z)Landroid/app/Notification$BigPictureStyle;",
			arg0
		);
	}
} // namespace android::app
