/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSDate;

@interface WBSAutomaticReadingListRecordRange : NSObject <NSCopying>
{
    id _newest;
    NSDate *_newestCreationDate;
    id _oldest;
    NSDate *_oldestCreationDate;
}

@property(copy, nonatomic) NSDate *oldestCreationDate; // @synthesize oldestCreationDate=_oldestCreationDate;
@property(copy, nonatomic) id oldest; // @synthesize oldest=_oldest;
@property(copy, nonatomic) NSDate *newestCreationDate; // @synthesize newestCreationDate=_newestCreationDate;
@property(copy, nonatomic) id newest; // @synthesize newest=_newest;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setOldest:(id)arg1 creationDate:(id)arg2;
- (void)setNewest:(id)arg1 creationDate:(id)arg2;
- (id)initWithNewest:(id)arg1 newestCreationDate:(id)arg2 oldest:(id)arg3 oldestCreationDate:(id)arg4;

@end

