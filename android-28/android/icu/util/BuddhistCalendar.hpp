#pragma once

#include "./GregorianCalendar.hpp"

namespace android::icu::util
{
	class TimeZone;
}
namespace android::icu::util
{
	class ULocale;
}
class JString;
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::util
{
	class BuddhistCalendar : public android::icu::util::GregorianCalendar
	{
	public:
		// Fields
		static jint BE();
		
		// QJniObject forward
		template<typename ...Ts> explicit BuddhistCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::GregorianCalendar(className, sig, std::forward<Ts>(agv)...) {}
		BuddhistCalendar(QJniObject obj);
		
		// Constructors
		BuddhistCalendar();
		BuddhistCalendar(android::icu::util::TimeZone arg0);
		BuddhistCalendar(android::icu::util::ULocale arg0);
		BuddhistCalendar(java::util::Date arg0);
		BuddhistCalendar(java::util::Locale arg0);
		BuddhistCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		BuddhistCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		BuddhistCalendar(jint arg0, jint arg1, jint arg2);
		BuddhistCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		JString getType() const;
	};
} // namespace android::icu::util

