/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface EKRelation : NSObject
{
    NSString *_entityName;
    _Bool _toMany;
    _Bool _ownsRelated;
    NSString *_inversePropertyName;
}

+ (id)relationWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyName:(id)arg3 ownsRelated:(_Bool)arg4;
+ (id)relationWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyName:(id)arg3;
@property(readonly, nonatomic) NSString *inversePropertyName;
@property(readonly, nonatomic) _Bool ownsRelatedObject;
@property(readonly, nonatomic) _Bool toMany;
- (void)dealloc;
- (id)description;
- (id)initWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyName:(id)arg3 ownsRelated:(_Bool)arg4;

@end

