/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface DAMailboxRequest : NSObject
{
    int _requestType;
    int _bodyFormat;
    NSString *_messageID;
}

@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)init;

@end

