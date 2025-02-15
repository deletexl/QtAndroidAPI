#include "../../JArray.hpp"
#include "./Activity.hpp"
#include "./PendingIntent.hpp"
#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "./ActivityOptions.hpp"

namespace android::app
{
	// Fields
	JString ActivityOptions::EXTRA_USAGE_TIME_REPORT()
	{
		return getStaticObjectField(
			"android.app.ActivityOptions",
			"EXTRA_USAGE_TIME_REPORT",
			"Ljava/lang/String;"
		);
	}
	JString ActivityOptions::EXTRA_USAGE_TIME_REPORT_PACKAGES()
	{
		return getStaticObjectField(
			"android.app.ActivityOptions",
			"EXTRA_USAGE_TIME_REPORT_PACKAGES",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ActivityOptions::ActivityOptions(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::ActivityOptions ActivityOptions::makeBasic()
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeBasic",
			"()Landroid/app/ActivityOptions;"
		);
	}
	android::app::ActivityOptions ActivityOptions::makeClipRevealAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeClipRevealAnimation",
			"(Landroid/view/View;IIII)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	android::app::ActivityOptions ActivityOptions::makeCustomAnimation(android::content::Context arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeCustomAnimation",
			"(Landroid/content/Context;II)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::app::ActivityOptions ActivityOptions::makeScaleUpAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeScaleUpAnimation",
			"(Landroid/view/View;IIII)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	android::app::ActivityOptions ActivityOptions::makeSceneTransitionAnimation(android::app::Activity arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeSceneTransitionAnimation",
			"(Landroid/app/Activity;[Landroid/util/Pair;)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	android::app::ActivityOptions ActivityOptions::makeSceneTransitionAnimation(android::app::Activity arg0, android::view::View arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeSceneTransitionAnimation",
			"(Landroid/app/Activity;Landroid/view/View;Ljava/lang/String;)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	android::app::ActivityOptions ActivityOptions::makeTaskLaunchBehind()
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeTaskLaunchBehind",
			"()Landroid/app/ActivityOptions;"
		);
	}
	android::app::ActivityOptions ActivityOptions::makeThumbnailScaleUpAnimation(android::view::View arg0, android::graphics::Bitmap arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeThumbnailScaleUpAnimation",
			"(Landroid/view/View;Landroid/graphics/Bitmap;II)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	android::graphics::Rect ActivityOptions::getLaunchBounds() const
	{
		return callObjectMethod(
			"getLaunchBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jint ActivityOptions::getLaunchDisplayId() const
	{
		return callMethod<jint>(
			"getLaunchDisplayId",
			"()I"
		);
	}
	jboolean ActivityOptions::getLockTaskMode() const
	{
		return callMethod<jboolean>(
			"getLockTaskMode",
			"()Z"
		);
	}
	void ActivityOptions::requestUsageTimeReport(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"requestUsageTimeReport",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	android::app::ActivityOptions ActivityOptions::setAppVerificationBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setAppVerificationBundle",
			"(Landroid/os/Bundle;)Landroid/app/ActivityOptions;",
			arg0.object()
		);
	}
	android::app::ActivityOptions ActivityOptions::setLaunchBounds(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setLaunchBounds",
			"(Landroid/graphics/Rect;)Landroid/app/ActivityOptions;",
			arg0.object()
		);
	}
	android::app::ActivityOptions ActivityOptions::setLaunchDisplayId(jint arg0) const
	{
		return callObjectMethod(
			"setLaunchDisplayId",
			"(I)Landroid/app/ActivityOptions;",
			arg0
		);
	}
	android::app::ActivityOptions ActivityOptions::setLockTaskEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setLockTaskEnabled",
			"(Z)Landroid/app/ActivityOptions;",
			arg0
		);
	}
	android::os::Bundle ActivityOptions::toBundle() const
	{
		return callObjectMethod(
			"toBundle",
			"()Landroid/os/Bundle;"
		);
	}
	JString ActivityOptions::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ActivityOptions::update(android::app::ActivityOptions arg0) const
	{
		callMethod<void>(
			"update",
			"(Landroid/app/ActivityOptions;)V",
			arg0.object()
		);
	}
} // namespace android::app

