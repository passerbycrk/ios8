/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUImageModifier.h>

@interface SUFrameAdjustmentImageModifier : SUImageModifier
{
    _Bool _shouldSizeDownToFit;
    unsigned long long _sizingMask;
}

@property(nonatomic) _Bool shouldSizeDownToFit; // @synthesize shouldSizeDownToFit=_shouldSizeDownToFit;
@property(nonatomic) unsigned long long sizingMask; // @synthesize sizingMask=_sizingMask;
- (_Bool)scalesImage;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (_Bool)isEqual:(id)arg1;

@end
