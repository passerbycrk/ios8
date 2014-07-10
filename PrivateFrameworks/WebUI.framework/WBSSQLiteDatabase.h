/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface WBSSQLiteDatabase : NSObject
{
    NSURL *_url;
    struct sqlite3 *_handle;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) struct sqlite3 *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (int)_openWithFlags:(int)arg1;
@property(readonly, nonatomic) long long changedRowCount;
@property(readonly, nonatomic) long long lastInsertRowID;
@property(readonly, nonatomic) NSString *lastErrorMessage;
- (id)fetchQuery:(id)arg1;
- (int)executeQuery:(id)arg1;
- (int)close;
- (int)open;
- (void)dealloc;
- (id)initWithURL:(id)arg1 queue:(id)arg2;

@end
