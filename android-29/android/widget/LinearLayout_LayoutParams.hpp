#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewGroup_MarginLayoutParams;
}

namespace android::widget
{
	class LinearLayout_LayoutParams : public android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		jint gravity();
		jfloat weight();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinearLayout_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_MarginLayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		LinearLayout_LayoutParams(QAndroidJniObject obj);
		
		// Constructors
		LinearLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		LinearLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		LinearLayout_LayoutParams(android::widget::LinearLayout_LayoutParams &arg0);
		LinearLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		LinearLayout_LayoutParams(jint arg0, jint arg1);
		LinearLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2);
		
		// Methods
		jstring debug(jstring arg0);
	};
} // namespace android::widget

