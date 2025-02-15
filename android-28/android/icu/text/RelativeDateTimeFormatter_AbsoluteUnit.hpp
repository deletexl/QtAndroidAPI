#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class RelativeDateTimeFormatter_AbsoluteUnit : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit DAY();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit FRIDAY();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit MONDAY();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit MONTH();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit NOW();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit QUARTER();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit SATURDAY();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit SUNDAY();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit THURSDAY();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit TUESDAY();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit WEDNESDAY();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit WEEK();
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit YEAR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_AbsoluteUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_AbsoluteUnit(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

