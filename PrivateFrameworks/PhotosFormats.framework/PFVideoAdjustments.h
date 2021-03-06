/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments
{
    float _slowMotionRate;
    CDStruct_e83c9415 _slowMotionTimeRange;
}

+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1;
+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg1;
+ (CDStruct_e83c9415)defaultSlowMotionTimeRangeForDuration:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_e83c9415 slowMotionTimeRange; // @synthesize slowMotionTimeRange=_slowMotionTimeRange;
@property(nonatomic) float slowMotionRate; // @synthesize slowMotionRate=_slowMotionRate;
- (id)_dictionaryFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (_Bool)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;
- (_Bool)_parseVersionedDataForSlowMotionTimeRange:(CDStruct_e83c9415 *)arg1 rate:(float *)arg2;
- (_Bool)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;
- (void)_updateDerivedPropertiesFromVersionedData;
- (_Bool)_isSlowMotionFormat;
- (_Bool)isRecognizedFormat;
- (id)description;
- (id)initWithPropertyListDictionary:(id)arg1;
- (_Bool)hasSlowMotionAdjustments;
- (_Bool)_isUsableSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (id)initWithSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampOut;
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampIn;

@end

