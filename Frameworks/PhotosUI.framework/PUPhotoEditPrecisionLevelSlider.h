/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUPhotoEditLevelSlider.h>

#import "PUPhotoEditPrecisionLevelContentViewDataSource-Protocol.h"

@class PUPhotoEditPrecisionLevelContentView;

@interface PUPhotoEditPrecisionLevelSlider : PUPhotoEditLevelSlider <PUPhotoEditPrecisionLevelContentViewDataSource>
{
    PUPhotoEditPrecisionLevelContentView *_precisionSliderContentView;
}

- (void).cxx_destruct;
- (double)precisionLevelContentViewIdentityOffset:(id)arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (void)invalidateConversionFactors;
- (id)preferredSliderContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

