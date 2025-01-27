#pragma once

#include "./Calendar.hpp"

namespace android::icu::util
{
	class Calendar;
}
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
	class GregorianCalendar : public android::icu::util::Calendar
	{
	public:
		// Fields
		static jint AD();
		static jint BC();
		
		// QJniObject forward
		template<typename ...Ts> explicit GregorianCalendar(const char *className, const char *sig, Ts...agv) : android::icu::util::Calendar(className, sig, std::forward<Ts>(agv)...) {}
		GregorianCalendar(QJniObject obj);
		
		// Constructors
		GregorianCalendar();
		GregorianCalendar(android::icu::util::TimeZone arg0);
		GregorianCalendar(android::icu::util::ULocale arg0);
		GregorianCalendar(java::util::Locale arg0);
		GregorianCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1);
		GregorianCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1);
		GregorianCalendar(jint arg0, jint arg1, jint arg2);
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jint getActualMaximum(jint arg0) const;
		jint getActualMinimum(jint arg0) const;
		java::util::Date getGregorianChange() const;
		JString getType() const;
		jint hashCode() const;
		jboolean isEquivalentTo(android::icu::util::Calendar arg0) const;
		jboolean isLeapYear(jint arg0) const;
		void roll(jint arg0, jint arg1) const;
		void setGregorianChange(java::util::Date arg0) const;
	};
} // namespace android::icu::util

