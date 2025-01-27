#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"
#include "./ListActivity.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	ListActivity::ListActivity(QJniObject obj) : android::app::Activity(obj) {}
	
	// Constructors
	ListActivity::ListActivity()
		: android::app::Activity(
			"android.app.ListActivity",
			"()V"
		) {}
	
	// Methods
	JObject ListActivity::getListAdapter() const
	{
		return callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	android::widget::ListView ListActivity::getListView() const
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jlong ListActivity::getSelectedItemId() const
	{
		return callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint ListActivity::getSelectedItemPosition() const
	{
		return callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	void ListActivity::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void ListActivity::setListAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	void ListActivity::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

