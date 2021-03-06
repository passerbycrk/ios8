/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSCondition;

// Not exported
@interface OITSUFastReadInvalidatingCache : NSObject
{
    id mGenerator;
    id mValue;
    long long mReaderCount;
    NSArray *mToDispose;
    _Bool mReentrant;
    NSCondition *mCondition;
    _Bool mIsGenerating;
}

- (void)invalidate;
- (id)value;
- (void)p_setValue:(id)arg1;
- (void)dealloc;
- (id)initForReentrant:(_Bool)arg1 withGenerator:(id)arg2;

@end

