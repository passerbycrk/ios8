/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSSet, NSString, NSTimeZone, NSURL;

@protocol CalDAVCalendar <NSObject>
@property(readonly, nonatomic) NSSet *allItemURLs;
@property(readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property(readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property(readonly, nonatomic) NSArray *shareeActions;
@property(readonly, nonatomic) NSArray *syncActions;
@property(readonly, nonatomic) _Bool needsPublishUpdate;
@property(retain, nonatomic) NSString *syncToken;
@property(retain, nonatomic) NSString *ctag;
@property(nonatomic) _Bool needsResync;
@property(nonatomic) _Bool wasModifiedLocally;
@property(nonatomic) _Bool isMarkedImmutableSharees;
@property(nonatomic) _Bool isMarkedUndeletable;
@property(nonatomic) _Bool isFamilyCalendar;
@property(nonatomic) _Bool canBeShared;
@property(nonatomic) _Bool canBePublished;
@property(nonatomic) _Bool isAffectingAvailability;
@property(nonatomic) _Bool isPublished;
@property(nonatomic) _Bool isEnabled;
@property(nonatomic) _Bool isRenameable;
@property(nonatomic) _Bool isEditable;
@property(nonatomic) _Bool isPoll;
@property(nonatomic) _Bool isNotification;
@property(nonatomic) _Bool isScheduleOutbox;
@property(nonatomic) _Bool isScheduleInbox;
@property(nonatomic) _Bool isManagedByServer;
@property(nonatomic) _Bool isSubscribed;
@property(nonatomic) _Bool isEventContainer;
@property(nonatomic) _Bool isTaskContainer;
@property(retain, nonatomic) NSSet *sharees;
@property(nonatomic) int sharingStatus;
@property(nonatomic) int order;
@property(retain, nonatomic) NSDictionary *bulkRequests;
@property(retain, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) NSURL *prePublishURL;
@property(retain, nonatomic) NSURL *publishURL;
@property(retain, nonatomic) NSSet *calendarUserAddresses;
@property(retain, nonatomic) NSString *ownerDisplayName;
@property(retain, nonatomic) NSURL *owner;
@property(retain, nonatomic) NSString *pushKey;
@property(retain, nonatomic) NSString *symbolicColorName;
@property(retain, nonatomic) NSString *color;
@property(retain, nonatomic) NSString *notes;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSURL *calendarURL;
@property(retain, nonatomic) NSString *guid;
@property(readonly, nonatomic) id <CalDAVPrincipal> principal;
- (_Bool)hasCalendarUserAddressEquivalentToURL:(id)arg1;
- (_Bool)deleteResourcesAtURLs:(id)arg1;
- (_Bool)updateResourcesFromServer:(id)arg1;
- (_Bool)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
- (_Bool)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
- (_Bool)setEtag:(id)arg1 forItemAtURL:(id)arg2;
- (id)etagsForItemURLs:(id)arg1;

@optional
- (void)deleteAction:(id)arg1 completedWithError:(id)arg2;
- (void)putAction:(id)arg1 completedWithError:(id)arg2;
- (void)syncDidFinishWithError:(id)arg1;
- (void)clearShareeActions;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)arg1;
- (Class)appSpecificCalendarItemClass;
@end

