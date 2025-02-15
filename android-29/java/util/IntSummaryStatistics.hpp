#pragma once

#include "../../JObject.hpp"

class JString;

namespace java::util
{
	class IntSummaryStatistics : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntSummaryStatistics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntSummaryStatistics(QJniObject obj);
		
		// Constructors
		IntSummaryStatistics();
		IntSummaryStatistics(jlong arg0, jint arg1, jint arg2, jlong arg3);
		
		// Methods
		void accept(jint arg0) const;
		void combine(java::util::IntSummaryStatistics arg0) const;
		jdouble getAverage() const;
		jlong getCount() const;
		jint getMax() const;
		jint getMin() const;
		jlong getSum() const;
		JString toString() const;
	};
} // namespace java::util

