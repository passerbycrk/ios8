/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSString;

@interface PLCPLDownloadContext : NSObject
{
    _Bool _completed;
    NSString *_taskIdentifier;
    NSString *_resourceTypeDescription;
    double _progress;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property _Bool completed; // @synthesize completed=_completed;
@property double progress; // @synthesize progress=_progress;
@property(retain) NSString *resourceTypeDescription; // @synthesize resourceTypeDescription=_resourceTypeDescription;
@property(retain) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void)dealloc;

@end

