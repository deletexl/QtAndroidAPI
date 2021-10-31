#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../app/Dialog.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class AdapterView;
}

namespace android::text::method
{
	class CharacterPickerDialog : public android::app::Dialog
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharacterPickerDialog(const char *className, const char *sig, Ts...agv) : android::app::Dialog(className, sig, std::forward<Ts>(agv)...) {}
		CharacterPickerDialog(QAndroidJniObject obj);
		
		// Constructors
		CharacterPickerDialog(android::content::Context arg0, android::view::View arg1, __JniBaseClass arg2, jstring arg3, jboolean arg4);
		
		// Methods
		void onClick(android::view::View arg0);
		void onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3);
	};
} // namespace android::text::method
