/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPUViewControllerFactory <NSObject>
+ (id)viewControllerForIdentifier:(id)arg1 withDataSource:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfigurationBlock:(id)arg2;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfiguration:(id)arg2;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1;
+ (id)configurationForViewControllerIdentifier:(id)arg1;
@end
