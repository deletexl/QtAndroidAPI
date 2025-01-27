#include "../io/ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalDateTime.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetDateTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./ZonedDateTime.hpp"

namespace java::time
{
	// Fields
	
	// QJniObject forward
	ZonedDateTime::ZonedDateTime(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::ZonedDateTime ZonedDateTime::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::now()
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	java::time::ZonedDateTime ZonedDateTime::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::of(java::time::LocalDateTime arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::of(java::time::LocalDate arg0, java::time::LocalTime arg1, java::time::ZoneId arg2)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::time::ZoneId arg7)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(IIIIIIILjava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::ofInstant(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneId arg2)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofInstant",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::ofLocal(java::time::LocalDateTime arg0, java::time::ZoneId arg1, java::time::ZoneOffset arg2)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofLocal",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneId;Ljava/time/ZoneOffset;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::ofStrict(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneId arg2)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofStrict",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/ZonedDateTime;",
			arg0.object<jstring>()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/ZonedDateTime;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean ZonedDateTime::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ZonedDateTime::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint ZonedDateTime::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint ZonedDateTime::getDayOfMonth() const
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	java::time::DayOfWeek ZonedDateTime::getDayOfWeek() const
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint ZonedDateTime::getDayOfYear() const
	{
		return callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	jint ZonedDateTime::getHour() const
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong ZonedDateTime::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint ZonedDateTime::getMinute() const
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	java::time::Month ZonedDateTime::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint ZonedDateTime::getMonthValue() const
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint ZonedDateTime::getNano() const
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	java::time::ZoneOffset ZonedDateTime::getOffset() const
	{
		return callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint ZonedDateTime::getSecond() const
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint ZonedDateTime::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	java::time::ZoneId ZonedDateTime::getZone() const
	{
		return callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	jint ZonedDateTime::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZonedDateTime::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minusDays(jlong arg0) const
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minusHours(jlong arg0) const
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minusWeeks(jlong arg0) const
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plusDays(jlong arg0) const
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plusHours(jlong arg0) const
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plusWeeks(jlong arg0) const
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	JObject ZonedDateTime::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange ZonedDateTime::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	java::time::LocalDate ZonedDateTime::toLocalDate() const
	{
		return callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	java::time::LocalDateTime ZonedDateTime::toLocalDateTime() const
	{
		return callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	java::time::LocalTime ZonedDateTime::toLocalTime() const
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	java::time::OffsetDateTime ZonedDateTime::toOffsetDateTime() const
	{
		return callObjectMethod(
			"toOffsetDateTime",
			"()Ljava/time/OffsetDateTime;"
		);
	}
	JString ZonedDateTime::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::time::ZonedDateTime ZonedDateTime::truncatedTo(JObject arg0) const
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	jlong ZonedDateTime::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withDayOfMonth(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withDayOfYear(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withEarlierOffsetAtOverlap() const
	{
		return callObjectMethod(
			"withEarlierOffsetAtOverlap",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withFixedOffsetZone() const
	{
		return callObjectMethod(
			"withFixedOffsetZone",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withHour(jint arg0) const
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withLaterOffsetAtOverlap() const
	{
		return callObjectMethod(
			"withLaterOffsetAtOverlap",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withMinute(jint arg0) const
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withMonth(jint arg0) const
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withNano(jint arg0) const
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withSecond(jint arg0) const
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withYear(jint arg0) const
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withZoneSameInstant(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"withZoneSameInstant",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime ZonedDateTime::withZoneSameLocal(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"withZoneSameLocal",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
} // namespace java::time

