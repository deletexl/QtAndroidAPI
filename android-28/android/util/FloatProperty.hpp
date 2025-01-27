#pragma once

#include "./Property.hpp"

namespace java::lang
{
	class Float;
}
class JObject;
class JString;

namespace android::util
{
	class FloatProperty : public android::util::Property
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloatProperty(const char *className, const char *sig, Ts...agv) : android::util::Property(className, sig, std::forward<Ts>(agv)...) {}
		FloatProperty(QJniObject obj);
		
		// Constructors
		FloatProperty(JString arg0);
		
		// Methods
		void set(JObject arg0, java::lang::Float arg1) const;
		void set(JObject arg0, JObject arg1) const;
		void setValue(JObject arg0, jfloat arg1) const;
	};
} // namespace android::util

