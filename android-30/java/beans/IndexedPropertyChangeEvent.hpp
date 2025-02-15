#pragma once

#include "./PropertyChangeEvent.hpp"

class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace java::beans
{
	class IndexedPropertyChangeEvent : public java::beans::PropertyChangeEvent
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IndexedPropertyChangeEvent(const char *className, const char *sig, Ts...agv) : java::beans::PropertyChangeEvent(className, sig, std::forward<Ts>(agv)...) {}
		IndexedPropertyChangeEvent(QJniObject obj);
		
		// Constructors
		IndexedPropertyChangeEvent(JObject arg0, JString arg1, JObject arg2, JObject arg3, jint arg4);
		
		// Methods
		jint getIndex() const;
	};
} // namespace java::beans

