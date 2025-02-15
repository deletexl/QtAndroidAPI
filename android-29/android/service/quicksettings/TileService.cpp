#include "../../app/Dialog.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./Tile.hpp"
#include "../../../JString.hpp"
#include "./TileService.hpp"

namespace android::service::quicksettings
{
	// Fields
	JString TileService::ACTION_QS_TILE()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"ACTION_QS_TILE",
			"Ljava/lang/String;"
		);
	}
	JString TileService::ACTION_QS_TILE_PREFERENCES()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"ACTION_QS_TILE_PREFERENCES",
			"Ljava/lang/String;"
		);
	}
	JString TileService::META_DATA_ACTIVE_TILE()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"META_DATA_ACTIVE_TILE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	TileService::TileService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	TileService::TileService()
		: android::app::Service(
			"android.service.quicksettings.TileService",
			"()V"
		) {}
	
	// Methods
	void TileService::requestListeningState(android::content::Context arg0, android::content::ComponentName arg1)
	{
		callStaticMethod<void>(
			"android.service.quicksettings.TileService",
			"requestListeningState",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::service::quicksettings::Tile TileService::getQsTile() const
	{
		return callObjectMethod(
			"getQsTile",
			"()Landroid/service/quicksettings/Tile;"
		);
	}
	jboolean TileService::isLocked() const
	{
		return callMethod<jboolean>(
			"isLocked",
			"()Z"
		);
	}
	jboolean TileService::isSecure() const
	{
		return callMethod<jboolean>(
			"isSecure",
			"()Z"
		);
	}
	JObject TileService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void TileService::onClick() const
	{
		callMethod<void>(
			"onClick",
			"()V"
		);
	}
	void TileService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void TileService::onStartListening() const
	{
		callMethod<void>(
			"onStartListening",
			"()V"
		);
	}
	void TileService::onStopListening() const
	{
		callMethod<void>(
			"onStopListening",
			"()V"
		);
	}
	void TileService::onTileAdded() const
	{
		callMethod<void>(
			"onTileAdded",
			"()V"
		);
	}
	void TileService::onTileRemoved() const
	{
		callMethod<void>(
			"onTileRemoved",
			"()V"
		);
	}
	void TileService::showDialog(android::app::Dialog arg0) const
	{
		callMethod<void>(
			"showDialog",
			"(Landroid/app/Dialog;)V",
			arg0.object()
		);
	}
	void TileService::startActivityAndCollapse(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startActivityAndCollapse",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void TileService::unlockAndRun(JObject arg0) const
	{
		callMethod<void>(
			"unlockAndRun",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::service::quicksettings

