#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../view/View.hpp"
#include "../../view/ViewGroup.hpp"

namespace android::view
{
	class SurfaceControl;
}

namespace android::widget::inline
{
	class InlineContentView : public android::view::ViewGroup
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InlineContentView(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		InlineContentView(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::SurfaceControl getSurfaceControl();
		jboolean isZOrderedOnTop();
		void onLayout(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setSurfaceControlCallback(__JniBaseClass arg0);
		jboolean setZOrderedOnTop(jboolean arg0);
	};
} // namespace android::widget::inline
