/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIImageAsset.h>

@class NSArray;

// Not exported
@interface _UIPathLazyImageAsset : UIImageAsset
{
    _Bool _imagesHaveBeenLoaded;
    _Bool _haveCGCacheImages;
    NSArray *_imagePaths;
}

@property(nonatomic) _Bool haveCGCacheImages; // @synthesize haveCGCacheImages=_haveCGCacheImages;
@property(copy, nonatomic) NSArray *imagePaths; // @synthesize imagePaths=_imagePaths;
- (void)_clearResolvedImageResources;
- (id)imageWithTraitCollection:(id)arg1;
- (void)dealloc;

@end

