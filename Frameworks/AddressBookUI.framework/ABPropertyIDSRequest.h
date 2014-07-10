/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSIDQueryControllerDelegate-Protocol.h"

@class NSArray, NSString;

@interface ABPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate>
{
    NSArray *_propertyItems;
    NSString *_listenerID;
    NSString *_service;
    id _requestResultBlock;
    id _idQueryResultHandler;
}

@property(copy, nonatomic) id idQueryResultHandler; // @synthesize idQueryResultHandler=_idQueryResultHandler;
@property(copy, nonatomic) id requestResultBlock; // @synthesize requestResultBlock=_requestResultBlock;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *listenerID; // @synthesize listenerID=_listenerID;
@property(retain, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
- (void)_requestStatusSync:(_Bool)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)dealloc;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 sync:(_Bool)arg3 resultBlock:(id)arg4;

@end
