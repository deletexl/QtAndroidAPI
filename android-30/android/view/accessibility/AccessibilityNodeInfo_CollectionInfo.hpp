#pragma once

#include "../../../JObject.hpp"

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo : public JObject
	{
	public:
		// Fields
		static jint SELECTION_MODE_MULTIPLE();
		static jint SELECTION_MODE_NONE();
		static jint SELECTION_MODE_SINGLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_CollectionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_CollectionInfo(QJniObject obj);
		
		// Constructors
		AccessibilityNodeInfo_CollectionInfo(jint arg0, jint arg1, jboolean arg2);
		AccessibilityNodeInfo_CollectionInfo(jint arg0, jint arg1, jboolean arg2, jint arg3);
		
		// Methods
		static android::view::accessibility::AccessibilityNodeInfo_CollectionInfo obtain(jint arg0, jint arg1, jboolean arg2);
		static android::view::accessibility::AccessibilityNodeInfo_CollectionInfo obtain(jint arg0, jint arg1, jboolean arg2, jint arg3);
		jint getColumnCount() const;
		jint getRowCount() const;
		jint getSelectionMode() const;
		jboolean isHierarchical() const;
	};
} // namespace android::view::accessibility

