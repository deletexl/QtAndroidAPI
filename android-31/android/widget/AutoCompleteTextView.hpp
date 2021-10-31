#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./EditText.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view::inputmethod
{
	class CompletionInfo;
}
namespace android::widget
{
	class Filter;
}

namespace android::widget
{
	class AutoCompleteTextView : public android::widget::EditText
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AutoCompleteTextView(const char *className, const char *sig, Ts...agv) : android::widget::EditText(className, sig, std::forward<Ts>(agv)...) {}
		AutoCompleteTextView(QAndroidJniObject obj);
		
		// Constructors
		AutoCompleteTextView(android::content::Context arg0);
		AutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1);
		AutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		AutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		AutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, android::content::res::Resources_Theme arg4);
		
		// Methods
		void clearListSelection();
		void dismissDropDown();
		jboolean enoughToFilter();
		jstring getAccessibilityClassName();
		__JniBaseClass getAdapter();
		jstring getCompletionHint();
		jint getDropDownAnchor();
		android::graphics::drawable::Drawable getDropDownBackground();
		jint getDropDownHeight();
		jint getDropDownHorizontalOffset();
		jint getDropDownVerticalOffset();
		jint getDropDownWidth();
		jint getInputMethodMode();
		__JniBaseClass getItemClickListener();
		__JniBaseClass getItemSelectedListener();
		jint getListSelection();
		__JniBaseClass getOnItemClickListener();
		__JniBaseClass getOnItemSelectedListener();
		jint getThreshold();
		__JniBaseClass getValidator();
		jboolean isPerformingCompletion();
		jboolean isPopupShowing();
		void onCommitCompletion(android::view::inputmethod::CompletionInfo arg0);
		void onFilterComplete(jint arg0);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void onWindowFocusChanged(jboolean arg0);
		void performCompletion();
		void performValidation();
		void refreshAutoCompleteResults();
		void setAdapter(__JniBaseClass arg0);
		void setCompletionHint(jstring arg0);
		void setDropDownAnchor(jint arg0);
		void setDropDownBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setDropDownBackgroundResource(jint arg0);
		void setDropDownHeight(jint arg0);
		void setDropDownHorizontalOffset(jint arg0);
		void setDropDownVerticalOffset(jint arg0);
		void setDropDownWidth(jint arg0);
		void setInputMethodMode(jint arg0);
		void setListSelection(jint arg0);
		void setOnClickListener(__JniBaseClass arg0);
		void setOnDismissListener(__JniBaseClass arg0);
		void setOnItemClickListener(__JniBaseClass arg0);
		void setOnItemSelectedListener(__JniBaseClass arg0);
		void setText(jstring arg0, jboolean arg1);
		void setThreshold(jint arg0);
		void setValidator(__JniBaseClass arg0);
		void showDropDown();
	};
} // namespace android::widget
