#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseExpandableListAdapter.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::widget
{
	class Filter;
}

namespace android::widget
{
	class CursorTreeAdapter : public android::widget::BaseExpandableListAdapter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorTreeAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseExpandableListAdapter(className, sig, std::forward<Ts>(agv)...) {}
		CursorTreeAdapter(QAndroidJniObject obj);
		
		// Constructors
		CursorTreeAdapter(__JniBaseClass arg0, android::content::Context arg1);
		CursorTreeAdapter(__JniBaseClass arg0, android::content::Context arg1, jboolean arg2);
		
		// Methods
		void changeCursor(__JniBaseClass arg0);
		jstring convertToString(__JniBaseClass arg0);
		__JniBaseClass getChild(jint arg0, jint arg1);
		jlong getChildId(jint arg0, jint arg1);
		android::view::View getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4);
		jint getChildrenCount(jint arg0);
		__JniBaseClass getCursor();
		android::widget::Filter getFilter();
		__JniBaseClass getFilterQueryProvider();
		__JniBaseClass getGroup(jint arg0);
		jint getGroupCount();
		jlong getGroupId(jint arg0);
		android::view::View getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3);
		jboolean hasStableIds();
		jboolean isChildSelectable(jint arg0, jint arg1);
		void notifyDataSetChanged();
		void notifyDataSetChanged(jboolean arg0);
		void notifyDataSetInvalidated();
		void onGroupCollapsed(jint arg0);
		__JniBaseClass runQueryOnBackgroundThread(jstring arg0);
		void setChildrenCursor(jint arg0, __JniBaseClass arg1);
		void setFilterQueryProvider(__JniBaseClass arg0);
		void setGroupCursor(__JniBaseClass arg0);
	};
} // namespace android::widget
