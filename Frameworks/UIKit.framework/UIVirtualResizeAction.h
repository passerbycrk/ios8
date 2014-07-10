/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSAction.h"

@interface UIVirtualResizeAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
@property(readonly, nonatomic) long long virtualVerticalSizeClass;
@property(readonly, nonatomic) long long virtualHorizontalSizeClass;
@property(readonly, nonatomic) struct CGSize virtualSize;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithVirtualSize:(struct CGSize)arg1 virtualHorizontalSizeClass:(long long)arg2 virtualVerticalSizeClass:(long long)arg3;

@end
