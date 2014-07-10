/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPropertyAction.h>

@class NSArray;

@interface ABContactAddFavoriteAction : ABPropertyAction
{
    NSArray *_filteredPhoneItems;
}

@property(retain, nonatomic) NSArray *filteredPhoneItems; // @synthesize filteredPhoneItems=_filteredPhoneItems;
- (void)_saveFavorite:(id)arg1 withType:(int)arg2;
- (void)_filterFavoritedItems;
- (void)performActionWithSender:(id)arg1;
- (_Bool)canPerformAction;
- (void)dealloc;

@end
