#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./Rating.hpp"

namespace android::media
{
	// Fields
	JObject Rating::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Rating",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Rating::RATING_3_STARS()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_3_STARS"
		);
	}
	jint Rating::RATING_4_STARS()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_4_STARS"
		);
	}
	jint Rating::RATING_5_STARS()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_5_STARS"
		);
	}
	jint Rating::RATING_HEART()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_HEART"
		);
	}
	jint Rating::RATING_NONE()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_NONE"
		);
	}
	jint Rating::RATING_PERCENTAGE()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_PERCENTAGE"
		);
	}
	jint Rating::RATING_THUMB_UP_DOWN()
	{
		return getStaticField<jint>(
			"android.media.Rating",
			"RATING_THUMB_UP_DOWN"
		);
	}
	
	// QJniObject forward
	Rating::Rating(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::Rating Rating::newHeartRating(jboolean arg0)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newHeartRating",
			"(Z)Landroid/media/Rating;",
			arg0
		);
	}
	android::media::Rating Rating::newPercentageRating(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newPercentageRating",
			"(F)Landroid/media/Rating;",
			arg0
		);
	}
	android::media::Rating Rating::newStarRating(jint arg0, jfloat arg1)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newStarRating",
			"(IF)Landroid/media/Rating;",
			arg0,
			arg1
		);
	}
	android::media::Rating Rating::newThumbRating(jboolean arg0)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newThumbRating",
			"(Z)Landroid/media/Rating;",
			arg0
		);
	}
	android::media::Rating Rating::newUnratedRating(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.Rating",
			"newUnratedRating",
			"(I)Landroid/media/Rating;",
			arg0
		);
	}
	jint Rating::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat Rating::getPercentRating() const
	{
		return callMethod<jfloat>(
			"getPercentRating",
			"()F"
		);
	}
	jint Rating::getRatingStyle() const
	{
		return callMethod<jint>(
			"getRatingStyle",
			"()I"
		);
	}
	jfloat Rating::getStarRating() const
	{
		return callMethod<jfloat>(
			"getStarRating",
			"()F"
		);
	}
	jboolean Rating::hasHeart() const
	{
		return callMethod<jboolean>(
			"hasHeart",
			"()Z"
		);
	}
	jboolean Rating::isRated() const
	{
		return callMethod<jboolean>(
			"isRated",
			"()Z"
		);
	}
	jboolean Rating::isThumbUp() const
	{
		return callMethod<jboolean>(
			"isThumbUp",
			"()Z"
		);
	}
	JString Rating::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Rating::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

