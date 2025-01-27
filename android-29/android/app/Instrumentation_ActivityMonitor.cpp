#include "./Activity.hpp"
#include "./Instrumentation_ActivityResult.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentFilter.hpp"
#include "../../JString.hpp"
#include "./Instrumentation_ActivityMonitor.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor()
		: JObject(
			"android.app.Instrumentation$ActivityMonitor",
			"()V"
		) {}
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
		: JObject(
			"android.app.Instrumentation$ActivityMonitor",
			"(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Instrumentation_ActivityMonitor::Instrumentation_ActivityMonitor(JString arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
		: JObject(
			"android.app.Instrumentation$ActivityMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	android::content::IntentFilter Instrumentation_ActivityMonitor::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/content/IntentFilter;"
		);
	}
	jint Instrumentation_ActivityMonitor::getHits() const
	{
		return callMethod<jint>(
			"getHits",
			"()I"
		);
	}
	android::app::Activity Instrumentation_ActivityMonitor::getLastActivity() const
	{
		return callObjectMethod(
			"getLastActivity",
			"()Landroid/app/Activity;"
		);
	}
	android::app::Instrumentation_ActivityResult Instrumentation_ActivityMonitor::getResult() const
	{
		return callObjectMethod(
			"getResult",
			"()Landroid/app/Instrumentation$ActivityResult;"
		);
	}
	jboolean Instrumentation_ActivityMonitor::isBlocking() const
	{
		return callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	android::app::Instrumentation_ActivityResult Instrumentation_ActivityMonitor::onStartActivity(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onStartActivity",
			"(Landroid/content/Intent;)Landroid/app/Instrumentation$ActivityResult;",
			arg0.object()
		);
	}
	android::app::Activity Instrumentation_ActivityMonitor::waitForActivity() const
	{
		return callObjectMethod(
			"waitForActivity",
			"()Landroid/app/Activity;"
		);
	}
	android::app::Activity Instrumentation_ActivityMonitor::waitForActivityWithTimeout(jlong arg0) const
	{
		return callObjectMethod(
			"waitForActivityWithTimeout",
			"(J)Landroid/app/Activity;",
			arg0
		);
	}
} // namespace android::app

