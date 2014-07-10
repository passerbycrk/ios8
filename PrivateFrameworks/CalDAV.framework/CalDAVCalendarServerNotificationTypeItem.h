/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *resourceChanged; // @synthesize resourceChanged=_resourceChanged;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteReply; // @synthesize inviteReply=_inviteReply;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteNotification; // @synthesize inviteNotification=_inviteNotification;
- (_Bool)notificationNameIn:(id)arg1;
- (_Bool)notificationNameMatches:(id)arg1;
@property(readonly, nonatomic) _Bool isResourceChanged;
@property(readonly, nonatomic) _Bool isInviteReply;
@property(readonly, nonatomic) _Bool isInviteNotification;
- (id)description;
- (id)copyParseRules;
- (void)dealloc;

@end
