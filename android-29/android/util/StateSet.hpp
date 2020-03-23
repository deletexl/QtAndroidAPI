#pragma once

#ifndef ANDROID_UTIL_STATESET
#define ANDROID_UTIL_STATESET

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class StateSet : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject NOTHING();
		static QAndroidJniObject WILD_CARD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isWildCard(jintArray arg0);
		static jboolean stateSetMatches(jintArray arg0, jint arg1);
		static jboolean stateSetMatches(jintArray arg0, jintArray arg1);
		static QAndroidJniObject trimStateSet(jintArray arg0, jint arg1);
		static QAndroidJniObject dump(jintArray arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	QAndroidJniObject StateSet::NOTHING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.StateSet",
			"NOTHING",
			"[I");
	}
	QAndroidJniObject StateSet::WILD_CARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.StateSet",
			"WILD_CARD",
			"[I");
	}
	
	// Constructors
	void StateSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.StateSet",
			"(V)V");
	}
	
	// Methods
	jboolean StateSet::isWildCard(jintArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StateSet",
			"isWildCard",
			"([I)Z",
			arg0);
	}
	jboolean StateSet::stateSetMatches(jintArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([II)Z",
			arg0,
			arg1);
	}
	jboolean StateSet::stateSetMatches(jintArray arg0, jintArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([I[I)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject StateSet::trimStateSet(jintArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.StateSet",
			"trimStateSet",
			"([II)[I",
			arg0,
			arg1);
	}
	QAndroidJniObject StateSet::dump(jintArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.StateSet",
			"dump",
			"([I)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class StateSet : public __jni_impl::android::util::StateSet
	{
	public:
		StateSet(QAndroidJniObject obj) { __thiz = obj; }
		StateSet()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_STATESET
