/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CHDAxesCollection, CHDChartTypesCollection, OADGraphicProperties;

// Not exported
@interface CHDPlotArea : NSObject
{
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    _Bool mCategoryAxesReversed;
    _Bool mCategoryAxesReversedOverridden;
    _Bool mContainsVolumeStockType;
}

- (void)setContainsVolumeStockType:(_Bool)arg1;
- (_Bool)containsVolumeStockType;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)markSecondaryAxes;
- (_Bool)hasSecondaryYAxisDeleted;
- (_Bool)hasSecondaryAxis;
- (id)axes;
- (id)chartTypes;
- (void)dealloc;
- (id)initWithChart:(id)arg1;
- (_Bool)isCategoryAxesReversed:(_Bool)arg1;

@end

