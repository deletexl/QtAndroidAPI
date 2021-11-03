#include "./TvContentRating.hpp"

namespace android::media::tv
{
	// Fields
	android::media::tv::TvContentRating TvContentRating::UNRATED()
	{
		return getStaticObjectField(
			"android.media.tv.TvContentRating",
			"UNRATED",
			"Landroid/media/tv/TvContentRating;"
		);
	}
	
	// QAndroidJniObject forward
	TvContentRating::TvContentRating(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::tv::TvContentRating TvContentRating::createRating(jstring arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"createRating",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::media::tv::TvContentRating TvContentRating::unflattenFromString(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0
		);
	}
	jboolean TvContentRating::contains(android::media::tv::TvContentRating arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/media/tv/TvContentRating;)Z",
			arg0.object()
		);
	}
	jboolean TvContentRating::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring TvContentRating::flattenToString()
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getDomain()
	{
		return callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getMainRating()
	{
		return callObjectMethod(
			"getMainRating",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getRatingSystem()
	{
		return callObjectMethod(
			"getRatingSystem",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject TvContentRating::getSubRatings()
	{
		return callObjectMethod(
			"getSubRatings",
			"()Ljava/util/List;"
		);
	}
	jint TvContentRating::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::tv

