/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying>
{
    NSString *_accountID;
    long long _dataclass;
}

@property(readonly, nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2;

@end
