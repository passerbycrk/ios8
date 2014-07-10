/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

// Not exported
@interface GQDAffineGeometry : NSObject <GQDNameMappable>
{
    struct CGSize mNaturalSize;
    struct CGSize mSize;
    _Bool mSizesLocked;
    _Bool mAspectRatioLocked;
    struct CGPoint mPosition;
    float mAngle;
    _Bool mHorizontalFlip;
    _Bool mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

+ (struct CGRect)boundsOfTransformedRect:(struct CGRect)arg1 transform:(id)arg2;
+ (void)transformRect:(struct CGRect)arg1 transform:(id)arg2 upperLeft:(struct CGPoint *)arg3 lowerLeft:(struct CGPoint *)arg4 lowerRight:(struct CGPoint *)arg5 upperRight:(struct CGPoint *)arg6;
+ (const struct StateSpec *)stateForReading;
- (id).cxx_construct;
- (struct CGAffineTransform)transformHasVFlip:(_Bool)arg1 vFlip:(_Bool)arg2 hasHFlip:(_Bool)arg3 hFlip:(_Bool)arg4;
- (struct CGAffineTransform)transform;
- (struct CGRect)naturalBounds;
- (struct CGPoint)nonrotatedPosition;
- (struct CGSize)sizeOfBoundingBox;
- (void)setShearYAngle:(float)arg1;
- (float)shearYAngle;
- (void)setShearXAngle:(float)arg1;
- (float)shearXAngle;
- (void)setVerticalFlip:(_Bool)arg1;
- (_Bool)verticalFlip;
- (void)setHorizontalFlip:(_Bool)arg1;
- (_Bool)horizontalFlip;
- (void)setAngle:(float)arg1;
- (float)angle;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)setAspectRatioLocked:(_Bool)arg1;
- (_Bool)aspectRatioLocked;
- (void)setSizesLocked:(_Bool)arg1;
- (_Bool)sizesLocked;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end
