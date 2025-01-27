#include "../io/ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetDateTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./ZonedDateTime.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./LocalDateTime.hpp"

namespace java::time
{
	// Fields
	java::time::LocalDateTime LocalDateTime::MAX()
	{
		return getStaticObjectField(
			"java.time.LocalDateTime",
			"MAX",
			"Ljava/time/LocalDateTime;"
		);
	}
	java::time::LocalDateTime LocalDateTime::MIN()
	{
		return getStaticObjectField(
			"java.time.LocalDateTime",
			"MIN",
			"Ljava/time/LocalDateTime;"
		);
	}
	
	// QJniObject forward
	LocalDateTime::LocalDateTime(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::LocalDateTime LocalDateTime::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::now()
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"()Ljava/time/LocalDateTime;"
		);
	}
	java::time::LocalDateTime LocalDateTime::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::of(java::time::LocalDate arg0, java::time::LocalTime arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;)Ljava/time/LocalDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	java::time::LocalDateTime LocalDateTime::of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;III)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	java::time::LocalDateTime LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	java::time::LocalDateTime LocalDateTime::of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;IIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	java::time::LocalDateTime LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	java::time::LocalDateTime LocalDateTime::of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;IIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	java::time::LocalDateTime LocalDateTime::ofEpochSecond(jlong arg0, jint arg1, java::time::ZoneOffset arg2)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"ofEpochSecond",
			"(JILjava/time/ZoneOffset;)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDateTime;",
			arg0.object<jstring>()
		);
	}
	java::time::LocalDateTime LocalDateTime::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDateTime;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject LocalDateTime::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::OffsetDateTime LocalDateTime::atOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime LocalDateTime::atZone(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"atZone",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	jint LocalDateTime::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean LocalDateTime::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString LocalDateTime::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint LocalDateTime::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint LocalDateTime::getDayOfMonth() const
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	java::time::DayOfWeek LocalDateTime::getDayOfWeek() const
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint LocalDateTime::getDayOfYear() const
	{
		return callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	jint LocalDateTime::getHour() const
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong LocalDateTime::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint LocalDateTime::getMinute() const
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	java::time::Month LocalDateTime::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint LocalDateTime::getMonthValue() const
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint LocalDateTime::getNano() const
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jint LocalDateTime::getSecond() const
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint LocalDateTime::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint LocalDateTime::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LocalDateTime::isAfter(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.object()
		);
	}
	jboolean LocalDateTime::isBefore(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.object()
		);
	}
	jboolean LocalDateTime::isEqual(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.object()
		);
	}
	jboolean LocalDateTime::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::minusDays(jlong arg0) const
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::minusHours(jlong arg0) const
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::minusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::minusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::minusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::minusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::minusWeeks(jlong arg0) const
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::plusDays(jlong arg0) const
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::plusHours(jlong arg0) const
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::plusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::plusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::plusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::plusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::plusWeeks(jlong arg0) const
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	JObject LocalDateTime::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange LocalDateTime::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	java::time::LocalDate LocalDateTime::toLocalDate() const
	{
		return callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	java::time::LocalTime LocalDateTime::toLocalTime() const
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	JString LocalDateTime::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::time::LocalDateTime LocalDateTime::truncatedTo(JObject arg0) const
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	jlong LocalDateTime::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDateTime::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalDateTime;",
			arg0.object(),
			arg1
		);
	}
	java::time::LocalDateTime LocalDateTime::withDayOfMonth(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::withDayOfYear(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::withHour(jint arg0) const
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::withMinute(jint arg0) const
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::withMonth(jint arg0) const
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::withNano(jint arg0) const
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::withSecond(jint arg0) const
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	java::time::LocalDateTime LocalDateTime::withYear(jint arg0) const
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
} // namespace java::time

