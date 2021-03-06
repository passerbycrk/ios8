/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
}

@property(readonly, retain, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) long long actionType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

