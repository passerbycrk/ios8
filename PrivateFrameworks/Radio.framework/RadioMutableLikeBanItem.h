/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Radio/RadioLikeBanItem.h>

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioMutableLikeBanItem : RadioLikeBanItem
{
    long long _itemID;
}

@property(nonatomic) long long itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long type;
@property(nonatomic) long long storeID;
@property(copy, nonatomic) RadioSeedMetadata *seedMetadata;
@property(nonatomic) _Bool isSeed;
@property(retain, nonatomic) RadioArtworkCollection *artworkCollection;
@property(nonatomic) long long albumID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

