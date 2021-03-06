/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <UIKit/UITableViewDataSource-Protocol.h>

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource>
{
    _Bool _limitingWithSections;
    long long _maxVisibleSection;
    long long _numberOfVisibleItemsInLastSection;
    long long _filterType;
    id <UITableViewDataSource> _tableDataSource;
}

@property(nonatomic) id <UITableViewDataSource> tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2;

@end

