/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArray.h"

@class IMMessage, IMMessageItem;

@interface NSArray (IMChatItems)
- (id)__imItems;
- (void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)__itemForChatItemAtIndex:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) IMMessageItem *__imLastMessageItem;
- (id)messages;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)messageForChatItemAtIndex:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property(readonly, retain, nonatomic) IMMessage *lastIncomingMessage;
@property(readonly, retain, nonatomic) IMMessage *lastFinishedMessage;
@property(readonly, retain, nonatomic) IMMessage *lastMessage;
@end

