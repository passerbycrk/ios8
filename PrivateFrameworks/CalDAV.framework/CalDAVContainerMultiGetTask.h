/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVContainerMultiGetTask.h"

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask
{
    _Bool _getScheduleTags;
    _Bool _getScheduleChanges;
}

@property(nonatomic) _Bool getScheduleChanges; // @synthesize getScheduleChanges=_getScheduleChanges;
@property(nonatomic) _Bool getScheduleTags; // @synthesize getScheduleTags=_getScheduleTags;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (id)copyAdditionalPropElements;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(_Bool)arg3 getScheduleChanges:(_Bool)arg4;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(_Bool)arg3 getScheduleChanges:(_Bool)arg4 appSpecificCalendarItemClass:(Class)arg5;

@end

