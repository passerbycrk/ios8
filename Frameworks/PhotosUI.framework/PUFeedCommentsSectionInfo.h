/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUFeedSectionInfo.h>

@interface PUFeedCommentsSectionInfo : PUFeedSectionInfo
{
    _Bool __hasLikes;
}

@property(nonatomic, setter=_setHasLikes:) _Bool _hasLikes; // @synthesize _hasLikes=__hasLikes;
- (unsigned long long)assetsCount;
- (id)assets;
- (long long)indexOfItemWithComment:(id)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (_Bool)containsAsset:(id)arg1;
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;
- (id)likesForItemAtIndex:(long long)arg1;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (_Bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (id)cloudFeedCommentsEntry;
- (long long)sectionType;

@end
