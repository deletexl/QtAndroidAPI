#include "./RemoteViews.hpp"
#include "./RemoteViews_RemoteCollectionItems.hpp"
#include "./RemoteViews_RemoteCollectionItems_Builder.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	RemoteViews_RemoteCollectionItems_Builder::RemoteViews_RemoteCollectionItems_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RemoteViews_RemoteCollectionItems_Builder::RemoteViews_RemoteCollectionItems_Builder()
		: JObject(
			"android.widget.RemoteViews$RemoteCollectionItems$Builder",
			"()V"
		) {}
	
	// Methods
	android::widget::RemoteViews_RemoteCollectionItems_Builder RemoteViews_RemoteCollectionItems_Builder::addItem(jlong arg0, android::widget::RemoteViews arg1) const
	{
		return callObjectMethod(
			"addItem",
			"(JLandroid/widget/RemoteViews;)Landroid/widget/RemoteViews$RemoteCollectionItems$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::widget::RemoteViews_RemoteCollectionItems RemoteViews_RemoteCollectionItems_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/widget/RemoteViews$RemoteCollectionItems;"
		);
	}
	android::widget::RemoteViews_RemoteCollectionItems_Builder RemoteViews_RemoteCollectionItems_Builder::setHasStableIds(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasStableIds",
			"(Z)Landroid/widget/RemoteViews$RemoteCollectionItems$Builder;",
			arg0
		);
	}
	android::widget::RemoteViews_RemoteCollectionItems_Builder RemoteViews_RemoteCollectionItems_Builder::setViewTypeCount(jint arg0) const
	{
		return callObjectMethod(
			"setViewTypeCount",
			"(I)Landroid/widget/RemoteViews$RemoteCollectionItems$Builder;",
			arg0
		);
	}
} // namespace android::widget

