/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, UITableView, UIView;

@interface PLSlideshowAirPlayRoutesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_containerView;
    UITableView *_table;
    NSArray *_airplayRoutes;
    unsigned long long _selectedRouteIndex;
}

@property(nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)dealloc;
- (void)loadView;
- (id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;

@end

