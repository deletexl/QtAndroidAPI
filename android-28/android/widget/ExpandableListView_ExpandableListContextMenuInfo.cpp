#include "../view/View.hpp"
#include "./ExpandableListView_ExpandableListContextMenuInfo.hpp"

namespace android::widget
{
	// Fields
	jlong ExpandableListView_ExpandableListContextMenuInfo::id()
	{
		return getField<jlong>(
			"id"
		);
	}
	jlong ExpandableListView_ExpandableListContextMenuInfo::packedPosition()
	{
		return getField<jlong>(
			"packedPosition"
		);
	}
	android::view::View ExpandableListView_ExpandableListContextMenuInfo::targetView()
	{
		return getObjectField(
			"targetView",
			"Landroid/view/View;"
		);
	}
	
	// QJniObject forward
	ExpandableListView_ExpandableListContextMenuInfo::ExpandableListView_ExpandableListContextMenuInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ExpandableListView_ExpandableListContextMenuInfo::ExpandableListView_ExpandableListContextMenuInfo(android::view::View arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.widget.ExpandableListView$ExpandableListContextMenuInfo",
			"(Landroid/view/View;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

