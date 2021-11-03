#pragma once

#include "../../JObject.hpp"

namespace java::beans
{
	class PropertyChangeEvent;
}
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::beans
{
	class PropertyChangeSupport : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyChangeSupport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PropertyChangeSupport(QAndroidJniObject obj);
		
		// Constructors
		PropertyChangeSupport(jobject arg0);
		
		// Methods
		void addPropertyChangeListener(JObject arg0);
		void addPropertyChangeListener(jstring arg0, JObject arg1);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jboolean arg2, jboolean arg3);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jint arg2, jint arg3);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jobject arg2, jobject arg3);
		void firePropertyChange(java::beans::PropertyChangeEvent arg0);
		void firePropertyChange(jstring arg0, jboolean arg1, jboolean arg2);
		void firePropertyChange(jstring arg0, jint arg1, jint arg2);
		void firePropertyChange(jstring arg0, jobject arg1, jobject arg2);
		jarray getPropertyChangeListeners();
		jarray getPropertyChangeListeners(jstring arg0);
		jboolean hasListeners(jstring arg0);
		void removePropertyChangeListener(JObject arg0);
		void removePropertyChangeListener(jstring arg0, JObject arg1);
	};
} // namespace java::beans

