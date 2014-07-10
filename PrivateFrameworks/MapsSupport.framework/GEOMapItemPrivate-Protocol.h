/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GEOMapItem-Protocol.h"

@class GEOAddress, GEOPDFlyover, GEOPDPlace, GEOPlace, NSArray, NSData, NSString, NSURL;

@protocol GEOMapItemPrivate <GEOMapItem>
@property(readonly, nonatomic, getter=_isYelpForSiri) _Bool isYelpForSiri;
@property(readonly, nonatomic, getter=_calloutDisplayName) NSString *calloutDisplayName;
@property(readonly, nonatomic, getter=_reviewDisplayName) NSString *reviewDisplayName;
@property(readonly, nonatomic, getter=_showAddReview) _Bool showAddReview;
@property(readonly, nonatomic, getter=_hasMoreReviewAttribution) _Bool hasMoreReviewAttribution;
@property(readonly, nonatomic, getter=_showReviewAttribution) _Bool showReviewAttribution;
@property(readonly, nonatomic, getter=_photoDisplayName) NSString *photoDisplayName;
@property(readonly, nonatomic, getter=_showAddPhoto) _Bool showAddPhoto;
@property(readonly, nonatomic, getter=_hasMorePhotoAttribution) _Bool hasMorePhotoAttribution;
@property(readonly, nonatomic, getter=_showPhotoAttribution) _Bool showPhotoAttribution;
@property(readonly, nonatomic, getter=_infoDisplayName) NSString *infoDisplayName;
@property(readonly, nonatomic, getter=_hasMoreInfoAttribution) _Bool hasMoreInfoAttribution;
@property(readonly, nonatomic, getter=_showInfoAttribution) _Bool showInfoAttribution;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) _Bool hasTelephone;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_takesReservations) _Bool takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) _Bool hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) _Bool goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) _Bool hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) _Bool hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) _Bool hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
@property(readonly, nonatomic, getter=_categoryKeys) NSArray *categoryKeys;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_sequenceNumber) unsigned int sequenceNumber;
@property(readonly, nonatomic, getter=_sessionGUID) CDStruct_4bcfbbae sessionGUID;
@property(readonly, nonatomic, getter=_geoAddress) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_placeAsData) NSData *placeAsData;
@property(readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property(readonly, nonatomic, getter=_place) GEOPlace *place;
- (id)_checkInURLs:(id *)arg1;
- (id)_viewDealURLs:(id)arg1 attributionApps:(id *)arg2;
- (id)_reviewLogoPathForScale:(double)arg1;
- (id)_viewReviewURLs:(id)arg1 attributionApps:(id *)arg2;
- (id)_addReviewURLs:(id *)arg1;
- (id)_reviewAttributionURLs:(id *)arg1;
- (id)_photoLogoPathForScale:(double)arg1;
- (id)_viewPhotoURLs:(id)arg1 attributionApps:(id *)arg2;
- (id)_addPhotoURLs:(id *)arg1;
- (id)_photoAttributionURLs:(id *)arg1;
- (id)_infoLogoPathForScale:(double)arg1;
- (id)_infoAttributionURLs:(id *)arg1;
- (id)_urlForWritingAReview;
- (id)_urlForReviewWithUID:(id)arg1;
- (id)_urlForPhotoWithUID:(id)arg1;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
@end
