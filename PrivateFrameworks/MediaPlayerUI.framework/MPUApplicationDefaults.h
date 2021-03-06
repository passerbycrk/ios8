/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MPUApplicationDefaults : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_applicationIdentifier;
    NSDictionary *_defaultValues;
}

- (void).cxx_destruct;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)_objectForKey:(id)arg1 expectedTypeID:(unsigned long long)arg2;
- (void)_defaultsDidChange;
- (id)_defaultsDidChangeNotificationName;
- (struct __CFString *)_defaultsDomain;
- (void)removeValueForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)registerDefaults:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationIdentifier:(id)arg1;

@end

