#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Dialog.hpp"
#include "./AlertDialog.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::widget
{
	class DatePicker;
}

namespace android::app
{
	class DatePickerDialog : public android::app::AlertDialog
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatePickerDialog(const char *className, const char *sig, Ts...agv) : android::app::AlertDialog(className, sig, std::forward<Ts>(agv)...) {}
		DatePickerDialog(QAndroidJniObject obj);
		
		// Constructors
		DatePickerDialog(android::content::Context arg0);
		DatePickerDialog(android::content::Context arg0, jint arg1);
		DatePickerDialog(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4);
		DatePickerDialog(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		android::widget::DatePicker getDatePicker();
		void onClick(__JniBaseClass arg0, jint arg1);
		void onDateChanged(android::widget::DatePicker arg0, jint arg1, jint arg2, jint arg3);
		void onRestoreInstanceState(android::os::Bundle arg0);
		android::os::Bundle onSaveInstanceState();
		void setOnDateSetListener(__JniBaseClass arg0);
		void updateDate(jint arg0, jint arg1, jint arg2);
	};
} // namespace android::app

