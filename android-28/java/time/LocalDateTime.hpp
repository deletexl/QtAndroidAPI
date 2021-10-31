#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class Clock;
}
namespace java::time
{
	class DayOfWeek;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDate;
}
namespace java::time
{
	class LocalTime;
}
namespace java::time
{
	class Month;
}
namespace java::time
{
	class OffsetDateTime;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time
{
	class ZoneOffset;
}
namespace java::time
{
	class ZonedDateTime;
}
namespace java::time::format
{
	class DateTimeFormatter;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time
{
	class LocalDateTime : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::LocalDateTime MAX();
		static java::time::LocalDateTime MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalDateTime(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocalDateTime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::LocalDateTime from(__JniBaseClass arg0);
		static java::time::LocalDateTime now();
		static java::time::LocalDateTime now(java::time::Clock arg0);
		static java::time::LocalDateTime now(java::time::ZoneId arg0);
		static java::time::LocalDateTime of(java::time::LocalDate arg0, java::time::LocalTime arg1);
		static java::time::LocalDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static java::time::LocalDateTime of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4);
		static java::time::LocalDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static java::time::LocalDateTime of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static java::time::LocalDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static java::time::LocalDateTime of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static java::time::LocalDateTime ofEpochSecond(jlong arg0, jint arg1, java::time::ZoneOffset arg2);
		static java::time::LocalDateTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::LocalDateTime parse(jstring arg0);
		static java::time::LocalDateTime parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		java::time::OffsetDateTime atOffset(java::time::ZoneOffset arg0);
		java::time::ZonedDateTime atZone(java::time::ZoneId arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jint getDayOfMonth();
		java::time::DayOfWeek getDayOfWeek();
		jint getDayOfYear();
		jint getHour();
		jlong getLong(__JniBaseClass arg0);
		jint getMinute();
		java::time::Month getMonth();
		jint getMonthValue();
		jint getNano();
		jint getSecond();
		jint getYear();
		jint hashCode();
		jboolean isAfter(__JniBaseClass arg0);
		jboolean isBefore(__JniBaseClass arg0);
		jboolean isEqual(__JniBaseClass arg0);
		jboolean isSupported(__JniBaseClass arg0);
		java::time::LocalDateTime minus(__JniBaseClass arg0);
		java::time::LocalDateTime minus(jlong arg0, __JniBaseClass arg1);
		java::time::LocalDateTime minusDays(jlong arg0);
		java::time::LocalDateTime minusHours(jlong arg0);
		java::time::LocalDateTime minusMinutes(jlong arg0);
		java::time::LocalDateTime minusMonths(jlong arg0);
		java::time::LocalDateTime minusNanos(jlong arg0);
		java::time::LocalDateTime minusSeconds(jlong arg0);
		java::time::LocalDateTime minusWeeks(jlong arg0);
		java::time::LocalDateTime minusYears(jlong arg0);
		java::time::LocalDateTime plus(__JniBaseClass arg0);
		java::time::LocalDateTime plus(jlong arg0, __JniBaseClass arg1);
		java::time::LocalDateTime plusDays(jlong arg0);
		java::time::LocalDateTime plusHours(jlong arg0);
		java::time::LocalDateTime plusMinutes(jlong arg0);
		java::time::LocalDateTime plusMonths(jlong arg0);
		java::time::LocalDateTime plusNanos(jlong arg0);
		java::time::LocalDateTime plusSeconds(jlong arg0);
		java::time::LocalDateTime plusWeeks(jlong arg0);
		java::time::LocalDateTime plusYears(jlong arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		java::time::LocalDate toLocalDate();
		java::time::LocalTime toLocalTime();
		jstring toString();
		java::time::LocalDateTime truncatedTo(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::LocalDateTime with(__JniBaseClass arg0);
		java::time::LocalDateTime with(__JniBaseClass arg0, jlong arg1);
		java::time::LocalDateTime withDayOfMonth(jint arg0);
		java::time::LocalDateTime withDayOfYear(jint arg0);
		java::time::LocalDateTime withHour(jint arg0);
		java::time::LocalDateTime withMinute(jint arg0);
		java::time::LocalDateTime withMonth(jint arg0);
		java::time::LocalDateTime withNano(jint arg0);
		java::time::LocalDateTime withSecond(jint arg0);
		java::time::LocalDateTime withYear(jint arg0);
	};
} // namespace java::time
