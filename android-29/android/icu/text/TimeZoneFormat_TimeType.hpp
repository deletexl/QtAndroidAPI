#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class TimeZoneFormat_TimeType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::TimeZoneFormat_TimeType DAYLIGHT();
		static android::icu::text::TimeZoneFormat_TimeType STANDARD();
		static android::icu::text::TimeZoneFormat_TimeType UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_TimeType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_TimeType(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneFormat_TimeType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

