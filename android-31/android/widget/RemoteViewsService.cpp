#include "../content/Intent.hpp"
#include "./RemoteViewsService.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	RemoteViewsService::RemoteViewsService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	RemoteViewsService::RemoteViewsService()
		: android::app::Service(
			"android.widget.RemoteViewsService",
			"()V"
		) {}
	
	// Methods
	JObject RemoteViewsService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	JObject RemoteViewsService::onGetViewFactory(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onGetViewFactory",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViewsService$RemoteViewsFactory;",
			arg0.object()
		);
	}
} // namespace android::widget

