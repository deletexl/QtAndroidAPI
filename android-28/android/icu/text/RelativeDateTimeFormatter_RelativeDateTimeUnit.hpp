#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeDateTimeUnit : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit DAY();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit FRIDAY();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit HOUR();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit MINUTE();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit MONDAY();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit MONTH();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit QUARTER();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit SATURDAY();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit SECOND();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit SUNDAY();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit THURSDAY();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit TUESDAY();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit WEDNESDAY();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit WEEK();
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_RelativeDateTimeUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_RelativeDateTimeUnit(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text
